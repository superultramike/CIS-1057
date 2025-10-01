/*
    DRAWS ROCKETSHIP
    DRAWS MALE FIGURE
    DRAWS FEMALE FIGURE
*/

#include <stdio.h>

int main() { // PRINTS ALL FUNCTIONS FROM BELOW TO DRAW MAIN PICTURE

    draw_rocketship();
    skip_5_lines();
    draw_male();
    skip_5_lines();
    draw_female();

    return 0;
}

void skip_5_lines(void) { // DRAWS BLANK LINE LINE BY LINE
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}

void draw_circle(void) { // DRAWS A CIRCLE LINE BY LINE
    printf("    *   \n");
    printf("  *   * \n");
    printf("   * *  \n");
}

void draw_intersect(void) { // DRAWS INTERSECT OF TRIANGLE LINE BY LINE
    printf("   / \\   \n");
    printf("  /   \\  \n");
    printf(" /     \\ \n");
}

void draw_base(void) { // DRAWS BASE OF SHAPE
    printf(" -------\n");
}

void draw_side(void) { // DRAWS SIDES LINE BY LINE
    printf("|       |\n");
    printf("|       |\n");
}

void draw_triangle(void) { // DRAWS TRIANGLE USING BASE + INTERSECT
    draw_intersect();
    draw_base();
}

void draw_reactangle(void) { // DRAWS REACTANGLE USING BASE + SIDES
    draw_base();
    draw_side();
    draw_base();
}

void draw_rocketship(void) { // DRAWS ROCKETSHIP
    draw_intersect();
    draw_base();
    draw_reactangle();
    draw_intersect();
}

void draw_male(void) { // DRAWS MALE FIGURE
    draw_circle();
    draw_reactangle();
    draw_intersect();
}

void draw_female(void) { // DRAWS FEMALE FIGURE
    draw_circle();
    draw_triangle();
    draw_intersect();
}
