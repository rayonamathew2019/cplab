/*TO FIND WEATHER THE AREA IS GREATER THAN THE PERIMETER
AUTHOR:JINJU RAJU
DATE:20/02/19*/
#include<stdio.h>
void main()
{
int length,br,area,perimeter;
printf("enter length and breadth");
scanf("%d%d",&length,&br);
area=length*br;
perimeter=2*(length+br);
if (area>perimeter)
	{
	printf("area is greater than perimeter");
	}
else
	{
	printf("area is less than the perimeter");
	}
}
