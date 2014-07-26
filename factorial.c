#include <stdio.h>

int factorial(int num);


int main()
{
	int num, result = 0;
	printf("정수를 입력하세요: ");
	
	scanf("%d", &num);
	
	result = factorial(num);
	
	printf("결과: %d", result);
	
	return 1;
}


int factorial(int num)
{	
	if (num > 0) {
		return 1;
	}
	
	return num * factorial(num - 1);
}
