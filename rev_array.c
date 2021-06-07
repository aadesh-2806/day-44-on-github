#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a[200],b[200],t,j,l,x,r,i;
	
	printf("welcome\nenter number of values= ");
	scanf("%d",&x);

	for(i=0;i<x;i++)
	{
		printf("enter value ");
		scanf("%d",&a[i]);
	}
	
	r=x;
	for(i=0;i<x;i++)
	{
		for(l=0;l<r-1;l++)
		{	
			t=a[l];
			a[l]=a[l+1];
			a[l+1]=t;
		}
		r--;
	}
					
	for(i=0;i<x;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}

