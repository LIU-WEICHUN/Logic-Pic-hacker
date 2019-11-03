#include<stdio.h>
#include<stdlib.h>

void get_spacesize(int* m, int* n);

int main(void){
    int m,n;

    get_spacesize(&m, &n);

    int 
    




}

void get_spacesize(int* m, int* n){
    printf("== enter size m*n ==\n");
    printf("(number of column)m = ");
    scanf("%d", m);
    printf("(number of row)n = ");
    scanf("%d", n);
    printf("game with a %d*%d space\n",*m, *n);
}