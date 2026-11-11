//#include<stdio.h>
//
//int main()
//{
//
//
//
//
//	int x;
//	int y = 1;
//	int z;
//
//	//for (x = 0; x < 4; x++) {
//	//	for (y = 0; y < 2 * x +1; y++) { 
//	//		if()
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//
//	//printf(" ");
//	//printf(" ");
//	//printf(" ");
//	//printf("*"); 
//	//printf("\n");
//	//printf(" ");
//	//printf(" ");
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("\n");
//	//printf(" ");
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("\n");
// //   printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("*");
//
//	//스페이스가 3>2>1>0 순  변수 z 
//
//
//
//	 //스페이스에 대한 반복문을 따로 만들어야함 
//
//	printf(" ");
//	printf(" ");
//	printf(" ");
//
//
//	for (x = 0; x < y; x++) {
//
//		printf("*");
//
//	}
//	y += 2;
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	for (x = 0; x < y; x++) {
//
//		printf("*");
//
//	}
//	y += 2;
//
//	printf("\n");
//	printf(" ");
//
//	for (x = 0; x < y; x++) {
//
//		printf("*");
//
//	}
//	y += 2;
//	printf("\n");
//
//	for (x = 0; x < y; x++) {
//
//		printf("*");
//	}
//	y += 2;
//	printf("\n");
//}

	//y++;
	//printf("\n");
	//printf("%d", x);
	//printf("*");
	//printf("\n");
	//printf("**");
	//printf("\n");
	//printf("***");
	//printf("\n");


#include <stdio.h>
int main()
{
	int x; //몇개인지 세는 변수
	int y = 1; // 이번줄 별 개수
	int z; // 빈칸

	for (z = 3; z >= 0; z--) {
		for (x = 0; x < z; x++) {
			printf(" ");
		}
		for (x = 0; x < y; x++) {
			printf("*");
		}
		y += 2;
		printf("\n");
	}
}



//#include <stdio.h>
//int main()
//{
//	int outer;   // 몇 번째 줄인지 (0, 1, 2, 3)
//	int inter;   // 몇 개 찍었는지 세는 손가락
//
//	for (outer = 0; outer < 4; outer++)                // 줄 4개 만들기
//	{
//		for (inter = 0; inter < 3 - outer; inter++)    // ① 빈칸 (3 - outer)개
//		{
//			printf(" ");
//		}
//		for (inter = 0; inter < 2 * outer + 1; inter++) // ② 별 (2 × outer + 1)개
//		{
//			printf("*");
//		}
//		printf("\n");                                  // ③ 줄바꿈
//	}
//}

