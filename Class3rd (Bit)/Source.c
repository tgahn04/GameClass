#include <stdio.h>

void main()
{

#pragma region ��� ������

	//int storage1 = 0;
	//int storage2 = 0;
	//int storage3 = 0;
	//int storage4 = 0;
	//int storage5 = 0;

	//int x = 10;
	//int y = 5;
	//int z = 1;
	//int w = 10;

	//const int constant = 5;

	// 1. ���� = ���� + ����
	//storage1 = x + y;

	// 2. ���� = ���� - ���ͷ� ���
	//storage2 = z - 1;

	// 3. ���� = ���� * �ɺ��� ���
	//storage3 = w * constant;

	// 4. ���� = ���ͷ� ��� / ���ͷ� ���
	//storage4 = 20 / 5;

	// 5. ���� = �ɺ��� ��� % ���ͷ� ���
	//storage5 = constant % 5;

	//printf("storage1�� �� : %d\n", storage1);
	//printf("storage2�� �� : %d\n", storage2);
	//printf("storage3�� �� : %d\n", storage3);
	//printf("storage4�� �� : %d\n", storage4);
	//printf("storage5�� �� : %d\n", storage5);

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

#pragma region ����Ʈ ������
// ��Ʈ�� Ư���� ��ġ�� ������ ����ŭ �̵���Ű�� �������Դϴ�.

//int data = 5;
//int shift = data << 2;

//printf("shift1 = %d\n", shift);

//shift = data >> 1;

//printf("shift2 = %d\n", shift);



#pragma endregion


#pragma endregion

}