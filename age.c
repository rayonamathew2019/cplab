/*PROGRAM TO FIND THE YOUNGEST OF THREE CHILDREN
AUTHOR:JINJU RAJU 
DATE:20/02/19*/
#include<stdio.h>
void main()
{
int ramage,shyamage,ajayage;
printf("enter the age of ram,shyam,ajay");
scanf("%d%d%d",&ramage,&shyamage,&ajayage);
if(ramage<shyamage&&ramage<ajayage)
	{
	printf("ram is youngest");
	}
if(shyamage<ramage&&shyamage<ajayage)
	{
	printf("shyam is youngest");
	}
if(ajayage<ramage&&ajayage<shyamage)
	{
	printf("ajay is youngest");
	}
}
