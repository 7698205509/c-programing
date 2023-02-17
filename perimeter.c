#include<stdio.h>

int main(){
     
	float	r,perimeter;
	float pi=3.14;
	x:
	printf("value of r: ");
	scanf("%f",&r);
	perimeter = 2*pi*r;
	printf("%f\n",perimeter);	
	printf("\n");
	goto x;
	
}
