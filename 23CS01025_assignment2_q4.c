#include<stdio.h>

int main(){
    int year = 0;
    int i = 0;
    printf("\n enter year:");
    scanf("%d", &year);
    if (year%4==0){
        if (year%100==0){
            if(year%400==0){
                i = 1;

            }
            else i = 0;

        }
        else i = 1;


    }
    printf("\ni = %d", i);
    if(i==1){ 
        printf("\n the given year is a leap year");

    }if(i==0){
        printf("\n the given year is not a leap year");

    }
    return 0;
    