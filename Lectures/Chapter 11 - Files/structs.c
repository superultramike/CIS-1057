#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <float.h>

typedef struct {
    char fn[25];
    char ln[25];
    int age;
    double income;
} Name;


typedef struct{
    int x;
    int y;
} Point;


typedef struct{
    Point pt1;
    Point pt2;
} Rectangle;

int main(){
    Name names[20];
    int length = read2(names, "file2.txt");
    print_array(names, length);

    write(names, length, "file3.txt");

    printf("Avg income = %.2f\n", avg_income(names, length));

    return 0;
}


void print(Name n){
    printf("%s %s %d %.2f\n", n.fn, n.ln, n.age, n.income);
}

void print_array(Name *names, int length){
    int i = 0;
    for(i=0; i<length; i++)
        print(names[i]);
}

int read(Name *names, char *filename){
    FILE *file = fopen(filename, "r");
    char buffer[200];
    char *ptr;
    int i = 0;
    if(file != NULL){
        while(fgets(buffer, 200, file) != NULL){
            buffer[strlen(buffer)-1] = '\0';
            //printf("|%s|\n", buffer);
            ptr = strtok(buffer, ",");
            strcpy(names[i].fn, ptr);
            ptr = strtok(NULL, ",");
            strcpy(names[i].ln, ptr);
            ptr = strtok(NULL, ",");
            names[i].age = atoi(ptr);
            ptr = strtok(NULL, ",");
            names[i].income = atof(ptr);
            i++;
        }
    }
    else{
        perror("File open failed.");
    }
    return i;
}


int read2(Name *names, char *filename){
    FILE *file = fopen(filename, "r");
    char buffer[200];
    char *ptr;
    int i = 0;
    if(file != NULL){
        while(fgets(buffer, 200, file) != NULL){
            buffer[strlen(buffer)-1] = '\0';
            //printf("|%s|\n", buffer);
            ptr = strtok(buffer, ",");
            strcpy(names[i].fn, ptr);
            ptr = strtok(NULL, ",");
            strcpy(names[i].ln, ptr);
            ptr = strtok(NULL, ",");
            names[i].age = atoi(ptr);
            ptr = strtok(NULL, ",");
            names[i].income = atof(ptr);
            i++;
        }
        fclose(file);
    }
    else{
        perror("File failed to open");
    }
    return i;
}


void write(Name *names, int length, char *filename){
    FILE *file = fopen(filename, "w");
    int i = 0;
    if(file != NULL){
        for(i=0; i<length; i++){
            fprintf(file, "First name: %s\n", names[i].fn);
            fprintf(file, "Last name: %s\n", names[i].ln);
            fprintf(file, "Age: %d\n", names[i].age);
            fprintf(file, "Income: $%.2f\n\n", names[i].income);
        }
        fclose(file);
    }
    else{
        perror("File failed to open");
    }
}


double avg_income(Name *names, int length){
    int i = 0;
    double sum = 0.0;
    for(i=0; i<length; i++)
        sum += names[i].income;
    return sum/length;
}
