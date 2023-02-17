#include<stdio.h>

int main(){
	
	
	float h,b,area;
	x:
	printf("value of h: ");
	scanf("%f",&h);
	printf("value of b: ");
	scanf("%f",&b);
	area=0.5*h*b;
	printf("area=%f\n",area);
	printf("\n");
	goto x;	
	
}
