#include <stdio.h>
#include <stdlib.h>

void main()
{
#pragma region ���� �Ҵ�
	// ���α׷��� �����ϴ� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ�
	// �ϴ� �۾��Դϴ�.

	// int* pointer;
	// pointer = (int *)malloc(4);
	// *pointer = 10;
	// 
	// printf("���� �Ҵ�� �޸��� �� = %d\n\n", *pointer);
	// 
	// free(pointer);
	// 
	// int* x = (int*)malloc(sizeof(int)* 3);
	// x[0] = 10;
	// x[1] = 20;
	// x[2] = 30;
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	printf("���� �Ҵ�� �޸� �� = %d\n", x[i]);
	// }
	// 
	// free(x);

	// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦
	// ������ �� ������, �������� �޸��� ũ�⸦ �Ҵ��� ��
	// byte ������ �����մϴ�.
	// �������� �Ҵ��� �޸𸮴� Heap ������ �����Ǿ� �����Ƿ�,
	// ����� ������ ���� �������־�� �մϴ�.
#pragma endregion

#pragma region ��� ������
	// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	// int* address = (int*)malloc(sizeof(int));
	// *address = 100;

	// printf("address�� �� = %d\n", *address);

	// free(address);

	// address = NULL; // �޸� ���� �� ������ġ

	// *address = 99;

	// printf("address�� �� = %d\n", *address);

#pragma endregion

	return 0;
}