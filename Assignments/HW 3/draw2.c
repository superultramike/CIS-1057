/*
    draw triangle
    draw rectangle
    display 2 blank lines
    draw triangle
    draw rectangle
*/

#include <stdio.h>

int main() { // DRAWS ALL SHAPES

    draw_triangle();
    draw_reactangle();
    draw_2blankline();
    draw_triangle();
    draw_reactangle();

    return 0;
}

void draw_2blankline(void) { // DRAWS BLANK LINE LINE BY LINE
    printf("\n");
    printf("\n");
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
