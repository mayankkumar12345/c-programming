#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("enter the three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b&&b<c){
		printf("%d is the greatest number",c);
		}
		if(a<b&&c<a){
			printf("%d is the greatest number",b);
			}
			if(a>b&&a>c){
				printf("%d is the greatest number",a);
			}
	return 0;
}
