/*TO FIND WEATHER THE AREA IS GREATER THAN THE PERIMETER
AUTHOR:JINJU RAJU
DATE:20/02/19*/
#include<stdio.h>
void main()
{
int length,breadth,area,perimeter;
printf("enter the length and breadth");
scanf("%d%d",&length,&breadth);
area=length*breadth;
perimeter=2*(length+breadth);
if (area>perimeter)
	{
	printf("area is greater than perimeter");
	}
else
	{
	printf("area is less than the perimeter");
	}
}
