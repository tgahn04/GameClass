#include <stdio.h>

void main()
{
#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.

	// int data = 10;

	// printf("������ �ּ� = %p\n", &data);

	// �������� �ּҴ� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ�
	// �ǹ��ϸ�, �޸� ������ 1 byte�� ũ��� ������ ǥ���մϴ�.
#pragma endregion

#pragma region scanf_s �Լ�
	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ��� ���Ŀ�
	// ���߾� �Է����ִ� �Լ��Դϴ�.

	// int x = 0;

	// printf("x ������ ���� �Է����ּ���.\n");

	// ǥ�� �Է� �Լ��� �Է��� ������ ������ ���� �۾�����
	// �Ѿ �� �����ϴ�.

	// scanf_s("%d", &x);

	// ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ �����˴ϴ�.

	// printf("x ������ �� = %d\n", x);

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ�
	// �����͸� �����Ͽ��ٰ� �Է��ϴ� ���� ���� ����
	// ������ ���α׷��� �����մϴ�.
#pragma endregion

#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� �����Դϴ�.

	// int storage = 10;

	// int * pointer = &storage;

	// �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�,
	// �����Ͱ� ����Ű�� �޸��� �ڷ����� �������־�� �մϴ�.

	// printf("storage ������ �ּ� = %p\n", &storage);

	// printf("pointer�� �� = %p\n", pointer);

	// printf("pointer ������ �ּ� = %p\n\n", &pointer);

	// *pointer = 99;

	// printf("storage ������ �� = %d\n", storage);

	// printf("pointer ������ �� = %d\n\n", *pointer);

	// int variable = 20;

	// pointer = &variable;

	// printf("variable ������ �ּ� = %p\n", &variable);

	// printf("pointer ������ �ּ� = %p\n", &pointer);

	// *pointer = 100;

	// printf("variable ������ �� = %d\n", variable);

	// printf("pointer ������ �� = %d\n", *pointer);

	// printf("pointer ������ ����Ű�� �� = %d\n\n", *pointer);

	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������
	// ���� �ּҸ� ����Ű�� �˴ϴ�.

	// printf("int ũ�� = %u\n", sizeof(int));

	// printf("pointer ������ũ�� = %u\n", sizeof(pointer));

	//������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� ��
	// �ִ� ũ��� ��������, �� ���� ó���� �� �ִ� ũ���
	// �ü���� ���� ũ�Ⱑ �����˴ϴ�.
#pragma endregion

#pragma region ����

	// printf("���� ����\n\n");
	// 
	// double num1, num2, value;
	// char operator;
	// 
	// printf("ù��° ���� = ");
	// scanf_s("%lf", &num1);
	// 
	// printf("������ = ");
	// scanf_s(" %c", &operator, 1);
	// 
	// printf("�ι�° ���� = ");
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
	// 	printf("����\n");
	// 	break;
	// }
	// return 0;

#pragma endregion

#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ�����
	// ������ �� �ִ� �������Դϴ�.

	// char rank = 'A';
	// int count = 10;
	// float angle = 3.14f;

	// void* reference = NULL; // ������ �ʱ�ȭ

	// reference = &rank;

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ����
	// ������ �� �����ϴ�.

	// *(char *)reference = 'B';

	// printf("rank ������ �� = %c\n", rank);
	// printf("reference ������ �� = %p\n\n", reference);

	// reference = &count;

	// *(int*)reference = 50;

	// printf("count ������ �� = %d\n", count);
	// printf("reference ������ �� = %p\n\n", reference);

	// reference = &angle;

	// *(float*)reference = 45.5f;
	// printf("angle ������ �� = %f\n", angle);
	// printf("reference ������ �� = %p\n\n", reference);

	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ�
	// ����Ű�� ������ �ڷ������� �� ��ȯ ���־�� �մϴ�.
#pragma endregion

#pragma region ��� ���� ������
// �����Ͱ� ����Ű�� �ּҿ� ����Ǿ� �ִ� ���� ������ �� ������
// �����Ǿ� �ִ� ������ �Դϴ�.

// int room1 = 10;
// int room2 = 20;

// const int * home = NULL;

// home = &room1;

// *home = 99; (x)

// printf("room1�� �ּ� �� = %p\n", &room1);
// printf("home�� �� = %p\n\n", home);

// home = &room2;

// printf("room2�� �ּ� �� = %p\n", &room2);
// printf("home�� �� = %p\n", home);
#pragma endregion

#pragma region ������ ���
// ������ ������ ����Ű�� �ִ� �ּ� ����
// ������ �� ���� ������ �Դϴ�.

 // int room1 = 99;
 // int room2 = 555;

 // int* const fixed_pointer = &room1;

 // *fixed_pointer = 158;

 // printf("fixed_pointer ������ ����Ű�� �� = %d\n", *fixed_pointer);
 // printf("room1 ������ �� = %d\n", room1);

 // fixed_pointer = &room2;

 // ����� ������ �����ʹ� �ش� ������ ���� ������ �� ������, �ٸ� ������
 // �ּҸ� ���� ������ ���� �����ϴ�.
#pragma endregion
}
