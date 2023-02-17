#include<stdio.h>

int main(){
	
	float l,b,area;
	x:
	printf("value of l: ");
	scanf("%f",&l);
	printf("value of b: ");
	scanf("%f",&b);
	area=l*b;
	printf("area=%f\n",area);
	printf("\n");
	goto x;
	
}
