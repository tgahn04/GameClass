#include <stdio.h>

void main()
{

#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	// 두 개의피연산자의 값을 비교하여 그 결과를 0 또는
	// 1이라는 값으로 나타내는 연산자입니다.

	// int positionX = 10;
	// int positionY = 20;

	// printf("position = %d\n", positionX < positionY);
	// printf("position = %d\n", positionX > positionY);
	// printf("position = %d\n", positionX <= positionY);
	// printf("position = %d\n", positionX >= positionY);
	// printf("position = %d\n", positionX != positionY);
	// printf("position = %d\n", positionX == positionY);

	// 관계연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
	// 조건이 틀릴 때 0이라는 값으로 반환됩니다.
#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
	// 명령문입니다.

	// int healthe = 0;
	// 
	// if (healthe <= 0)
	// {
	// 	printf("Destroy\n");
	// }

	// if문은조건이 1일 때 샐행되며, 0일 때 실행되지 않습니다.
#pragma endregion

#pragma region else if문
	// if문의조건이 틀릴 때 else if문의조건이
	// 맞다면 실행되는 명령문입니다.

	// int HP = 1;
	
	// if (HP <= 0)
	// {
	// 	printf("Die\n");
	// }
	
	// else if (HP > 0)
	// {
	// 	printf("Alive\n");
	// }


	// else if문은여러 번 정의할 수 있으며, if문이
	// 존재할 때 사용할 수 있습니다.
#pragma endregion

#pragma region else문
	// if문과 else if문의 조건이 다 틀리면
	// 실행되는 명령문입니다.

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


	// if문에 연결된 모든 조건문의 조건이 맞을 때
	// 가장 위에 있는 조건문만 실행됩니다.
#pragma endregion

#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

	char grade = 'B';

	// switch문은 해당 조건이 완료되었을 때, break문이 없으면
	// 나머지 밑에 있는 case 문까지 계속 실행시키다가 종료합니다.

	switch (grade)
	{
		case 'A': printf("100점 ~ 90점입니다\n");
			break;
		case 'B': printf("89점 ~ 70점입니다\n");
			break;
		case 'C': printf("69점 ~ 40점입니다\n");
			break;
		case 'D': printf("39점 ~ 10점입니다\n");
			break;
		case 'F': printf("9점 ~ 0점입니다\n");
			break;

		default: printf("Exception\n");
			break;
	}

	// switch문의 경우 조건에 해당하는 값에 따라 조건의
	// 위치로 이동합니다.
#pragma endregion
// pull request

#pragma endregion

}

