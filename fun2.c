/*PROGRAM to wirte a function that receives marks received by a student in 3 subjects and returns the average and percentage of these marks. Call this function from main( ) and print the results in main( ).
AUTHOR:JIJNU RAJU
DATE:20/03/19*/
#include<stdio.h>
float avg(int a,int b,int c );
void main()
{
int num1,num2,num3;
printf("enter three marks of the student");
scanf("%d%d%d",&num1,&num2,&num3);
avg(num1,num2,num3);
}
float avg(int a,int b,int c )
{
float av,pe;
av=(a+b+c)/3;
pe=(a+b+c)*100/300;
printf("the average and percentage is%fand %f",av,pe);
}
