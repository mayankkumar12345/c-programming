#include<stdio.h>
int main ()
{
	int a;
	printf("the basic salary of the employee is :");
	scanf("%d",&a);
	int b=(a*45)/100;//b is da
	int c=(a*16)/100;//c is hra
	int d=a+b+c;
	printf("the total salary of the employee is %d",d);
	return 0;
}
