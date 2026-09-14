//#include <stdio.h> //163p 5-3
//
//void main()
//{
//	int a = 200;
//
//	if (a < 100)
//	{
//		printf("100보다 작군요.\n");
//		printf("거짓이므로 앞의 문장은 안보이겠죠?\n");
//	}
//
//	printf("프로그램 끝!\n");
//}

//#define _CRT_SECURE_NO_WARNINGS //166p 5-6
//#include <stdio.h>>
//void main()
//{
//	int a;
//
//	printf("정수를 입력하세요: ");
//	scanf("%d", &a);
//
//	if (a % 2 == 0)
//	{
//		printf("짝수를 입력했군요.\n");
//	}
//	else
//	{
//		printf("홀수를 입력했군요.\n");
//	}
//
//}

//#include <stdio.h> //167p 5-7
//
//void main()
//{
//	int a = 75;
//
//	if (a > 50)
//	
//		if (a < 100)
//		{
//			printf("50보다 크고 100보다 작군요.\n");
//		}
//		else
//		{
//			printf("와~~ 100보다 크군요..\n");
//		}
//	else
//	{
//		printf("에게~ 50보다 작군요.\n");
//	}
//}

//#define _CRT_SECURE_NO__WARNINGS //172p 5-9
//#include <stdio.h>
//void main()
//{
//	int a;
//	
//	printf("1 ~ 4 중에 선택하세요 : ");
//	scanf("%d", &a);
//
//	switch (a)
//	{
//	case 1:
//		printf("1을 선택했다\n");
//		break;
//	case 2:
//		printf("2를 선택했다\n");
//		break;
//	case 3:
//		printf("3을 선택했다\n");
//		break;
//	case 4 :
//		printf("4를 선택했다\n");
//		break;
//	default:
//		printf("이상한 걸 선책했다.\n");
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS//175p 5-10
//#include <stdio.h>
//void main()
//{
//	int year;
//
//	printf("출생년도를 입력하세요: ");
//	scanf("%d", &year);
//
//	switch (year % 12)
//	{
//	case 0: printf("원숭이띠\n"); break;
//	case 1: printf("닭띠\n"); break;
//	case 2: printf("개띠\n"); break;
//	case 3: printf("돼지띠\n"); break;
//	case 4: printf("쥐띠\n"); break;
//	case 5: printf("소띠\n"); break;
//	case 6: printf("호랑이띠\n"); break;
//	case 7: printf("토끼띠\n"); break;
//	case 8: printf("용띠\n"); break;
//	case 9: printf("뱀띠\n"); break;
//	case 10: printf("말띠\n"); break;
//	case 11: printf("양띠"); break;
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int input1, input2;
//	printf("숫자 2개를 입력해주세요: ");
//	scanf("%d %d", &input1, &input2);
//
//	char oper;
//	printf("어떤 기호로 계산할지 입력하세요: ");
//	scanf(" %c", &oper);//+,- 같이 엔터를 방지하기 위해 " %c" 이처럼 한칸 띄어쓰기 해야한다 큰따옴표 안에서 
//
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", input1, input2, input1+input2 ); break;
//
//	case '-': printf("%d - %d = %d", input1, input2, input1-input2); break;
//		
//	case '*': printf("%d * %d = %d", input1, input2, input1*input2); break;
//
//	case '/': printf("%d / %d = %d", input1, input2, input1/input2); break;
//
//	case '%': printf("%d %% %d = %d", input1, input2, input1%input2); break;
//	}
//
//
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽이동\n");
//	printf(">, d 오른쪽이동\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a': // <, a 는 케이스를 따로 써서 
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>': case 'd': // >, d는 한문장에서 케이스를 같이 썻다 같은 결과값을 출력할때 유용
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	const int option = 3; //상수값 설정 const 데이터다입 변수이름으로 구성
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드\n");
//		break;
//	case option:
//		printf("옵션 세팅\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("0~9 사이의 숫자를 입력하세요\n");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 3:
//		
//		
//	case 6:
//		
//		
//	case 9:
//		printf("짝"); //코드 간소화 맨마지막두면 앞에 3,6에도 프린트f를 출력가능
//		
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'X';
//
//	switch (command)
//	{
//	case 'x': printf("알파벳 x입력\n");
//		break;
//	case 'X': printf("엑스표 입력\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//
//	switch (i_menu)
//	{
//	case 1:
//	{ //switch내부에 변수 선언할때는 해당케이스 단락 을 {} 묶어야 함
//		int number1, number2;
//		printf("숫자 두개를 입력하세요: \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	
//
//	case 2:
//	{
//		int number3, number4;
//		printf("숫자 두개를 입력하세요: \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{ //스위치내부에서 변수선언할때 {} 사용 
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요: \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//
//	case 2:
//	{
//		int number3, number4;
//		printf("숫자를 입력하세요: \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	}
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요: 1.w 2.a 3.d 4.s \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'w': printf("위 방향키를 입력하셨습니다.\n");
//		break;
//	case 'a': printf("좌 방향키를 입력하셨습니다.\n");
//		break;
//	case 'd': printf("우 방향키를 입력하셨습니다.\n");
//		break;
//	case 's': printf("아래 방향키를 입력하셨습니다.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int appetizer;
//	int maindish;
//	int dessert;
//	
//	printf("appetizer를 선택해주세요: 1.캐비어 2.샐러드 3.푸아그라\n");
//	scanf("%d", &appetizer);
//	printf("maindish를 선택해주세요: 1.스테이크 2.생선요리 3.양갈비\n");
//	scanf("%d", &maindish);
//	printf("dessert를 선택해주세요: 1.케잌 2.아이스크림 3.초콜릿무스\n");
//	scanf("%d", &dessert);
//
//	printf("주문하신 음식은=> ");
//
//
//	switch (appetizer)
//	{
//	case 1: printf("캐비어");
//		break;
//	case 2: printf("샐러드");
//		break;
//	case 3: printf("푸아그라");
//		break;
//	}
//
//	switch (maindish)
//	{
//	case 1: printf(" 스테이크");
//		break;
//	case 2: printf(" 생선요리");
//		break;
//	case 3: printf(" 양갈비");
//		break;
//	}
//
//	switch (dessert)
//	{
//	case 1: printf(" 케잌");
//		break;
//	case 2: printf(" 아이스크림");
//		break;
//	case 3: printf(" 초콜릿무스");
//		break;
//		
//	}
//
//	
//
//
//}

#include <stdio.h>

int main()
{
	int i = 0;
	while (i < 100)
	{
		printf("%3d(%02x)", i, i);
		if(i > 70 && i < 80) { i++; continue; }
		if (i % 10 == 9) printf("\n");
		if (i == 93) break;
		i++;
	}
}