#include<stdio.h>
int large(int n,int a[]);
int main()
{
	int n,i,l;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for (i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	}
	
l=large(n,a);
printf("%d is the largest elements",l);	
	return 0;	
}
int large(int n,int a[])
{
int	l=a[0],i;
	for (i=1;i<n;i++)
	{	
		if(l<a[i])
		{
			l=a[i];
		}
	}
	return l;
}


