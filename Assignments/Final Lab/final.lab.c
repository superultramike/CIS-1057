#import <stdio.h>
#import <stdlib.h>
#import <string.h>

#define MAX_PRODUCTS 25
#define MAX_LINE_ITEMS 200
#define MAX_READ_CHARS 200

typedef struct {
    char product_code[10];
    char description[50];
    double price;
    int quantity;
} product_t;

typedef struct {
    int invoice_id;
    char product_code[10];
    double price;
    int quantity;
    double total;
} line_item_t;

int main() {

    // Declares general vars and prints product page
    product_t pa[MAX_PRODUCTS];
    int pa_count;
    pa_count = read_products(pa, "products.csv");
    printf("%d products read.\n", pa_count);
    print_products(pa, pa_count);

    // Declares general vars and prints line items page
    line_item_t la[MAX_LINE_ITEMS];
    int la_count;
    la_count = read_line_items(la, "lineitems.csv");
    printf("%d products read.\n", la_count);
    print_line_items(la, la_count);

    // Declares general vars
    int quantity_sums[pa_count];
    double total_sums[pa_count];

    // Declares each element within report to be 0
    zero_quantities(quantity_sums, pa_count);
    zero_totals(total_sums, pa_count);

    // Calculate new report and print it
    calc_report(pa, pa_count, la, la_count, total_sums, quantity_sums);
    print_report(pa, pa_count, total_sums, quantity_sums);

    // Writes report to a file
    write_report(pa, pa_count, total_sums, quantity_sums, "report.txt");

    // Updates old product list with new data
    update_products(pa, pa_count, quantity_sums);

    // Prints and writes an updated product page
    printf("Updated Products\n");
    print_products(pa, pa_count);
    write_products(pa, pa_count, "newProducts.txt");

    return 0;
}

int read_products(product_t pa[], char *filename) {
    FILE *file = fopen("products.csv", "r");
    char buffer[MAX_READ_CHARS];
    int pa_count = 0;

    if(file != NULL){
        while(fgets(buffer, MAX_READ_CHARS, file) != NULL) {
            buffer[strlen(buffer)-1] = '\0';
            //printf("%s\n", buffer);

            strcpy(pa[pa_count].product_code, strtok(buffer, ","));
            strcpy(pa[pa_count].description, strtok(NULL, ","));
            pa[pa_count].price = atof(strtok(NULL, ","));
            pa[pa_count].quantity = atoi(strtok(NULL, ","));

            pa_count++;
        }
        fclose(file);
    }
    else{
        perror("File failed to open");
    }
    return pa_count;
}

void print_product(product_t pa) {
    printf("%-6s %-55s %10.2f %10d\n", pa.product_code, pa.description, pa.price, pa.quantity);
}

void print_products(product_t *pa, int pa_count) {
    printf("Code   Description                                                  Price     Quantity\n");
    for(int i=0; i<pa_count; i++) {
        print_product(pa[i]);
    }
    printf("\n");
}

int read_line_items(line_item_t la[], char *filename) {
    FILE *file = fopen("lineitems.csv", "r");
    char buffer[MAX_READ_CHARS];
    int la_count = 0;
    if(file != NULL){
        while(fgets(buffer, MAX_READ_CHARS, file) != NULL) {
            buffer[strlen(buffer)-1] = '\0';
            //printf("%s\n", buffer);

            la[la_count].invoice_id = atoi(strtok(buffer, ","));
            strcpy(la[la_count].product_code, strtok(NULL, ","));
            la[la_count].price = atof(strtok(NULL, ","));
            la[la_count].quantity = atoi(strtok(NULL, ","));
            la[la_count].total = atof(strtok(NULL, ","));

            la_count++;
        }
        fclose(file);
    }
    else{
        perror("File failed to open");
    }
    return la_count;
}

void print_line_item(line_item_t la) {
    printf("%-6d %-10s %-15.2f %-5d %10.2f\n", la.invoice_id, la.product_code, la.price, la.quantity, la.total);
}

void print_line_items(line_item_t *la, int la_count) {
    printf("ID     Code       Price        Quantity      Total\n");
    for(int i=0; i<la_count; i++) {
        print_line_item(la[i]);
    }
    printf("\n");
}

void zero_quantities(int quantity_sums[], int pa_count) {
    for(int i=0; i<pa_count; i++) {
        quantity_sums[i] = 0;
    }
}

void zero_totals(double total_sums[], int pa_count) {
    for(int i=0; i<pa_count; i++) {
        total_sums[i] = 0.0;
    }
}

int calc_report(product_t pa[], int pa_count, line_item_t la[], int la_count, double total_sums[], int quantity_sums[]) {
    for(int i=0; i<pa_count; i++) {
        for(int j=0; j<la_count; j++) {
            if(strcmp(la[j].product_code, pa[i].product_code) == 0) {
                quantity_sums[i] += la[j].quantity;
                total_sums[i] += la[j].total;
            }
        }
    }
}

void print_report(product_t pa[], int pa_count, double total_sums[], int quantity_sums[]) {
    int tot_quantity = 0; // to aggregate the sum of quantity_sums
    double tot_sums = 0; // to aggregate the sum of total_sums

    for(int i=0; i<pa_count; i++) {
        tot_quantity += quantity_sums[i];
        tot_sums += total_sums[i];
    }

    printf("Product Sales Report\nCode      Quantity       Total\n");
    for(int i=0; i<pa_count; i++) {
        printf("%-12s %-8d %8.2f\n", pa[i].product_code, quantity_sums[i], total_sums[i]);
    }
    printf("\n");

    printf("Total items sold: %20d\n", tot_quantity);
    printf("Total revenue from sales: %12.2f\n\n", tot_sums);
}

void write_report(product_t pa[], int pa_count, double total_sums[], int quantity_sums[], char *filename) {
    int tot_quantity = 0; // to aggregate the sum of quantity_sums
    double tot_sums = 0; // to aggregate the sum of total_sums
    FILE *file = fopen("report.txt", "w");

    for(int i=0; i<pa_count; i++) {
        tot_quantity += quantity_sums[i];
        tot_sums += total_sums[i];
    }

    fprintf(file, "Product Sales Report\nCode      Quantity       Total\n");
    for(int i=0; i<pa_count; i++) {
        fprintf(file, "%-12s %-8d %8.2f\n", pa[i].product_code, quantity_sums[i], total_sums[i]);
    }

    fprintf(file, "\n");
    fprintf(file, "Total items sold: %20d\n", tot_quantity);
    fprintf(file, "Total revenue from sales: %12.2f\n\n", tot_sums);
}

void update_products(product_t pa[], int pa_count, int quantity_sums[]) {
    for(int i=0; i<pa_count; i++) {
        pa[i].quantity -= quantity_sums[i];
    }
}

void write_products(product_t pa[], int pa_count, char filename[]) {
    FILE *file = fopen("newProducts.txt", "w");
    if(file != NULL) {
        fprintf(file, "Updated Products\n");
        for(int i=0; i<pa_count; i++)
            fprintf(file, "%s,%s,%.2f,%d\n", pa[i].product_code, pa[i].description, pa[i]. price, pa[i].quantity);
    }
    fclose(file);
}
