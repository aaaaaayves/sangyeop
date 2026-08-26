//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요: ");
//	scanf("%d", &y_age);
//
//	if (y_age >= 15)
//	{
//		printf("볼수 있는 영화 등급은 ==> 전체 관람가, 12세 관람가, 15세 관람가\n");
//	}
//	else if (y_age >= 12)
//	{
//		printf("볼수 있는 영화 등급은 ==> 전체 관람가, 12세 관람가\n");
//	}
//	else
//	{
//		printf("볼수 있는 영화 등급은 ==> 전체관람가\n");
//	}
//	return 0;
//
//}

//#include <stdio.h> //위 문제 다른버전
//
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요: ");
//	scanf("%d", &y_age);
//
//	printf("볼수 있는 영화 등급은 ==>");
//	if (y_age >= 15)
//	{
//		printf("15세 관람가, ");
//	}
//	if (y_age >= 12)
//	{
//		printf("12세 관람가, ");
//	}
//	
//	printf("전체관람가\n");
//	
//	return 0;
//
//}

//#include <stdio.h>
////scanf로 initial 하나 입력받아 영어 소문자면 "소문자" 대문자면 "대문자"를 출력하라
////'A'는 0x41 'Z'는 0X5a 
////'a'는 0x61 'z'는 0x7a
//int main()
//{
//	char initial;
//	printf("문자를 입력하세요 ==> ");
//	scanf("%c", &initial);
//	//소문자 97~122 대문자 65~90
//	if (initial >= 0x61 && initial <= 122)
//	{
//		printf("%c는 소문자", initial);
//	}
//	else if (initial >= 'A' && initial <= 90)
//	{
//		printf("%c는 대문자", initial);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	
//	if (number > answer)
//	{
//		printf("숫자1이 숫자 2보다 큽니다.\n");
//	}
//	else //number <= answer 인 경우 else 실행
//	{ //else if로 한번에가 아닌 이렇게 나누어서 작성할경우 지금 글을 쓰고 있는 이 줄에 코드를 사용하기 위해 else 밑에 if를 쓴다
//		if (number < answer)
//		{
//			printf("숫자 2가 숫자 1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//
//	if (number > answer)
//	{
//		printf("숫자1이 숫자2보다 크다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 크다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//
//	if (number > answer) {
//		printf("숫자 1이 숫자 2보다 크다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자 2가 숫자 1보다 크다.\n");
//	}
//	else
//	{
//		printf("숫자 1과 숫자 2가 같다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("섯적은 A등급 입니다.\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급 입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급 입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급 입니다.\n");
//	}
//	else {
//		printf("성적은 D등급 입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = 11;
//	if (number > 0) { //1번째 if
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다.\n");
//	}
//	else {
//		printf("number는 0입니다.\n");
//	}
//	
//	if (number % 2 == 0) //2번째 if
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char input;
//	printf("커맨드를 입력해주세요: ");
//	scanf("%c", &input);
//
//	if (input == 'w')
//	{
//		printf("위 방향키를 입력했습니다.\n");
//	}
//	else if (input == 'a')
//	{
//		printf("좌 방향키를 입력했습니다.\n");
//	}
//	else if (input == 'd')
//	{
//		printf("우 방향키를 입력했습니다.\n");
//	}
//	else if (input == 's')
//	{
//		printf("아래 방향키를 입력했습니다.\n");
//	}
//	else
//	{
//		printf("다시 입력해주세요.\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int gauge;
//	printf("0 ~ 100까지의 숫자를 입력해주세요: ");
//	scanf("%d", &gauge);
//
//	
//    if (gauge >= 45 && gauge <= 55)
//	{
//		printf("Perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65)
//	{
//		printf("Excellent");
//	}
//	else
//	{
//		printf("Good");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("숫자를 입력해주세요: ");
//	scanf("%d", &input);
//
//	if (input % 3 == 0)
//	{
//		printf("입력하신 숫자는 3의 배수입니다.\n");
//
//		if (input % 6 == 0)
//		{
//			printf("입력하신 숫자는 6의 배수입니다.\n");
//		}
//		else
//		{
//			printf("입력하신 숫자는 6의 배수가 아닙니다.\n");
//		}
//		if (input % 9 == 0)
//		{
//			printf("입력하신 숫자는 9의 배수입니다.\n");
//		}
//		else
//		{
//			printf("입력하신 숫자는 9의 배수가 아닙니다.\n");
//		}
//	}
//	else 
//	{
//		printf("입력하신 숫자는 3의 배수가 아닙니다.\n");
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
//	char command = 'i'; //고유값 설정 
//
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command; //커맨드 변수선언 
//	printf("커맨드를 입력하세요: ");
//	scanf("%c", &command); // 커맨더 입력받기 
//
//	switch (command) // 입력받은 커맨드가 아래 case와 일치하면 일치한 그 case부터 그 아래 case까지 실행하니 실행을 멈추고 싶은 코드에 break걸어주기
//	{
//	case 'i': printf("아이템창 오픈\n"); break; // i입력시 아이템창 오픈 실행
//	case 'm': printf("지도창 오픈\n"); // m입력시 지도창 오픈 실행
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		//break;를 걸면 i까지만 실행되며 풀면 i부터 그밑에 case들이 쭉 아래로 계속 실행된다 
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요: ");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char number = 3;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int month;
//	printf("몇월달인지 입력하세요: ");
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case 1: printf("January\n"); break;
//	case 2: printf("February\n"); break;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int input1, input2;
	printf("숫자 2개를 입력해주세요: ");
	scanf("%d %d", &input1, &input2);
	
	char oper;
	printf("어떤 기호로 계산할지 입력하세요: ");
	scanf("%c", &oper);

	switch (oper)
	{
	case '+': printf("%d + %d = %d", input1, input2);
	}

	

	return 0;
}