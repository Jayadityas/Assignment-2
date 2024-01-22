#include<stdio.h>

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if(a&1) printf("the given number is odd");
    else printf("the given number is even");
    return 0;

}