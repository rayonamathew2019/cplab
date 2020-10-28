/*PROGRAM TO FIND A NUMBER IS PALINDROME OR NOT
AUTHOR:JIJNU RAJU
DATE:13/02/19*/
#include<stdio.h>
void main()
{
int reverse=0,number,counter,rem,copy;
printf("enter the number to find the palindrome");
scanf("%d",&number);
copy=number;
while(number>0)
	{
	rem=number%10;
	reverse=(reverse*10)+rem;
	number=number/10;
	}
if(copy==reverse)
	{
	printf("%d is palindrome",copy);
	}
else
	{
	printf("%d is not palindrome",copy);
	}
}
