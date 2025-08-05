#include <stdio.h>

void function()
{
	for (int i = 0; i < 5; i++)
	{
		printf("function... %d\n", i + 1);
	}
}

float get_temperature()
{
	return 36.5f;
}

void update_position(int x, int y)
{
	printf("x = %d, y = %d", x, y);
}

void print_status(char grade, int height, float temperature)
{
	printf("��� %c\n", grade);
	printf("Ű %d\n", height);
	printf("ü�� %f\n", temperature);
}

void swap(int* a, int* b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

void find(int count)
{
	if (count <= 0)
		return;

	printf("count = %d\n", count);

	find(count - 1);
}

inline int square(int x)
{
	return x * x;
}

double average(int count, ...)
{
	// va_list = ���� �μ��� �޸� �ּҸ� �����ϴ� ������ �����Դϴ�,
	//va_list pointer;

	// va_start = ��� �μ��� ������ �� �ֵ��� �����͸� �����ϴ� �Լ��Դϴ�.
	//va_start(pointer, count);

	// va_arg = ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �������� �Լ��Դϴ�.
	//int sum = 0;

	//for (int i = 0; i < count; i++)
	//{
	//	sum += va_arg(pointer, int);
	//}

	// va_end = ���� �μ��� ������ �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ��Դϴ�.
	//va_end(pointer);

	//return (double)sum / count;
}

void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// function();

#pragma endregion

#pragma region ��ȯ��
	// �Լ��� ������ ������ �����ִ� ����� �ڷ����Դϴ�.

	// printf("�µ� = %f\n", get_temperature());

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�.
#pragma endregion

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// update_position(10, 20);

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮿��� �����˴ϴ�.

	// print_status('A', 175, 36.5f);

	// �ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű� ������ �Բ�
	// ������ �� ������, ���� ���� �Ű� ������ ������ �� �ֽ��ϴ�.
#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�.
	// int x = 10;
	// int y = 20;

	// printf("�Լ� ȣ�� ��\nx�� �� = %d\ny�� �� = %d\n\n", x, y);

	// swap(&x, &y);

	// printf("�Լ� ȣ�� ��\nx�� �� = %d\ny�� �� = %d\n", x, y);

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ������ ��
	// �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ����
	// ���� �޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	// find(3);

	// ��� �Լ��� �Լ��� ����ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��մϴ�.
#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// printf("%d\n", square(9));

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ���
	// ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡
	// ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
#pragma endregion

#pragma region  ���� �μ� ���
	// �����Ǿ� �ִ� �Ű� ���� �ܿ� ������ �������� ����
	// �μ��� �߰��� ���� �� �ִ� �μ��Դϴ�.

	//printf("%lf\n", average(4, 80, 90, 75, 60));

#pragma endregion
}