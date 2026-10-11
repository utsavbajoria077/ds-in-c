#include<stdio.h>


int main()
{
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int arr[n];

	for(int i=0; i<n; i++)
	{
		printf("enter element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	int element;
	printf("enter element to be searched:");
	scanf("%d",&element);
	for(int i=0; i<n; i++)
	{
		if(arr[i]==element)
		{
			printf("element found at postion:%d",i+1);
			return 0;
		}
	}
	printf("not found..");
}
