/*PROGRAM to wirte a function which receives a float and an int from main( ), finds the product of these two and returns the product which is printed through main( ).
AUTHOR:JIJNU RAJU
DATE:20/03/19*/
#include<stdio.h>
float prod(int a,float b);
void main()
{
int number1;
float number2,i;
printf("enter the interger value and the float value:");
scanf("%d%f",&number1,&number2);
i=prod(number1,number2);
printf("the value is %f",i);
} 
float prod(int a,float b)
{
float k;
k=b*a;
return k;
}
