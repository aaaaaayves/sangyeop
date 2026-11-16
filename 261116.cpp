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

//베스킨라빈스 1단계 
//#include <stdio.h>
//
//int main()
//{
//	int input; //scanf로 입력받은 숫자 
//	int num = 0; //현재 숫자 몇인지? 
//	int count = 0; // 몇개 입력했는지 
//	char turn = 'A'; //누구 차례인지 
//	int lose = 31;


	/*printf("<베스킨라빈스31!>");
	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");*/
	/*printf("%c : ", turnA);
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
	scanf("%d", &input);*/

	//printf("<베스킨라빈스31!>");
	//printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");

	//while (1)
	//{
	//	count = 0; //새턴이시작되면0 
	//	while (count < 3) //한턴에 3번 입력받기  
	//	{
	//		printf("%c : ", turn);
	//		scanf("%d", &input);
	//		count++;
	//	}

	//	printf("턴이 넘어 갑니다.\n");

	//	if (turn == 'A') //차례바꾸기 
	//		turn = 'B';
	//	else
	//		turn = 'A';
	//}

////베스킨라빈스 2단계 
//#include <stdio.h>
//
//int main()
//{
//	int input; //scanf로 입력받은 숫자 
//	int num = 0; //현재 숫자 몇인지? 
//	int count = 0; // 몇개 입력했는지 
//	char turn = 'A'; //누구 차례인지 
//	int lose = 31; //패배조건
//
//
//	{
//		printf("<베스킨라빈스31!>");
//		printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//
//		while (1)
//		{
//			count = 0; //새턴이시작되면0 
//			while (count < 3) //한턴에 3번 입력받기  
//			{
//				printf("%c : ", turn);
//				scanf("%d", &input);
//
//				if (input == lose)
//				{
//					if (turn == 'A')
//						printf("유저 B의 승리입니다!\n");
//					else
//						printf("유저 A의 승리입니다!\n");
//				}
//				count++;
//			}
//
//			printf("턴이 넘어 갑니다.\n");
//
//			if (turn == 'A') //차례바꾸기 
//				turn = 'B';
//			else
//				turn = 'A';
//		}
//	}
//}

////베스킨라빈스 3단계 
//#include <stdio.h>
//
//int main()
//{
//	int input; //scanf로 입력받은 숫자 
//	int num = 0; //현재 숫자 몇인지? 
//	int count = 0; // 몇개 입력했는지 
//	char turn = 'A'; //누구 차례인지 
//	int lose = 31; //패배조건
//
//
//	{
//		printf("<베스킨라빈스31!>");
//		printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//
//		while (1)
//		{
//			count = 0; //새턴이시작되면0 
//			while (count < 3) //한턴에 3번 입력받기  
//			{
//				printf("%c : ", turn);
//				scanf("%d", &input);
//
//				if (input == lose)
//				{
//					if (turn == 'A')
//						printf("유저 B의 승리입니다!\n");
//					else
//						printf("유저 A의 승리입니다!\n");
//				}
//				count++;
//			}
//
//			printf("턴이 넘어 갑니다.\n");
//
//			if (turn == 'A') //차례바꾸기 
//				turn = 'B';
//			else
//				turn = 'A';
//		}
//	}
//}

////베스킨라빈스 4단계 
//#include <stdio.h>
//
//int main()
//{
//	int input; //scanf로 입력받은 숫자 
//	int num = 0; //현재 숫자 몇인지? 
//	int count = 0; // 몇개 입력했는지 
//	char turn = 'A'; //누구 차례인지 
//	int lose = 31; //패배조건
//
//
//	{
//		printf("<베스킨라빈스31!>");
//		printf("게임을 시작합니다! : 31을 말하는 사람이 패배합니다.\n");
//
//		while (1)
//		{
//			count = 0; //새턴이시작되면0 
//			while (count < 3) //한턴에 3번 입력받기  
//			{
//				printf("지금 입력해야 하는 값은 %d입니다.\n", num + 1); //
//				printf("%c : ", turn);
//				scanf("%d", &input);
//
//				if (input == lose)
//				{
//					if (turn == 'A')
//						printf("유저 B의 승리입니다!\n");
//					else
//						printf("유저 A의 승리입니다!\n");
//					
//				}
//				num++;
//				count++;
//			}
//
//			printf("턴이 넘어 갑니다.\n");
//
//			if (turn == 'A') //차례바꾸기 
//				turn = 'B';
//			else
//				turn = 'A';
//		}
//	}
//}

