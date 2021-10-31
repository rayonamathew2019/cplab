/*PROGRAM TO FIND GREATEST OF THREE NUMBERS
Author:Jinju Raju
Date:06/02/19*/
#include<stdio.h>
void main()
{
int number1,number2,number3,big;
printf("enter the three numbers");
scanf("%d%d%d",&number1,&number2,&number3);
big=number1;
if(big<number2)
	{
	big=number2;
	}
if(big<number3)
	{
	big=number3;
	}
printf("%d is greater than the three numbers %d,%d and%d",big,number1,number2,number3);
}
