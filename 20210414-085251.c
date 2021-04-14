// Find sum of array

#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],i,sum=0,n;
	clrscr();
	printf("Size of array :");
 scanf("%d",&n);

	for(i=0;i<n;i++)
  
	{
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	printf("sum is all array elements:%d",sum);
	getch();
}
