#include<stdio.h>

int main(){
    int j, i;
    printf("Enter a number:");
    scanf("%d", &j);
    i = ((j>100)&&(j<200)&&(j%2))?1:0;
    if(i==1) printf("True");
    if(i==0) printf("False");
    return 0;

}