#include <stdio.h>

void main()
{

#pragma region ���ǹ�
	// � ������ �־��� �� �ش� ���ǿ� ���� ������
	// �����ϵ��� �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �� �����ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ�
	// 1�̶�� ������ ��Ÿ���� �������Դϴ�.

	// int positionX = 10;
	// int positionY = 20;

	// printf("position = %d\n", positionX < positionY);
	// printf("position = %d\n", positionX > positionY);
	// printf("position = %d\n", positionX <= positionY);
	// printf("position = %d\n", positionX >= positionY);
	// printf("position = %d\n", positionX != positionY);
	// printf("position = %d\n", positionX == positionY);

	// ���迬���ڴ� ������ ���� �� 1�̶�� ������ ��ȯ�Ǹ�,
	// ������ Ʋ�� �� 0�̶�� ������ ��ȯ�˴ϴ�.
#pragma endregion

#pragma region if��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ�
	// ��ɹ��Դϴ�.

	// int healthe = 0;
	// 
	// if (healthe <= 0)
	// {
	// 	printf("Destroy\n");
	// }

	// if���������� 1�� �� ����Ǹ�, 0�� �� ������� �ʽ��ϴ�.
#pragma endregion

#pragma region else if��
	// if���������� Ʋ�� �� else if����������
	// �´ٸ� ����Ǵ� ��ɹ��Դϴ�.

	// int HP = 1;

	// if (HP <= 0)
	// {
	// 	printf("Die\n");
	// }

	// else if (HP > 0)
	// {
	// 	printf("Alive\n");
	// }


	// else if�������� �� ������ �� ������, if����
	// ������ �� ����� �� �ֽ��ϴ�.
#pragma endregion

#pragma region else��
	// if���� else if���� ������ �� Ʋ����
	// ����Ǵ� ��ɹ��Դϴ�.

	// int Demage = 0;

	// if (Demage >= 1)
	// {
	// 	printf("HP Down\n");
	// }

	// else if (Demage <= -1)
	// {
	// 	printf("HP Up\n");
	// }

	// else
	// {
	// 	printf("No Demage\n");
	// }


	// if���� ����� ��� ���ǹ��� ������ ���� ��
	// ���� ���� �ִ� ���ǹ��� ����˴ϴ�.
#pragma endregion

#pragma region switch��
	// � ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�.

	char grade = 'B';

	// switch���� �ش� ������ �Ϸ�Ǿ��� ��, break���� ������
	// ������ �ؿ� �ִ� case ������ ��� �����Ű�ٰ� �����մϴ�.

	//switch (grade)
	//{
	//	case 'A': printf("100�� ~ 90���Դϴ�\n");
	//		break;
	//	case 'B': printf("89�� ~ 70���Դϴ�\n");
	//		break;
	//	case 'C': printf("69�� ~ 40���Դϴ�\n");
	//		break;
	//	case 'D': printf("39�� ~ 10���Դϴ�\n");
	//		break;
	//	case 'F': printf("9�� ~ 0���Դϴ�\n");
	//		break;
	//
	//	default: printf("Exception\n");
	//		break;
	//}

	// switch���� ��� ���ǿ� �ش��ϴ� ���� ���� ������
	// ��ġ�� �̵��մϴ�.
#pragma endregion

#pragma region �� ������

#pragma region AND ������
	// �� ���� ������ �� ������ �� ����Ǵ� �������Դϴ�.

	// int score = 100;
	// char rank = 'A';
	// 
	// if (score == 100 && rank == 'A')
	// {
	// 	printf("1st Plase");
	// }

#pragma endregion

#pragma region OR ������
	// �� ���� ���� �߿��� �ϳ��� ������ �����ɶ� ����Ǵ� �������Դϴ�.

	// int weight = 70;
	// int bodyfat = 30;
	// 
	// if (weight > 75 || bodyfat > 20)
	// {
	// 	printf("��");
	// }

#pragma endregion

#pragma region NOT ������
	// �ϳ��� ������ ������Ű�� �������Դϴ�.

	// int power = 0;
	// 
	// if (!power)
	// {
	// 	printf("off");
	// }
#pragma endregion

#pragma endregion

#pragma region ��и�

	// int x = 0; 
	// int y = 0;

	// if (x > 0 && y > 0)
	// {
	// 	printf("�� 1 ��и�\n");
	// }
	// else if (x < 0 && y > 0)
	// {
	// 	printf("�� 2 ��и�\n");
	// }
	// else if (x < 0 && y < 0)
	// {
	// 	printf("�� 3 ��и�\n");
	// }
	// else if (x > 0 && y < 0)
	// {
	// 	printf("�� 4 ��и�\n");
	// }
	// else if (x != 0 && y == 0)
	// {
	// 	printf("X ����\n");
	// }
	// else if (x == 0 && y != 0)
	// {
	// 	printf("Y ����\n");
	// }
	// else
	// {
	// 	printf("����");
	// }
#pragma endregion


#pragma endregion



#pragma endregion

}

