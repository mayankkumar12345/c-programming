#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two numbers");
	scanf("%d %d",&a,&b);
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("the swapped number is %d and %d",a,b);
	return 0;
}
