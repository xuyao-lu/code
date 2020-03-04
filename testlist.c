#include<stdio.h>
struct date{        
    int maonth;     
    int day;        
    int year;       
}; 
int main()
{
    struct date today;
    struct date thismonth = {.maonth=7,.year=2017};

    today.maonth=07;
    today.day=31;
    today.year=2014;

  

    printf("Today's date is %i-%i-%i.\n",today.year,today.maonth,today.day);
    printf("Today's date is %i-%i-%i.\n",thismonth.year,thismonth.maonth,thismonth.day);
    return 0;
}
