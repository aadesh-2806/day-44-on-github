#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,t,n,r,j;
	char a[50];
	printf("hello\nenter string=");
	gets(a);
	
	t=0;
	for(i=0;a[i]!='\0';i++);
	for(s=0;s<i;s++)
	{
		r=1;
		for(j=0;j<i;j++)
		{
			if(a[s]==a[j] && j!=s)
			{
				r++;
			}
		}
		if(r==1)
		{
			t++;
		}
	}
	
	if(t!=0)
	{
		printf("%d",t);
	}
	else
	{
		printf("-1");
	}
	getch();
}
