/*
    Define a structure type auto_t to represent an automobile.
    Include components for
        make and
        model (strings),
        odometer reading,
        manufacture data
        purchase dates (use another user-defined type called date_t),
        and the gas tank (use a user-defined type tank_t with components for tank capacity
        and current fuel level, giving both in gallons).

    Write I/O functions
        scan_date, scan_tank, scan_auto,
        print_date, print_tank, and print_auto,

    and also write a driver function that repeatedly fills and displays an auto structure variable until EOF is encountered in the input file.

    Here is a small data set to try:
    Mercury Sable    99842 1 18 2001 5 30 1991 16   12.5
    Mazda   Navajo    123961 2 20 1993 6 15 1993 19.3 16.7
*/
#include <stdio.h>
#define SIZE 20

typedef struct {
        int month,day,year;
} date_t;

typedef struct {
        double capacity;
        double curent_Fuel;
} tank_t;

typedef struct {
        char make[SIZE];
        char model[SIZE];
        int odometer;
        date_t manufact;
        date_t purchase;
        tank_t tank;
} auto_t;

int main (void) {
    auto_t car;
    int stat = 1;

    FILE *file = fopen("car.txt", "r"); // MAKE SURE THE FILE IS PRESENT
    if (file == NULL){
        printf("ERROR: File failed to open");
        getch();
        fclose(file);
    }
    else
        while(stat>0) {
            stat=fscanf(file, "%s %s %d %d %d %d %d %d %d %lf %lf", &car.make,&car.model,&car.odometer,&car.manufact.month,&car.manufact.day,&car.manufact.year,&car.purchase.month,&car.purchase.day,&car.purchase.year,&car.tank.capacity,&car.tank.curent_Fuel);

            if (stat==11) {
                print_auto(car);
                printf("Maufactured date: ");
                print_date(car.manufact);
                printf("Purchased date: ");
                print_date(car.purchase);
                printf("Tank Capac and Fuel: ");
                print_tank(car.tank);
                printf("\n");
            }
        }
    getch();
    return 0;
}


int scan_date(date_t *date) {
    int res;
    res=scanf("%d %d %d", &(*date).month, &(*date).day, &(*date).year);

    if(res==3) {
        res = 1;
    }
    else if(res != EOF) {
        res = 0;
    }
    return res;
}

int scan_tank(tank_t *tank) {
    int res;
    res=scanf("%lf %lf", &(*tank).capacity, &(*tank).curent_Fuel);

    if(res==2) {
        res = 1;
    }
    else if(res != EOF) {
        res = 0;
    }
    return res;
}

int scan_automobile(auto_t *automo) {
    int res;
    res=scanf("%s %s %d %d %d %d %d %d %d %lf %lf", &(*automo).make,&(*automo).model,&(*automo).odometer,&(*automo).manufact.month,&(*automo).manufact.day,&(*automo).manufact.year,&(*automo).purchase.month,&(*automo).purchase.day,&(*automo).purchase.year,&(*automo).tank.capacity,&(*automo).tank.curent_Fuel);
    if(res==11) {
        res = 1;
    }
    else if(res != EOF) {
        res = 0;
    }
    return res;
}

void print_date(date_t da) {
    printf("%d-%d-%d\n", da.month, da.day, da.year);
}

void print_tank(tank_t ta) {
    printf("%2.2lf %2.2lf\n", ta.capacity, ta.curent_Fuel);
}

void print_auto(auto_t au) {
    printf("Vehicle: %s %s %d %d %d %d %d %d %d %.2f %.2f\n",au.make,au.model,au.odometer,au.manufact.month,au.manufact.day,au.manufact.year,au.purchase.month,au.purchase.day,au.purchase.year,au.tank.capacity,au.tank.curent_Fuel);
}
