#include <stdio.h>
#include <math.h>

struct Player
{
	float x;
	float y;
};

struct Enemy
{
	float x;
	float y;
};

float Distance(struct Player Pdata, struct Enemy Edata)
{
	float dx = Pdata.x - Edata.x;
	float dy = Pdata.y - Edata.y;
	return sqrt(dx * dx + dy * dy);
}

struct PascalCase
{
	char character;
	int level;
	double experience;
};

void main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct PascalCase Data = {'T', 21, 2643.75};
	
	// printf("character = %c\n", Data.character);
	// printf("level = %d\n", Data.level);
	// printf("experience = %.2f\n\n", Data.experience);
	
	// // 구조체의 각 맴버는 구조체 선언에서 나타나는 순서대로 초기화됩니다.
	// // 이 순서는 초기화 목록의 값들이 왼쪽에서부터 오른쪽으로 대응됩니다.
	
	// Data.character = 'J';
	// Data.level = 18;
	// Data.experience = 1729.34;
	
	// printf("character = %c\n", Data.character);
	// printf("level = %d\n", Data.level);
	// printf("experience = %.2f\n", Data.experience);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.
#pragma endregion

#pragma region 두 점 사이의 거리
	//printf("%lf\n", sqrt(25));
	//printf("%lf\n", pow(5,2));

	struct Player Pdata = { 1, 2 };
	struct Enemy Edata = { 4, 6 };

	float distance = Distance(Pdata, Edata);
	
	if (distance <= 5)
	{
		printf("Enemy : Attack = %f\n", distance);
	}

	else
	{
		printf("Enemy : Idle = %f\n", distance);
	}

	return 0;
#pragma endregion

return 0;
}