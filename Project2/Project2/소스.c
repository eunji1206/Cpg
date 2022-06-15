#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int calculator(int x, char z, int y)
{
	switch ((int)z)
	{
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '*':
		return x * y;
		break;
	case '%':
		return x % y;
		break;
	case '/':
		return x / y;
		break;
	default:
		printf("error");
		break;
	}
	
}


void print(int a)
{
	printf("%d", a);
}





int main()
{
	int num1, num2;
	char cal;
	scanf("%d %c %d", &num1, &cal, &num2);

	int result = calculator(num1, cal, num2);
	print(result);
	






	/*
	int a = 1;
	int b = 2;

	// case1 : a + b 값을 재사용한다.

	int result = sum(a,b);
	printf("%d", result);

	// case2 : a + b 값을 재사용을 안한다.
	printf("%d", sum(a, b));
	
	
	while (true)
	{
	
	 }

	//무한 반복이나 조건이 있을 때 while이 편함

	for (int i = 0; i < 10; i++)
	{

	}
	// 횟수나 사이즈가 정해져있을 때 쓰면 편함


	*/
}