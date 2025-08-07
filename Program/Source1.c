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

struct Data
{
	char grade;
	int health;
	double experience;
};

struct Dummy
{
	char Type;
	double HP;
	int Number;
};

struct Node
{
	int data;
	struct Node* next;
};

int main()
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

// 	struct Player Pdata = { 1, 2 };
// 	struct Enemy Edata = { 6, 8 };
// 
// 	float distance = Distance(Pdata, Edata);
// 	
// 	if (distance <= 5)
// 	{
// 		printf("Enemy : Attack\n", distance);
// 	}
// 
// 	else
// 	{
// 		printf("Enemy : Idle\n", distance);
// 	}
// 
// 	return 0;
#pragma endregion

#pragma region 바이트 패딩
	// 맴버 변수를 메모리에서 CPU로 읽을 때 한 번에
	// 읽을 수 있도록, 컴파일러가 레지스터의 블록에
	// 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	// printf("Data의 크기 = %d\n", sizeof(struct Data));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
	// 가장 큰 자료형의 배수가 되도록 정렬합니다.
	
	// printf("Dummy의 크기 = %d\n", sizeof(struct Dummy));

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가
	// 다르게 설정될 수 있습니다.
#pragma endregion

#pragma region 자기 참조 구조체
	struct Node Node1 = { 10, NULL };
	struct Node Node2 = { 20, NULL };
	struct Node Node3 = { 30, NULL };

	Node1.next = &Node2;
	Node2.next = &Node3;
	Node3.next = NULL;

	struct Node* connect = &Node1;

	while (connect != NULL)
	{
		printf("노드 값 = %d\n", connect->data);
		connect = connect->next;
	}

#pragma endregion

return 0;
}