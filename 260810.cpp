//#include<stdio.h>
//
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d" , &k); 
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}

//#include <stdio.h>
////반지름의 길이가 r인 원의 넓이와 원의 길이를 구하여 출력 r은 sacnf이용해 값을 받기
//int main()
//{
//	float pi;
//	pi = 3.14;
//
//	int radius;
//	printf("반지름의 길이 : ");
//	scanf("%d", &radius);
//	printf("");
//
//	float area;
//	area = radius * radius * pi ;
//	printf("원의 넓이: %.2f\n", area);
//
//	float length;
//	length = 2 * radius * pi;
//	printf("원의 길이: %.2f", length);
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int w1;
//	printf("밑변의 길이: ");
//	scanf("%d", &w1);
//	
//	int w2;
//	printf("윗변의 길이: ");
//	scanf("%d", &w2);
//
//	int h;
//	printf("높이: ");
//	scanf("%d", &h);
//
//	float area;
//	area = (w1 + w2) * h / 2.0;
//	printf("사다리꼴의 넓이: %.1f", area);
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a* b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number ); //초기화 된 number에 +3 
//	number -= 2;         printf("%2d\n", number ); //재선언된 number 4에 -2 
//	number--;            printf("%2d\n", number ); //재선언된 number 2에 -1 
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++); //a를 먼저 사용하고 뒤에 1씩 증가 
//	printf("%d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a;
//	printf("첫번째 변수: ");
//	scanf("%d", &a);
//
//	int b;
//	printf("두번째 변수: ");
//	scanf("%d", &b);
//
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//
//	return 0;
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d =number1%%4\n", number1 % 4);
//	printf("%d =number2%%3\n", number2 % 3);
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int a; 
	int b = 50;
	printf("숫자를 입력하세요: ");
	scanf("%d", &a);
	printf("%d %% %d = %d", a, b, a % b);

	return 0;
}