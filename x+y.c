#include<stdio.h>

int main(){
	int a,x,y;
	
	x:
	printf("value of x: ");
	scanf("%f",&x);
	printf("value of y: ");
	scanf("%f",&y);
	a=(x+y)*(x+y);
	printf("%f\n",a);	
	printf("\n");
	goto x;
	
	
}
