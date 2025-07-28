﻿#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	// int data = 10;

	// printf("변수의 주소 = %p\n", &data);

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를
	// 의미하며, 메모리 공간은 1 byte의 크기로 나누어 표현합니다.
#pragma endregion

#pragma region scanf_s 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에
	// 맞추어 입력해주는 함수입니다.

	// int x = 0;

	// printf("x 변수의 값을 입력해주세요.\n");

	// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로
	// 넘어갈 수 없습니다.

	// scanf_s("%d", &x);

	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.

	// printf("x 변수의 값 = %d\n", x);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에
	// 데이터를 보관하였다가 입력하는 순간 버퍼 안의
	// 내용을 프로그램에 전송합니다.
#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	// int storage = 10;

	// int * pointer = &storage;

	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로,
	// 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다.

	// printf("storage 변수의 주소 = %p\n", &storage);
	 
	// printf("pointer의 값 = %p\n", pointer);
	
	// printf("pointer 변수의 주소 = %p\n\n", &pointer);
	
	// *pointer = 99;
	
	// printf("storage 변수의 값 = %d\n", storage);
	
	// printf("pointer 변수의 값 = %d\n\n", *pointer);
	
	// int variable = 20;
	
	// pointer = &variable;
	
	// printf("variable 변수의 주소 = %p\n", &variable);
	
	// printf("pointer 변수의 주소 = %p\n", &pointer);
	
	// *pointer = 100;
	
	// printf("variable 변수의 값 = %d\n", variable);
	
	// printf("pointer 변수의 값 = %d\n", *pointer);
	
	// printf("pointer 변수가 가리키는 값 = %d\n\n", *pointer);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의
	// 시작 주소를 가리키게 됩니다.

	// printf("int 크기 = %u\n", sizeof(int));
	
	// printf("pointer 변수의크기 = %u\n", sizeof(pointer));

	//포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수
	// 있는 크기로 정해지며, 한 번에 처리할 수 있는 크기는
	// 운영체제에 따라 크기가 결정됩니다.
#pragma endregion

#pragma region 숙제

	// printf("간단 계산기\n\n");
	// 
	// double num1, num2, value;
	// char operator;
	// 
	// printf("첫번째 숫자 = ");
	// scanf_s("%lf", &num1);
	// 
	// printf("연산자 = ");
	// scanf_s(" %c", &operator, 1);
	// 
	// printf("두번째 숫자 = ");
	// scanf_s("%lf", &num2);
	// 
	// value = num1;
	// 
	// switch (operator)
	// {
	// case '+' : 
	// 	value += num2;
	// 		printf("%.2lf + %.2lf = %.2lf\n", num1, num2, value);
	// 		break;
	// 
	// case '-' :
	// 	value -= num2;
	// 		printf("%.2lf - %.2lf = %.2lf", num1, num2, value);
	// 		break;
	// case '*':
	// 	value *= num2;
	// 	printf("%.2lf * %.2lf = %.2lf", num1, num2, value);
	// 	break;
	// 
	// case '/':
	// 	
	// 	value /= num2;
	// 	printf("%.2lf / %.2lf = %.2lf", num1, num2, value);
	// 	break;
	// 
	// default:
	// 	printf("오류\n");
	// 	break;
	// }
	// return 0;

#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.
	
	// char rank = 'A';
	// int count = 10;
	// float angle = 3.14f;
	
	// void* reference = NULL; // 포인터 초기화
	
	// reference = &rank;
	
	// 범용 포인터는 메모리 주소에 접근해서 값을
	// 변경할 수 없습니다.
	
	// *(char *)reference = 'B';
	
	// printf("rank 변수의 값 = %c\n", rank);
	// printf("reference 변수의 값 = %p\n\n", reference);
	
	// reference = &count;
	
	// *(int*)reference = 50;
	
	// printf("count 변수의 값 = %d\n", count);
	// printf("reference 변수의 값 = %p\n\n", reference);
	
	// reference = &angle;
	
	// *(float*)reference = 45.5f;
	// printf("angle 변수의 값 = %f\n", angle);
	// printf("reference 변수의 값 = %p\n\n", reference);

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가
	// 가리키는 변수의 자료형으로 형 변환 해주어야 합니다.
#pragma endregion

#pragma region 상수 지시 포인터
// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수 없도록
// 지정되어 있는 포인터 입니다.

// int room1 = 10;
// int room2 = 20;

// const int * home = NULL;

// home = &room1;

// *home = 99; (x)

// printf("room1의 주소 값 = %p\n", &room1);
// printf("home의 값 = %p\n\n", home);

// home = &room2;

// printf("room2의 주소 값 = %p\n", &room2);
// printf("home의 값 = %p\n", home);
#pragma endregion

#pragma region 포인터 함수
// 포인터 변수가 가리키고 있는 주소 값을
// 변경할 수 없는 포인터 입니다.

int item1 = 99;
int item2 = 555;

int* const box = &item1;



*box = 100;

printf("item1의 주소값 = %d\n", item1);
printf("box의 값 = %d\n", box);

*box = item2;

printf("item2의 주소값 = %d\n", item2);
printf("box의 값 = %d\n", box);
#pragma endregion
}
