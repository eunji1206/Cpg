#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ChangeNumbers(int* p1, int* p2)
{
	int temp = *p1; // swap�ϴ� �۾�
	*p1 = *p2;
	*p2 = temp;
}

void plus(int*p1 , int*p2)
{
	*p1 += *p2;
}

int main(void)
{
	int a = 0;
	int b = 0;

	printf("���� �� �� �Է� ");
	scanf("%d %d", &a, &b);
	printf("�� %d %d\n", a, b);
	plus(&a, &b);
	printf("�� %d\n\n",a);

	

	int num1;
	int num2;


	printf("����1: ");
	scanf("%d", &num1);
	printf("����2: ");
	scanf("%d", &num2);

	printf("�ٲٱ� ��..\n ����1 : %d, ����2 : %d\n ", num1, num2);
	ChangeNumbers(&num1, &num2);
	printf("�ٲ� ��..\n ����1 : %d, ����2 : %d\n ", num1, num2);

	return 0;

}


/* 
������: ����� ���ÿ� ����Ǵ� �Լ� ex) mystruct(){}
�Ҹ���: �ش� ��ü�� �Ҹ�� �� ����Ǵ� �� ex) ~mystruct(){}
TypeDef: Ư�� �ڷ����� �������Ͽ� ���
*/
