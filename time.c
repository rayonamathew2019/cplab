/*Program to print 24 hours of a day with suitable suffixes like AM, PM , Noon and Midnight.
AUTHOR:JINJU RAJU
DATE:27/02/19*/
#include<stdio.h>
void main()
{
int i;
printf("12 Midnight\n");
for(i=1;i<12;i++)
	{
	printf("%dAM\n",i);
	}
printf("12 at Noon\n");
for(i=1;i<12;i++)
	{
	printf("%dPM\n",i);
	}
}
