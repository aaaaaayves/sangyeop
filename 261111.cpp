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


//#include <stdio.h>
//int main()
//{
//	int line; //int line = ?; 도 ok
//	scanf("%d", &line);
//	int x; //몇개인지 세는 변수
//	int y = 1; // 이번줄 별 개수
//	int z; // 빈칸
//
//	for (z = line-1; z >= 0; z--) {
//		for (x = 0; x < z; x++) {
//			printf(" ");
//		}
//		for (x = 0; x < y; x++) {
//			printf("*");
//		}
//		y += 2;
//		printf("\n");
//	}
//}





//#include <stdio.h>
//
//int main()
//{
//	int line;
//	scanf("%d", &line);
//	int x;
//	int y = 1;
//	int z;
//
//	for (z = line-1; z >= 0; z--) { //line 
//		for (x = 0; x < z; x++) {
//			printf(" ");
//		}
//
//		for (x = 0; x < y; x++) {
//			printf("*");
//		}
//
//		y += 2; 
//		printf("\n"); 
//	
//		
//	}
//	//if (y == 7) 확장성에서는 y가 7이넘어가는 순간 false가 된다 즉 여기선 if쓰면 안됨 
//		y -= 2;
//	
//
//	for (z = 0; z <= line-1; z++) { // line;  
//		for (x = 0; x < z; x++) {
//			printf(" ");
//		}
//		for (x = 0; x < y; x++) {
//			printf("*");
//		}
//		y -= 2;
//		printf("\n");
//	}
//	
//}


//#include <stdio.h>
//
//int main()
//{
//	int line;
//	scanf("%d", &line);
//	int x;
//	int y = 1;
//	int z;
//
//	for (z = line-1; z >= 0; z--) { //공백
//		for (x = 0; x < z; x++) {
//			printf(" ");
//		}
//		for (x = 0; x < y; x++) {
//			printf("%d", y);
//	}
//
//		y += 1; 
//		printf("\n");
//
//	}
//	
//
//}

#include <stdio.h>

int main()
{
	int input; //scanf로 입력받은 숫자 
	int num = 0; //현재 숫자 몇인지? 
	int count = 0; // 몇개 입력했는지 
	char turnA = 'A'; //누구 차례인지 
	char turnB = 'B';
	int lose = 31;



	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
	printf("%c : ",turnA);
	scanf("%d", &input);
	printf("%c : ", turnA);
	scanf("%d", &input);
	printf("%c : ", turnA);
	scanf("%d", &input);
	
	printf("턴이 넘어갑니다.\n");

	printf("%c : ", turnB);
	scanf("%d", &input);
	printf("%c : ", turnB);
	scanf("%d", &input);
	printf("%c : ", turnB);
	scanf("%d", &input);
	
	printf("턴이 넘어갑니다.\n");

	printf("%c : ", turnA);
	scanf("%d", &input);
	printf("%c : ", turnA);
	scanf("%d", &input);
	printf("%c : ", turnA);
	scanf("%d", &input);

	printf("턴이 넘어갑니다.\n");

	printf("%c : ", turnB);
	scanf("%d", &input);
	printf("%c : ", turnB);
	scanf("%d", &input);
	printf("%c : ", turnB);
	scanf("%d", &input);
	
	



}