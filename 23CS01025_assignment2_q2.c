#include<stdio.h>
int main(){

    int num1, num2, num3;
    int max;
    printf("\n Enter three numbers:");
    scanf("%d%d%d", &num1, &num2, &num3);
    max = (num1>num2)?num1:num2;
    max = (max>num3)?max:num3;
    printf("\nMax number is %d", max);
    return 0;

}