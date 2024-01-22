#include<stdio.h>
int main(){

    int totaldays;
    int days,years,months,weeks;
    printf("Enter total number of days:");
    scanf(" %d", &totaldays);
    years = totaldays/365;
    totaldays = totaldays%365;
    months = totaldays/30;
    totaldays = totaldays%30;
    weeks = totaldays/7;
    totaldays = totaldays%7;
    printf("\nyears=%d\nmonths=%d\nweeks=%d\ndays=%d\n", years, months, weeks, totaldays);
    return 0;

}