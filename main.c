#include<stdio.h>

int sum(int a, int b) {
	return a + b;
}

int mul(int a, int b) {
	return a * b;
}

int main() {
	int x, y, op;
	
	printf("Enter two numbers(x, y) : ");
	scanf("%d %d", &x, &y);
	printf("\nEnter the operation\n1. plus\n2. mul\n>> ");
	scanf("%d", &op);
	
	int res;
	if (op == 1)
		res = sum(x, y);
	else if (op == 2)
		res = mul(x, y);
		
	printf("\nresult is [%d]", res);
	return 0;
}
