#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("marks obtained in hindi:");
	scanf("%d",&a);
	printf("marks obtained in english:");
	scanf("%d",&b);
	printf("marks obtained in physics:");
	scanf("%d",&c);
	printf("marks obtained in maths:");
	scanf("%d",&d);
	printf("marks obtained in biology");
	scanf("%d",&e);
	int f=(a+b+c+d+e)/5;
	printf("percentage obtained by the student is %d",f);
	return 0;
}
