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

	// case1 : a + b ���� �����Ѵ�.

	int result = sum(a,b);
	printf("%d", result);

	// case2 : a + b ���� ������ ���Ѵ�.
	printf("%d", sum(a, b));
	
	
	while (true)
	{
	
	 }

	//���� �ݺ��̳� ������ ���� �� while�� ����

	for (int i = 0; i < 10; i++)
	{

	}
	// Ƚ���� ����� ���������� �� ���� ����


	*/
}