#include<stdio.h>
main()
{
	int arr[10],i,j,temp;
	printf("enter an array::");
	for(i=0;i<10;i++)
	{
	scanf("%d\,",&arr[i]);
	}
	for(i=0,j=9;i<10/2;i++,j--)
	{
	temp=arr[j];
	arr[i]=arr[j];
	arr[j]=temp;
	}
	printf("the values after swaping\n");
	for(i=0;i<10;i++)
	{
	printf("%d\n",arr[i]);
	}
	
}
