#include<stdio.h>
int main()
{
int a;//a is in km
	printf("number in km :");
	scanf("%d",&a);
	int b=a*1000;
	printf("the value of given number in metre is %d",b);
	int c=a*100000;
	printf("the value of given number in centimetre is %d",c);
	int d=a*1000000;
	printf("the value of the given number in millimetre is %d",d);
	return 0;
}
