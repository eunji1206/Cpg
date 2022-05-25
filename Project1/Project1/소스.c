#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ChangeNumbers(int* p1, int* p2)
{
	int temp = *p1; // swap하는 작업
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

	printf("숫자 두 개 입력 ");
	scanf("%d %d", &a, &b);
	printf("전 %d %d\n", a, b);
	plus(&a, &b);
	printf("후 %d\n\n",a);

	

	int num1;
	int num2;


	printf("숫자1: ");
	scanf("%d", &num1);
	printf("숫자2: ");
	scanf("%d", &num2);

	printf("바꾸기 전..\n 숫자1 : %d, 숫자2 : %d\n ", num1, num2);
	ChangeNumbers(&num1, &num2);
	printf("바꾼 후..\n 숫자1 : %d, 숫자2 : %d\n ", num1, num2);

	return 0;

}


/* 
생성자: 선언과 동시에 실행되는 함수 ex) mystruct(){}
소멸자: 해단 객체가 소멸될 때 실행되는 것 ex) ~mystruct(){}
TypeDef: 특정 자료형을 재정의하여 사용
*/
