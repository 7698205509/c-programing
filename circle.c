#include<stdio.h>

int main(){
	
	int r;
	float pi=3.14,area;
	x:
	printf("r value: ");
	scanf("%d", &r);
	area=pi*r*r;
	printf("area=%f",area);	
	goto x;
	
	
}
