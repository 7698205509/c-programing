#include<stdio.h>
int main(){
	int a=10;
	int b=20;
	
	b=a+b-b;
	a=b+b; 
	
	printf("a=%d\n",a);
	printf("b=%d",b);
	
}
