#include<stdio.h>

typedef struct{
    int first;
    int second;
    int third;
    int fourth;
    char nickname[10];
} address_t;

int main() {
    int k=0;
    address_t IP[100];
    scan_address(IP);

    while(IP[k].nickname!="none") {
        k++;
    }
    for(int i=0;i<=k;i++) {
        for(int j=i+1;j<=k;j++) {
            if(local_address(IP[i],IP[j])==1) {
                print_address(IP[i],IP[j]);
            }
        }
    }
    return 0;
}

void scan_address(address_t IP[]) {
    FILE *file = fopen("sample.txt","r"); // MAKE SURE THE FILE IS PRESENT IN THE FOLDER

    for(int n=0; n<100; n++) {
        fscanf(file,"%d.%d.%d.%d %s\n", &IP[n].first, &IP[n].second, &IP[n].third, &IP[n].fourth, IP[n].nickname);

        if(IP[n].first==0 && IP[n].second==0 && IP[n].third==0 && IP[n].fourth==0 && IP[n].nickname=="none") {
            break;
        }
    }
    fclose(file);
}

void print_address(address_t IP[]) {
    printf("Machines %s and %s are on the same class C subnet %d.%d.%d.", IP->nickname, IP->nickname, IP->first, IP->second, IP->third);
}

int local_address(address_t IP, address_t other) {
    return IP.first==IP.first && IP.second==IP.second && IP.third==IP.third;
}
