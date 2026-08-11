//#include <stdio.h> // 83p 3-5
//
//void main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);
//	printf("%05d\n", 123);
//
//	printf("%f\n", 123.45);
//	printf("%7.1f\n", 123.45);
//	printf("%7.3f\n", 123.45);
//
//	printf("%s\n", "Basic-C");
//	printf("%10s\n", "Basic-C");
//}

//#include <stdio.h> // 83p 3-6
//
//void main()
//{
//	printf("\n줄 바꿈\n연습 \n");
//	printf("\t탭키\t연습 \n");
//	printf("이것을\r덮어씁니다 \n");
//	printf("\a\a\a삐소리 3번 \n");
//	printf("글자가 \"강조\"되는 효과 \n");
//	printf("\\\\\ 역슬래시 세 개 출력 \n");
//}

//#include <stdio.h> // 87p 3-7
//
//void main()
//{
//	int a;
//	float b;
//
//	a = 123.45;
//	b = 200;
//
//	printf("a의 값 ==> %d \n", a);
//	printf("b의 값 ==> %f \n", b);
//}

//#include <stdio.h> // 89p 3-8
//
//void main()
//{
//	int a, b;
//	float c, d;
//
//	a = 100;
//	b = a;
//
//	c = 111.1f;
//	d = c;
//
//	printf("a, b의 값 ==> %d , %d \n", a, b);
//	printf("c, d의 값 ==> %5.1f , %5.1f \n", c, d);
//
//}

//#include <stdio.h> // 90p 3-9
//
//void main()
//{
//	int a, b, c, d;
//	
//	a = 100 + 100;
//	b = a + 100;
//	c = a + b - 100;
//	d = a + b + c;
//
//	printf("a, b, c, d 의 값 ==> %d, %d, %d, %d \n ", a, b, c, d);
//
//	a = b = c = d = 100;
//
//	printf("a, b, c, d 의 값 ==> %d, %d, %d, %d \n", a, b, c, d);
//
//	a = 100;
//	a = a + 200;
//	printf("a 의 값 ==> %d \n", a);
//
//}

//#define _CRT_SECURE_NO_WARNINGS //69p 예제모음03
//#include <stdio.h>
//void main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / % ==> ");
//	scanf(" %c", &k);
//	printf("두 번째 계산할 값 ==> ");
//	scanf("%d", &b);
//
//	if (k == '+') {
//		result = a + b;
//		printf(" %d + %d = %d \n", a, b, result);
//	}
//
//	if (k == '-') {
//		result = a - b;
//		printf(" %d - %d = %d \n", a, b, result);
//	}
//
//	if (k == '*') {
//		result = a * b;
//		printf(" %d * %d = %d \n", a, b, result);
//	}
//
//	if (k == '/') {
//		result = a / b;
//		printf(" %d / %d = %d \n", a, b, result);
//	}
//	else           <이부분 여쭈어보기
//		printf("0으로 나누면 안됩니다. \n");
//
//	if (k == '%') {
//		if (b != 0) {
//			result = a % b;
//			printf(" %d %% %d = %d \n", a, b, result);
//		}
//		else
//			printf(" 0으로 나누면 안됩니다. \n");
//	}
//}


