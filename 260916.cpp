//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		printf("%3d", i);
//		if (i >= 70 && i < 80) { i++; continue; }
//		printf("(%2X)", i);
//		if (i % 10 == 9) printf("\n");
//		if (i == 93||i==75) break;
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//	while (count < 3) //카운트가 3보다 작을경우 아래 실행 
//	{
//		printf("현재 count: %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++; //카운트가 1씩 증가해서 3과 같거나 커질경우 반복문에서 빠져나감 
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//	while (count > 0) //카운트가 3보다 작을때 아래 조건문 실행하는 조건식 
//	{
//		printf("현재 count: %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--; //카운트가 하나씩 작아져서 0과 같거나 작아지면 조건문 빠져나감 
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//	while (count < 6)
//	{
//		printf("C");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	while (num >= -10)
//	{
//		printf("%d\n", num);
//		num--;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	while (num <= 100)
//	{
//		printf("%d", num);
//		num += 5;
//	}
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count: %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도: %d도\n", temperature);
//		temperature--;
//	}
//	while (temperature > 28);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME: 
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int select;
//	
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.로그인 2.회원가입 3.옵션 4.만든 사람들 ");
//		scanf("%d", &select);
//		
//
//		switch (select) {
//		case 1: printf("로그인이 되셨습니다.\n"); break;
//		case 2: printf("회원가입이 되셨습니다.\n"); break;
//		case 3: printf("옵션 세팅\n"); break;
//		case 4: printf("만든 사람들\n"); break;
//		default: printf("잘못 선택하셨습니다.\n"); break;
//		}
//	} while (select <= 4 && select >= 1 ); //조건이 1~4까지 이니 좀더 보기 명확하게 1과4를 써주자
//
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력):");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if(alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else { continue; }
//		printf("입력한 값: %c\n", alphabet);
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, total = 0;
//	while (1) {
//		printf("양수를 입력해주세요(0입력시종료);");
//		scanf("%d", &number);
//
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() //1씩 증가되는 넘 그리고 넘을 멀티에 곱하기 그 곱한값이 5000이상이 된 시점의 num값
//{
	//int num = 0; int multi = 0;
	//while (num) {
	//	num++;
	//	if (num * multi <= 5000)
	//		printf("%d", num);
	//}

//}

#include <stdio.h>
 //1부터 10까지 더한값을 출력한 코딩
int main()
{
	int num = 1;
	while (num <= 10) {
		printf("%d", num);
		num++;
	}
}
