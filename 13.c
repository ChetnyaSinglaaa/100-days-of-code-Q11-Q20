//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    if (year%4==0)
    printf("Leap Year");
    else 
    printf("Not a Leap Year");
return 0;

}