//#include <stdio.h>
////1부터 10까지 더한값을 출력한 코딩
//int main()
//{
//	int num = 1;  //1부터 10까지 증가할 변수
//	int total = 0; //덧셈결과를 저장할 변수
//
//	while (num <= 10) { //num이 10과 같아질때까지
//		total += num; //total을 num에 더해라
//		num++;        //num을 하나씩 증가시켜라
//	}
//	printf("1부터 10까지 더한 값: %d\n", total);
//}
//
//#include <stdio.h>
/////1부터 10까지 곱한 값 출력
//
//int main()
//{
//	int num = 1;
//	int total = 1;
//
//	while (1) {
//
//		if (num == 10) break;
//
//		total *= num;
//		num++;
//		
//	}
//	
//	printf("%d\n", num);
//	printf("1부터 10까지 곱한 값: %d", total);
//	
//
//}

//#include <stdio.h>
////문제4 
//int main()
//{
//	int num = 1;
//	int multi = 1;
//
//	while (1) {
//
//		multi *= num;
//		if (multi > 50000)	break; //위치
//		num++;
//	}
//	printf("첫 50000이상인 num의 값: %d\n", num);
//}

//#include <stdio.h>
////문제5
//int main()
//{
//	char alphabet;
//	alphabet = 'a';
//	//printf("%c", alphabet);
//	//alphabet++;
//	//printf("%c", alphabet);
//	//alphabet++;
//	//printf("%c", alphabet);
//
//	//while (alphabet <= 'z')  {
//	//	printf("%c", alphabet);
//	//	alphabet++;
//
//	//	if (alphabet == 'f')
//	//		alphabet += 1;
//	//	
//	//	//printf("%c", alphabet); //여기서 출력하게 되면 a에서 증가된 채로 b부터나옴 
//	//}
//	while (alphabet <= 'z') {
//		if (alphabet != 'f') //아닐때만 출력 
//			printf("%c", alphabet);
//		alphabet++;


//		//printf("%c", alphabet); //여기서 출력하게 되면 a에서 증가된 채로 b부터나옴 
//	}
//
//	//while (1) {
//	//	if ()
//	//}
//}

#include <stdio.h>
//문제6
int main()
{
	int userA = 0;
	int userB = 1;
	int totalA = 0;
	int totalB = 0;
	int count = 0;
	int num1 = 0;
	int num2 = 0;

	while (1) {

		printf("A: 1~3까지 입력하세요: \n");
		scanf("%d", &totalA);
		printf("B: 1~3까지 입력하세요: \n");
		scanf("%d", &totalB);
		count = totalA + totalB;
		printf("현재 = %d\n", count);

		if (count >= 31) break;
	}
	printf("패배하셨습니다."); //반복문밖 위치 

	//누가 패배했는지가 안나옴 
}