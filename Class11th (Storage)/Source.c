#include <stdio.h>

int health = 10;

void render()
{
	for (int i = 0; i < health; i++)
	{
		printf("��");
	}
}

void Goal()
{
	static int score = 0;
	score++;

	printf("%d��\n", score);
}

void main()
{
#pragma region �޸� ����

#pragma region code ����
	// ���α׷��� �����ϱ� ���� �ʿ��� �ڵ尡 ����Ǵ� ��������
	// �Լ��� �ּҿ� ����� ����Ǵ� �޸� �����Դϴ�.
#pragma endregion

#pragma region Data ����
	// ���α׷��� ���۰� �Բ� �޸𸮿� ����Ǹ�, ���α׷���
	// ����� �� �޸𸮿��� �����Ǵ� �����Դϴ�.
#pragma endregion

#pragma region  BSS ����
	// ���α׷��� ����� �� �ʱ�ȭ�� �̷������ ���� ���� ������
	// ���� ������ ����Ǵ� �޸� �����Դϴ�.
#pragma endregion

#pragma region Stack ����
	// ���α׷��� �ڵ����� ����ϴ� �ӽ� �޸� ��������
	// �Լ� ȣ�� �� �����Ǵ� ���� ������ �Ű� ������ ����
	// �Ǵ� �޸� �����Դϴ�.
#pragma endregion

#pragma region Heap ����
	// ����ڰ� ���� �޸� ������ �Ҵ����ִ� �޸� ����
	// �̸�, ������� �ʴ� ��� ����ڰ� ���� �޸𸮸�
	// �����ؾ� �Ǵ� �޸� �����Դϴ�.
#pragma endregion
#pragma endregion

#pragma region ���� ����
	// �Լ� ���ο��� ����� ������ �Լ� ���ο����� ������ �� ������,
	// �Լ��� ����Ǿ��� �� �޸𸮿��� ������� Ư¡�� ������ �ִ� �����Դϴ�.

	// int x = 10;
	// {
	// 	int x = 20; 
	// 	printf("x ������ �� = %d\n", x);
	// }

	// printf("x ������ �� = %d\n", x);

#pragma endregion

#pragma region ���� ����
	// �Լ� �ܺο��� ����� ������ ���α׷��� ����� ��
	// �޸𸮿� �ö󰡰� �Ǹ�, ���α׷��� ����Ǹ� �޸�
	// ���� �����Ǵ� �����Դϴ�.

	// health = health - 1;

	// render();

#pragma endregion

#pragma region ���� ����
	// ���� ������ Ư���� �����鼭 ���� ������ Ư���� ������ ������,
	// �� �� ���� �ʱ�ȭ�� �̷������, ���α׷��� ����� �� �޸𸮿���
	// �����ǰ�, ���α׷��� ����Ǹ� �޸𸮿��� �����Ǵ� �����Դϴ�.

	// Goal();
	// Goal();
	// Goal();

#pragma endregion

return 0;
}