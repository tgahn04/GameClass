#include <stdio.h>
#include "Utility.h"

#define SIZE 5

void main()
{
#pragma region �ڷ��� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������
	// �̷���� �� ������ �����ߴ� �ڷ����� �ٸ� �ڷ���
	// ���� ��ȯ�ϴ� �����Դϴ�.

#pragma region �Ϲ��� �� ��ȯ
	// ���� �ٸ� �ڷ������� ������ �̷���� �� �ڷ�����
	// ũ�Ⱑ �� ū �ڷ������� ��ȯ�Ǵ� �����Դϴ�.

	// int integer = 10;
	// float decimal = 5.5f;

	// float storage = integer + decimal;

	// printf("storage ������ �� = %f\n,", storage);

	// ǥ�� ������ ���� �����Ϳ� ǥ�� ������ ū �����͸�
	// �����ϰ� �Ǹ� �Ϲ������� ������ �ս��� �߻��մϴ�.
#pragma endregion

#pragma region ����� �� ��ȯ
	// ������ �̷������ ���� ����ڰ� ���� �ڷ�����
	// ��ȯ�ϴ� �����Դϴ�.

	// int critical = 10;
	// int penetration = 3;

	// float attack = (float)critical / penetration;

	// printf("attack ������ �� = %f\n", attack);

	// ������ �������� ������ �����ϰ� �Ǹ� ������ ���
	// ���� ���� �� �ֽ��ϴ�.
#pragma endregion
#pragma endregion

#pragma region ���� �� ���
	// ����� �����ϴ� ���߿� ����� �̹� Ȯ���� ���,
	// ������ ����� �����ϴ� �����Դϴ�.

	// int x = 0;
	// int y = 0;

	// if (x != 0 && y++)
	// {
	// 	printf("Short circuit\n");
	// }

	// if (x == 0 || y++)
	// {
	// 	printf("first or operator");
	// }

	// if (x != 0 || y++)
	// {
	// 	printf("second or operator");
	// }

	// printf("y�� �� = %d\n", y);
#pragma endregion

#pragma region ��ũ��
	// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ�
	// ó���Ǵ� �����Դϴ�.

	// printf("��ũ�� SIZE�� �� = %d\n", SIZE);

	// ��ũ���� ��� �ڷ����� �������� �����Ƿ� �޸� ������
	// ������ ���� �ʽ��ϴ�.

	// ex) SIZE = 100;

	// ��ũ���� ������ ������ ������ ����Ǹ�, �� ��ũ�ΰ� ����� ��
	// ��ũ���� ��ü ����� �־�� �ϹǷ� ���α׷��� ũ�Ⱑ Ŀ���� �˴ϴ�.
#pragma endregion

#pragma region ��ó����
	// ���α׷��� ������ �Ǳ� ������ ���α׷��� ����
	// ���� ó���� �ϴ� �����Դϴ�.

	// printf("code ������ �� = %d\n", code);

	// ��ó����� �����Ϸ��� �ƴ� ����ó���⿡ ���ؼ�
	// ó���Ǵ� �����̱� ������ ��ɹ� ���� ";"�� ���
	// ���� �ʽ��ϴ�.
#pragma endregion
}