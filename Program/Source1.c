#include <stdio.h>
#include <stdlib.h>

void main()
{
#pragma region 동적 할당
	// 프로그램을 실행하는 중에 필요한 만큼 메모리를 할당
	// 하는 작업입니다.

	int* pointer;
	pointer = (int *)malloc(4);
	*pointer = 10;

	printf("동적 할당된 메모리의 값 = %d\n", *pointer);

	free(pointer);



	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를
	// 변경할 수 있으며, 동적으로 메모리의 크기를 할당할 때
	// byte 단위로 지정합니다.
	// 동적으로 할당한 메모리는 Heap 영역에 보관되어 있으므로,
	// 사용이 끝나면 직접 해제해주어야 합니다.
#pragma endregion

return 0;
}