#include <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ�������
	// �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų ��
	// ����ϴ� �������Դϴ�.

	// int previouseX = 0;
	// int x = 0;

	// x = ++previouseX;

	// printf("previouseX ���� ������ = %d\n", previouseX);
	// printf("x�� �� = %d\n", x);
	// 
	// x = --previouseX;

	// printf("previouseX ���� ���Ұ� = %d\n", previouseX);
	// printf("x�� �� = %d\n", x);

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ�
	// ������ �����մϴ�.

	// int previouseY = 0;
	// int y = 0;

	// y = previouseY++;

	// printf("previouseY ���� ������ = %d\n", previouseY);
	// printf("y�� �� = %d\n", y);

	// y = previouseY--;

	// printf("previouseY ���� ���Ұ� = %d\n", previouseY);
	// printf("y�� �� = %d\n", y);

	// ���� ���� �����ڴ� ������ ������ ���� ������ ���� ������ŵ�ϴ�.
#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
	// Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

	// for (int i = 0; i < 7; i;)
	// {
	// 	printf("update\n");
	// }

#pragma endregion

#pragma region white��
	// Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ���
	// �����ϴ� �ݺ����Դϴ�.

	// int count = 7; 

	// while (count > 0)
	// {
	// 	printf("count = %d\n", count);

	// 	count--;
	// }

	// while���� ��� ������ �Ʒ��� ����Ǹ�, �Ʒ��� �ִ�
	// ��ɹ��� ������ �� ������ �ٽ� ���� �ִ� ��ɹ�����
	// ���ư��� �ݺ��ϴ� �����Դϴ�.
#pragma endregion

#pragma region do-while��
	// ���ǰ� ������� �� ���� �۾��� ������ ���� ���ǿ�
	// ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	// int life = 0;

	// do
	// {
	// 	printf("Alive\n");
	// } while (life > 0);

#pragma endregion

#pragma region countinue��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾
	// �����ϴ� ����Դϴ�.



	// for (int Hit = 1; Hit <= 10; Hit++)
	// {
	// 	if (Hit == 3)
	// 		continue;

	// 	printf("Damage %d\n", Hit);
	// }

#pragma endregion

#pragma region ��ø �ݺ���
// �ݺ��� �ȿ� ���ο� �ݺ����� ��� �ִ� ������
// �ݺ��� �Դϴ�.

 // for(int i = 0; i < 3; i++)
 // {
 //		printf("out\n");

 // 	for (int j = 0; j < 3; j++)
 // 	{
 // 		printf("in\n");
 // 	}
 // }

#pragma endregion

#pragma endregion
}