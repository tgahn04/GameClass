#include <stdio.h>

void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	 // int list[5];

	 // �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.

	 // for (int i = 0; i < 5; i++)
	 // {
	 //		list[i] = (i + 1) * 10;

	 // 	printf("list[%d]�� �� = %d\n", i, list[i]);
	 // }

	 //�迭�� �޸� ������ ���α׷��� ����Ǵ� ����
	 //������ �� �����ϴ�.

	 //int array[ ] = {1, 2, 3, 4, 5,};

	//  int size = sizeof(array) / sizeof(array[0]);

	//  printf("%d\n\n", size);

	//  for (int i = 0; i < size; i++)
	//  {
	//		printf("array[%d] = %d\n", i, array[i]);
	//  }

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�

	// printf("�迭�� ���� �ּ� = %p\n", array);

	// int* pointer = array;
	// pointer = pointer + 1;
	// *pointer = 25;

	// printf("pointer�� �� = %d\n", *pointer); // array[1]�� ���

	// for (int i = 0; i < 5; i++) // �迭 ��ü ���
	// {
	// 	printf("array[%d] = %d\n", i, array[i]);
	// }

	// �迭�� �������� �޸� ������ ������ ������, �迭�� �̸���
	// �迭�� ���� �ּҸ� �⸮ŵ�ϴ�.
#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� ���� ������
	// �����Դϴ�.

	// const char* message = "packet";
	// char title[ ] = { "League of Legend" };

	// *message = "e";

	// printf("message�� �� = %p\n", message);
	// printf("message[3]�� �� = %c\n", message[3]);
	// printf("message�� ����Ű�� ���ڿ� = %s\n\n", message);

	// message = "bit";

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� ��
	// �� ������, ���ڿ� ����� ������ ������ �б� ���� ������
	// ����Ǳ� ������ ���ڿ��� ���� ������ �� �����ϴ�.

	// printf("message�� �� = %p\n", message);
	// printf("bit�� ����Ű�� ���ڿ� = %s\n", message);
	// printf("bit[1]�� �� = %c\n\n", message[1]);

	// ���ڿ��� ���鵵 �Բ� �޸� ������ ���ԵǸ�, ������ �޸� 
	// ������ ��ҿ� ���ڿ��� ���� �˷��ִ� ���� ���ڰ� �߰��˴ϴ�.

	// printf("title�� �� = %s\n", title);

	// title[6] = '\0';

	// printf("title[6]���� ��� = %s\n", title);

	// ���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ� ������,
	// ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ� ��ȿ�� ���ڱ����� ��µ˴ϴ�,
#pragma endregion

#pragma region (2)���� �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�.

	// int array2D[3][3] =
	// {
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9},
	// };

	// for (int i = 0; i < 3; i++)
	// {
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		printf("%d", array2D[i][j]);
	// 	}
	// }
	// 2���� �迭�� ��� ���� ���еǸ�, �տ� �ִ� �迭��
	// ���� �ǹ��ϰ�, �ڿ� �ִ� �迭�� ���� �ǹ��մϴ�.
#pragma endregion

#pragma region �ƽ�Ű �ڵ�
	// �̱� ���� ǥ�� ��ȸ���� ǥ��ȭ�� ���� ���ѿ�
	// 7bit ��ȣ ü���Դϴ�.

	// char alphabet = 'A';

	// printf("alphabet ������ �� = %d\n", alphabet);

	// for(int code = 0; code < 26; code++)
	// {
	// 	printf("%c ",alphabet + code);
	// }
#pragma endregion
}