#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define FIRST_NAME 20

typedef struct {
    char fn[FIRST_NAME];
    char ln[20];
    int age;
} person_t;

void print_person(person_t p);

int main() {

    char *word;
    char buffer[50];
    person_t p[4];
    int count = 0;

    FILE *file = fopen("data.txt", "r");

    if(file != NULL) {
        while(fgets(buffer, 50, file) != NULL) {
            buffer[strlen(buffer)-1] = '\0';
            //printf("%s\n", buffer);

            strcpy(p[count].fn, strtok(buffer, ","));
            strcpy(p[count].ln, strtok(NULL, ","));
            p[count].age = atoi(strtok(NULL, ","));

            print_person(p[count]);

            count++;
        }
        fclose(file);
    }
    else {
        perror("File failed to open");
        exit(1);
    }

    file = fopen("output.txt", "w");

    if(file != NULL) {
        for(int i=0; i<count; i++)
            fprintf(file, "%s %s %d\n", p[i].fn, p[i].ln, p[i].age);
    }
    else {
        perror("File failed to open");
        exit(2);
    }

    fclose(file);

    return 0;
}

void print_person(person_t p) {
    printf("%s %s %d\n", p.fn, p.ln, p.age);
}
