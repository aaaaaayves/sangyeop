//#include <stdio.h> 1번
//
//void main()
//{
//
//	printf("C 언어"); // C 언어
//	printf("200+300"); // 200+300
//	printf("%d", 200 + 300); // 500
// 
// return 0;
//}

//#include <stdio.h>
//
//void main()
//{
//	printf("%d %d %d %d", 100, 200, 300); // 100 200 300 0 
//	printf("%d %d", 100, 200, 300); // 100 200
//	printf("%d", 100, 200, 300); // 100
// 
// return 0;
//}

//#include <stdio.h>
//
//void main()
//{
//	printf("% d / % d = %d", 10, 20, 10 / 20); // 10 / 20 = 0
// 
// return 0;
//}

//#include <stdio.h>
//
//void main()
//{
//	
//	// %x = 16진수 %d = 10진수 %f = 실수 %c = 문자 %s = 문자열 %o = 8진수 
//
//}

//#include <stdio.h>
//
//void main()
//{
//	printf("%05d", 4321); // 04321
//	printf("%7.1f", 4321.7890); // 4321.8
//	printf("%5s", "Cook"); // Cook
//}

// 해당하는 탈출 문자 \n \t \b \r \a \\ \" \' 
// \n=줄바꿈 \t=수평탭 \b=백스페이스 \r=캐리지리턴 \a=경고음 \\=백슬래시출력 \"=큰따옴표출력 \'=작은따옴표출력

////변수의 선언 방법이다. 문법상 틀린것은?
//#include <stdio.h>
//
//void main()
//{
//	char a; int b; float c;
//	char a, b; int c; 
//	char a, b, c;
//	char a, int b, float c;  << int b 뒤에 세미콜론구분

//}

//a, b, c에 모두 10을 대입후 세 변수의 곱셈을 res에 구하는 코드
//아래 빈칸에 들어갈코드

//#include <stdio.h>
//
//void main()
//{
//
//	int a, b, c, res;
//	a = b = c = 10;
//
//	res = a * b * c;
//	printf("a,b,c의 곱셈 값 ==> %d \n", res);
//
//	
//}

//9번은 계산방법 모르겠음

//아래중 가장 큰 숫자를 저장하는 데이터 형식
//unsigned short
//unsigned int
//long int
//unsigned long 정답

//아래 문법상 틀린것 찾기 
//#include <stdio.h>
//
//void main()
//{
//
//	char ch1 = 'A', ch2 = 'B', ch3 = 'C';
//
//	1. ch1 = ch2 = 100;
//	2. ch1 = ch2 = 'T';
//	3. ch1 = ch2 = 200; <<정답 char은 -128 ~ 127
//	4. ch3 = ch1 - ch2;
//}

//# include 
//
//void main()
//{
//	char mystr[3] = "AB";
//
//	mystr[0] = 'C';
//	mystr[1] = 66;
//	mystr[2] = 100 - 30;
//	mystr[3] = 'C'; < 정답 0,1,2 까지만 있음
//}

//#include <stdio.h> 
//
//void main()
//{
//	char str[10] = "VisualC++";
//	int i;
//	for 
//}

//#include <stdio.h>
//void main()
//{ 
	//printf("f111");//f111
	//printf("111+222");  // 111+222
	//printf("%d", 111 + 222); // 333

	/*float a = 123.45;
	printf("%08.3f", a);*/
	//-> .3 소수점 아래 셋째 자리까지 출력하란뜻 123.45지만 셋째자리까지이니 123.450
	//-> 8은 소수점 포함 전체 출력 길이를 최소 8자리로 출력
	//-> 0은앞서 확보한 8자리중 남는 앞자리빈공간을 공백 대신 0으로넣어라 
	// > 정답은 0123.450

	//float a = 123.45, b;
	//int c; c = a; //실수->정수 123이됨  .45는 없어짐
	//b = c; 
	//printf("%6.2f", b); //소수점 아래2자리 까지 그리고 총 6자리까지 출력하라여서 
	//// > 123.00


//}

//#include <stdio.h>
//	
//int main()
//{
//	int a = 111.22;
//	float b = 300;
//
//	printf("a의 값 ==> %d \n", a); //111 정수로 출력하면서 .22 사라짐 
//	printf("b의 값 --> %f \n", b); // 300.000000 소수점 아래 6자리 실수로 출력됨?
//
//}

//#include <stdio.h> <<이문제 꼭 여쭤보기 
//int main()
//{
//	int a = 0x41, b = 0x61;
//
//	int tol;
//
//	tol = b - a;
//
//	printf("%c를 소문자로 표시하면 %c이며 \n", 'K', 'K' + tol);
//	printf("%c를 대문자로 표시하면 %c이며 \n", 'Z', 'Z' - tol);
//}

//조건문 if
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15)//apple이 15이면실행
//	{	printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple != 17)//apple이 17이 아닐경우 실행
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)//apple이 7보다 크면 실행
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple < 20)//apple이 20보다 적을 경우 실행
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10) //apple이 10이면 실행
//	{
//		printf("apple은 10개 있습니다.\n"); //apple이 10일 경우 실행되는 실행문 
//	}
//	else if (apple == 0) //apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n"); //apple이 0일 경우 실행되는 실행문 
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) //apple이 0이면 실행 
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("숫자를 입력해주세요: ");
//	scanf("%d", &number);
//
//	if (number > 0)
//	{
//		printf("입력 하신 숫자%d는 양수입니다.\n", number);
//	}
//	else if (number < 0)
//	{
//		printf("입력하신 숫자%d는 음수 입니다.\n", number);
//	}
//	else 
//	{
//		printf("입력하신 숫자는 0입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
// 논리연산자 활용 예시 
//int main()
//{
//	int number;
//	printf("숫자를 입력하세요: ");
//	scanf("%d", &number);
//
//	if (number >= 10 && number <= 99)
//	{
//		printf("입력하신 숫자는 두 자리 입니다.\n");
//	}
//	else
//	{
//		printf("입력하신 숫자는 두 자리 숫자가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다,\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int y_age;
	printf("나이를 입력하세요: ");
	scanf("%d", &y_age);

	if (y_age >= 15)
	{
		printf("볼수 있는 영화 등급은 ==> 전체 관람가, 12세 관람가, 15세 관람가\n");
	}
	else if (y_age >= 12)
	{
		printf("볼수 있는 영화 등급은 ==> 전체 관람가, 12세 관람가\n");
	}
	else 
	{
		printf("볼수 있는 영화 등급은 ==> 전체관람가\n");
	}
	return 0;
	
}