#include <stdio.h>

void main()
{

#pragma region ��� ������

	// 1, ���� = ���� + ����
	int x1 = 5;
	int x2 = 6;
	int variable1 = x1 + x2;
	printf("variable1 = %d\n", variable1);

	// 2. ���� = ���� - ���ͷ� ���
	int y1 = 5;
	int variable2 = y1 - 3;
	printf("variable2 = %d\n", variable2);

	// 3. ���� = ���� * �ɺ��� ���
	int z1 = 7;
	const int z = 8;
	int variable3 = z1 * z;
	printf("variable3 = %d\n", variable3);

	// 4. ���� = ���ͷ� ��� / ���ͷ� ���
	int variable4 = 6 / 2;
	printf("variable4 = %d\n", variable4);

	// 5. ���� = �ɺ��� ��� % ���ͷ� ���
	const int a1 = 6;
	int variable5 = a1 % 3;
	printf("variable5 = %d\n", variable5);

#pragma endregion




#pragma region ��Ʈ
	// �����͸� ��Ÿ���� �ּ��� �����̸�, 0 �Ǵ� 1�� ��������
	// �� ����� �����ϴ� �����Դϴ�.

#pragma region (10)������ (2)������ ��ȯ�ϴ� ����
	// 10������ 1�� �� ������ ��� 2�� ������ �� ����
	// ���� ��ġ�� ������ ���� �Ʒ����� ���� ������� �����մϴ�.

	// 2 23 
	// 2 11 1
	// 2  5 1
	// 2  2 1
	//    1 0  =  10111
#pragma endregion


#pragma region (2)������ (10)������ ��ȯ�ϴ� ����
	// 1 byte�� 2������ ����� ���� 2�� �������� ��Ÿ���ϴ�.

	// ������ ��Ʈ�� 1�� �ִٸ� 1�� 2�� ������ ��ġ�� �����
	// ���� ������ ��Ʈ�� ��� ���Ͽ� 10������ ��Ÿ���ϴ�.


#pragma endregion

#pragma region ��Ʈ ������
	//��Ʈ ������ �� ������ �����ϱ� ���� ����ϴ� �������Դϴ�.

#pragma region AND ������
	// �� ���� �ǿ����ڰ� ��� 1�̸� 1�� ��ȯ�ϴ� �������Դϴ�.

	//int storage1 = 10; //0000 1010
	//int storage2 = 6;  //0000 0110
	                   //--------
	                   //0000 0010
	
	//printf("storage1 & storage2 = %d\n", storage1 & storage2);

#pragma endregion

#pragma region OR ������
	// �� ���� �ǿ����� �߿� �ϳ��� 1�� �ִٸ� 1�� ��ȯ�ϴ� �������Դϴ�.
	
	//int storage3 = 8;
	//int storage4 = 12;

	//printf("storage3 | storage4 = %d\n", storage3 | storage4);



#pragma endregion

#pragma region XOR ������
	// �� ���� �ǿ����ڰ� ���� ������ 0�� ��ȯ�ϰ�, ���� �ٸ���
	// 1�� ��ȯ�ϴ� �������Դϴ�.

	//int storage5 = 6;
	//int storage6 = 15;

	//printf("storage5 ^ storage6 = %d\n", storage5 ^ storage6);


#pragma endregion

#pragma region NOT ������
	// �ϳ��� ��Ʈ�� ������Ű�� �������Դϴ�.

	//int storage7 = 13;

	//	printf("~storage7 = %d\n", ~storage7);

		// ù ��° ��Ʈ�� ��ȣ�� ��Ÿ����, ù ��° ��Ʈ��
		// 1�� �ִٸ� ���� �����Դϴ�. ex) 1111 1101 = ����


#pragma endregion




#pragma endregion

#pragma endregion

}