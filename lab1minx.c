#include<stdio.h>

int main() {
	int x;
	int y;
	printf("n1\nn2\n:");
	scanf("%d%d",&x,&y);
	if(x>y){
		printf("num1 is greater than num2");
		//diff of x and y
		printf("\n%d",(x-y));
	}else{
		printf("num2 is greater than num1");
		//diff of y and x
		printf("\n%d",(y-x));
	}
}
