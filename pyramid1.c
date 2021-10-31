/*Program to print half pyramid a using numbers
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
AUTHOR:JINJU RAJU
DATE:27/02/19*/
#include<stdio.h>
void main()
{ 
int i,j,limit;
printf("enter a limit");
scanf("%d",&limit);
for(i=1;i<=limit;i++)
	{
	for(j=1;j<=i;j++)
		{
		printf("%d\t",j);
		}
	printf("\n");
	}
}
