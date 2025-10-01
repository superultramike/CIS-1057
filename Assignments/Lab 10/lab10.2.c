/*
    Define a structure type element_t to represent one element from the periodic table of elements.
    Components should include the
        atomic number (an integer); --
        the name, --
        chemical symbol, --
        class (strings); --
        numeric field for the atomic weight;
        seven-element array of integers for the number of electrons in each shell.

    The following are the components of an element_t structure for sodium:
    11  Sodium  Na  alkali_metal  22.9898  2 8 1 0 0 0 0

    Define and test I/O functions scan_element and print_element.
*/
#include <stdio.h>

struct element_t {
    int atom_num;//
    char atom_name[50];//
    char atom_sym[50];//
    char atom_class[50];
    double atom_weight;
    int atom_elec_array[7];
};

void scan_element(struct element_t * e);
void print_element(struct element_t e);

void scan_element(struct element_t * e) {
    printf("What's the atom number (11): ");
    scanf("%d", &e->atom_num);

    printf("What's the atom name (Sodium): ");
    scanf("%s", &e->atom_name);

    printf("What's the atom symbol (Na): ");
    scanf("%s", &e->atom_sym);

    printf("What's the atom class (Alkali Metal): ");
    scanf("%s", &e->atom_class);

    printf("What's the atom number (22.9898): ");
    scanf("%lf", &e->atom_weight);

    for(int i=0; i<7; i++) {
        printf("How many electrons in shell #%d: ", i+1);
        scanf("%d", &e->atom_elec_array[i]);
    }
}

void print_element(struct element_t e) {
    printf("%d\t", e.atom_num);
    printf("%s\t", e.atom_name);
    printf("%s\t", e.atom_sym);
    printf("%s\t", e.atom_class);
    printf("%lf\t", e.atom_weight);
    for(int i=0; i<7; i++) {
        printf("%d ", e.atom_elec_array[i]);
    }
}

int main() {
    struct element_t e;
    scan_element(&e);
    print_element(e);
}
