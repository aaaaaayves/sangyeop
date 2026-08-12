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
//
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
//
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
//
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
//
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
//	printf("+ - * / %% ==> ");
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
//		if (b != 0) {
//			result = a / b;
//			printf(" %d / %d = %d \n", a, b, result);
//		}
//		else          // <이부분 여쭈어보기
//			printf("0으로 나누면 안됩니다. \n");
//	}
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

//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b = 50;
//	printf("숫자를 입력하세요: ");
//	scanf("%d", &a);
//	printf("%d %% %d = %d", a, b, a % b);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d = 6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d = 6/4\n", data3);
// 
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d // %d\n", number1, number2);
//
//	return 0;
//}

//#include <stdio.h>	
//
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}

//#include <stdio.h>   <<중요
//
//int main()
//{
//	int jelly;
//	printf("가격을 입력해주세요(원).");
//	scanf("%d", &jelly);//450
//
//	int wallet = 1000;
//	wallet = 1000 - jelly;
//
//	printf("거스름돈은 %d원입니다.\n", wallet);
//
//	int coin500 = wallet / 500;
//	wallet %= 500;
//
//	int coin100 = wallet / 100;
//	wallet = wallet % 100;
//
//	int coin50 = wallet / 50;
//	wallet = wallet % 50;
//
//	int coin10 = wallet / 10;
//	wallet = wallet % 10;
//
//	printf("오백원 %d개\n", coin500);
//	printf("백원 %d개\n", coin100);
//	printf("오십원 %d개\n", coin50);
//	printf("십원 %d개\n", coin10);
//
//	return 0;
//
//
//}
	//550


	//int coin500 = wallet % price;
	//jelly = jelly / wallet;
	//printf("동전500원 =  %d개 입니다.", coin500);

	//int coin100 = coin / wallet;
	//coin = coin / wallet;
	////printf("동전100원 = %d개 입니다.", coin100);

	//int coin50 = coin / wallet;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	int afterInt = rand() % 10+50;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);// 0 9
//	printf("그다음숫자 : %d", afterInt);//  50 - 59
//
//	return 0;

//} //실행할때마다 계속 출력값이 갱신됨

//#include <stdio.h>
//#include <stdlib.h>	
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000; //  0~9/ +1 = 1 ~ 10 * 1000  = 1000 ~ 10000  
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500; // 0 ~ 3 *500 = 0 ~ 1500 
//	int coin100 = rand() % 5000; // 0~4999 
//	coin100 = coin100 / 100 * 100;  // 4999 / 100 = 49 * 100 = 4,900 = 0 ~ 4900 
//	printf("그리고 과자의 가격은"); // 0 ~ 6500
//	printf(" %d원이다.", coin500 + coin100); 
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//
//}


