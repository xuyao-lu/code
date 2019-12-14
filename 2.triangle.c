#include <stdio.h>
int main()
{
	int n,j,i;
	int arr[1000]={1};
	while((scanf("%d",&n)!=EOF))
	{
		arr[1]=1;
		for (i=1;i<n;i++)
		arr[i]=0;
		for( i=0;i<n;i++)
		{
			for( j=i;j>0;j--)
			
				arr[j]=arr[j]+arr[j-1];
			for( j=0;j<i;j++)
				printf ("%d ",arr[j]);
			printf ("%d",arr[j]);
			printf ("\n");
		}
		printf ("\n");
		
	}

}
