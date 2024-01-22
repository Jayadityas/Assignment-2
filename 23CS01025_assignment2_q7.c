#include<stdio.h>


int main(){
    double mealcost;
    double tippct;
    double taxpct;
    double totalcost;
    printf("Enter the meal cost:");
    scanf("%lf", &mealcost);
    printf("Enter the tip percent:");
    scanf("%lf", &tippct);
    printf("Enter the tax percent:");
    scanf("%lf", &taxpct);
    totalcost = mealcost;
    totalcost = totalcost+(tippct/100)*mealcost;
    totalcost = totalcost+(taxpct/100)*mealcost;
    printf("the total meal cost is %d", (int)totalcost);

    return 0;
}