#include<stdio.h>
main()
{
	int x,y,z;
	char ch;
	printf("enter two values x and y\n");
	scanf("%d%d",&x,&y);
	printf("enter char for operation\n");
	scanf("%c",&ch);
	(ch=='+')?printf("%d",x+y):((ch=='-')?printf("%d",x-y):((ch=='*')?printf("%d",x*y):printf("%d",x/y)));

	
}