////베스킨라빈스 5단계 
//#include <stdio.h>
//
//int main()
//{
//	int input;        // scanf로 입력받은 숫자
//	int num = 0;      // 지금까지 진행된 숫자
//	int count = 0;    // 이번 턴에 몇 개 입력했는지
//	char turn = 'A';  // 누구 차례인지
//	int lose = 31;    // 이 숫자를 말하면 패배
//
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게임을 시작합니다! 31을 말하는 사람이 지게됩니다. (0 입력시 턴넘김)\n");
//
//	while (1)
//	{
//		count = 0;                             // 새 턴 시작
//		while (count < 3)                      // 한 턴에 최대 3개
//		{
//			printf("%c : ", turn);
//			scanf("%d", &input);
//
//			// 1) 0 입력: 턴 넘기기
//			if (input == 0)
//			{
//				if (count == 0)                // 하나도 안 말했으면 거부
//				{
//					printf("턴을 넘기기 위해서는 하나 이상의 수를 말해야 합니다.\n");
//					continue;
//				}
//				break;                         // 턴 종료
//			}
//
//			// 2) 잘못된 입력: 다시 입력받기
//			if (input != num + 1)
//			{
//				printf("잘못된 입력입니다.\n");
//				printf("지금 입력해야하는 값은 %d입니다.\n", num + 1);
//				continue;
//			}
//
//			// 3) 31을 말하면 패배
//			if (input == lose)
//			{
//				if (turn == 'A')
//					printf("유저 B의 승리입니다!\n");
//				else
//					printf("유저 A의 승리입니다!\n");
//				return 0;
//			}
//
//			// 현재숫자와 카운트 증가 
//			num++;
//			count++;
//		}
//
//		printf("턴이 넘어갑니다.\n");
//
//		if (turn == 'A')                       // 차례 바꾸기
//			turn = 'B';
//		else
//			turn = 'A';
//	}
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int input;        // scanf로 입력받은 숫자
	int num = 0;      // 지금까지 진행된 숫자
	int count;        // 이번 턴에 몇 개 말했는지
	char turn = 'A';  // 누구 차례인지
	int lose = 31;    // 이 숫자를 말하면 패배

	printf("<베스킨 라빈스 31!>\n");
	printf("게임을 시작합니다! 31을 말하는 사람이 지게됩니다. (0 입력시 턴넘김)\n");

	for (;;)                                   // while(1) 같은 
	{
		for (count = 0; count < 3; )           // 안쪽: 한 턴에 최대 3개
		{
			printf("%c : ", turn);
			scanf("%d", &input);

			if (input == 0)                    // 0 입력: 멈추기
			{
				if (count == 0)                // 하나도 안 말했으면 말해라 
				{
					printf("턴을 넘기기 위해서는 하나 이상의 수를 말해야 합니다.\n");
					continue;
				}
				break;                         // 턴 종료
			}

			if (input != num + 1)              // 잘못된 숫자입력시 
			{
				printf("잘못된 입력입니다.\n");
				printf("지금 입력해야하는 값은 %d입니다.\n", num + 1);
				continue;
			}

			num++;                             // 올바른 입력시 증가 
			count++;

			if (num == lose)                   // 31을 말했으면 멈춤
				break;
		}

		if (num == lose)                       // 31을 말한 사람이 패배
		{
			if (turn == 'A')
				printf("유저 B의 승리입니다!\n");
			else
				printf("유저 A의 승리입니다!\n");
			break;                             // 게임 종료
		}

		printf("턴이 넘어갑니다.\n");

		if (turn == 'A')                       // 차례 바꾸기
			turn = 'B';
		else
			turn = 'A';
	}

	
}


