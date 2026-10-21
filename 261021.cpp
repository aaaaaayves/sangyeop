//251p - 7번
//#include <stdio.h>
//
//int main()
//{
//	int start;
//	int end;
//	int change;
//
//	printf("시작 값을 입력 ==> ");
//	scanf("%d", &start);
//	printf("끝 값을 입력 ==> ");
//	scanf("%d", &end);
//
//	if (start > end) {
//		change = start; start = end; end = change;
//	}
//
//	while (start <= end) {
//		if (start % 2 != 0)
//			printf(" %d", start);
//		start++;
//	}
//	
//}

//251p - 8번
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int num = 3721;
//	int count = 0;
//	double num2 = pow(num, 1);
//	int odd = 0;
//	int odd2 = 0;
//	int odd3 = 0;
//	int odd4 = 0;
//
//
//
//	//count = num / 10;
//
//	while (num != 0) { // num이 0과 같지않을때 실행해라 
//
//		count++;
//
//		num = num / 10;
//
//		odd = num2 / 1000;
//		odd2 = num2 / 100;
//		odd3 = num2 / 10;
//		odd4 = num2 / 1;
//
//	}
//
//
//
//
//	//printf("숫자를 여러개 입력: ");
//	//scanf("%d", &num );
//
//
//	printf("%d자리수\n", count);
//	printf("%0.0f\n", num2);
//	printf("%d\n", odd);
//	printf("%d\n", odd2);
//	printf("%d\n", odd3);
//	printf("%d\n", odd4);
//}
//	num2 / 1000;
//}



//#include <stdio.h>
////문제6
//int main()
//{
//	int num;
//	int total = 0;
//	char turn = 'A';
//
//	while (1) {
//
//		printf("%c : ", turn);
//		scanf("%d", &num);
//
//		total += num;
//		printf("=> %d\n", total);
//
//		if (total >= 31)
//			break;
//
//		if (turn == 'A')
//			turn = 'B';
//		else
//			turn = 'A';
//	}
//	if (turn == 'A')
//		printf("A가 이겼습니다!");
//	else
//		printf("B가 이겼습니다!");
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int num;          // 입력받는 숫자 담기 변수 (계산하면서 값이 바뀜)
//	int count = 0;    // 몇 자리 수인지 세는 변수
//	double num2;      // 10의 (count-1)승, pow 결과라서 double
//	int odd;          // 꺼낸 한 자리 숫자 (3 → 7 → 2 → 1)
//	int original;     // 입력한 숫자 원본 보관용
//	int power;        // num2를 정수로 바꾼 값 (1000 → 100 → 10 → 1)
//	int i;            // 하트 개수 세는 변수
//
//	printf("숫자를 여러개 입력: ");
//	scanf("%d", &num);
//	original = num;
//
//	// 1. 몇 자리 수인지 구하기
//	while (num != 0) {    // num이 0과 같지 않을 때 실행해라
//		count++;
//		num = num / 10;
//	}
//	printf("%d자리수\n", count);
//
//	// 2. 10의 몇 승인지 구하기
//	num2 = pow(10, count - 1);
//	printf("10의 %d승 = %0.0f\n", count - 1, num2);
//
//	// 3. 한 자리씩 세로로 출력하기
//	num = original;
//	power = (int)num2;
//	while (power != 0) {
//		odd = num / power;
//		printf("%d\n", odd);
//		num = num % power;
//		power = power / 10;
//	}
//
//	// 4. 하트 출력하기
//	num = original;
//	power = (int)num2;
//	while (power != 0) {
//		odd = num / power;
//		i = 0;
//		while (i < odd) { // i < odd *2 처럼 곱하기를 빼고 밑에처럼 \u2665를 두번 출력해도됨 
//			printf("\u2665\u2665");
//			i++;
//		}
//		printf("\n");
//		num = num % power;
//		power = power / 10;
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int holliday = 0;
//	do {
//		printf("\n%d번째 날 !\n", ++day);
//		printf("오늘도 뭘 할까요?\n");
//		printf("1. 코딩 공부한다.\n2. 친구를 만난다.\n3. 여행간다\n.");
//		printf("그외. 끝낸다.\n >> ");
//		scanf("%d", &command);
//		if (command < 1 || command > 3) break;
//		int randInt = rand() % 5 + 1;
//
//		switch (command) {
//		case 1:
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서. ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5: printf("학원에서 ");
//			}
//			printf("코딩 공부합시다.\n ");
//			study++;
//
//			switch (command) 
//			case 2:
//				switch (randInt) {
//				case 1:
//					printf("오늘은 친구 생일\n");
//				case 2:
//					printf("오늘은 친구랑 저녁 약속\n");
//				case 3:
//					printf("친구 결혼식\n");
//					break;
//				}
//			}
//			study--;
//
//		switch (command) 
//		case 3:
//			switch (randInt) {
//			case 1:
//				printf("우리 동네\n");
//			case 2:
//				printf("국내 유명한곳\n");
//			case 3:
//				printf("해외\n");
//				break;
//			}
//			study--;
//		}
//		while (1);
//		if (day <= 3) {
//			printf("그대로 입니다...\n");
//		}
//		else {
//			int level = study / 8;
//			switch (level) {
//			default:
//				printf("풀스택 개발자가 되었습니다.!\n");
//				break;
//
//			case 0:
//				printf("코딩 새싹이 되었습니다.!\n");
//				break;
//			case 1:
//				printf("프로그래머가 되었습니다.!\n");
//				break;
//			case 2:
//				printf("FrontEnd 개발자가 되었습니다.!\n");
//				break;
//			case 3:
//				printf("BackEnd 개발자가 되었습니다.!\n");
//				break;
//			}
//		}
//		return 0;
//	}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	int holliday = 0;
	int famous = 0;
	do {
		printf("\n%d번째 날 !\n", ++day);
		printf("오늘도 뭘 할까요?\n");
		printf("1. 코딩 공부한다.\n2. 친구를 만난다.\n3. 여행간다\n.");
		printf("그외. 끝낸다.\n >> ");
		scanf("%d", &command);
		if (command < 1 || command > 3) break;
		int randInt = rand() % 5 + 1;

		if (command == 1) {

			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("도서관에서. ");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("카페에서 ");
				break;
			case 5: printf("학원에서 ");
			}


			printf("코딩 공부합시다.\n ");
			study++;
		}

		else if (command == 2) {

			switch (randInt) {
			case 1:
				printf("오늘은 친구 생일\n");
				break;
			case 2:
				printf("오늘은 친구랑 저녁 약속\n");
				break;
			case 3:
				printf("친구 결혼식\n");
				break;
			}

			printf("인맥 관리\n");
			famous++;
		}

		else if (command == 3) {

			switch (randInt) {
			case 1:
				printf("동네 가까운 관광지\n");
				break;
			case 3:
				printf("국내 유명 관광지\n");
				break;
			case 2:
				printf("해외 유명 관광지\n");
				break;
			}
			printf("여행 간날\n");
			holliday++;
		}

	} while (1);
	if (day <= 4) {
		printf("그대로 입니다...\n");
	}
	else {
		int level = study / 8;
		switch (level) {
		default:
			printf("풀스택 개발자가 되었습니다.!\n");
			break;

		case 0:
			printf("코딩 새싹이 되었습니다.!\n");
			break;
		case 1:
			printf("프로그래머가 되었습니다.!\n");
			break;
		case 2:
			printf("FrontEnd 개발자가 되었습니다.!\n");
			break;
		case 3:
			printf("BackEnd 개발자가 되었습니다.!\n");
			break;
		}
	}

	while (1);
	if (day <= 4) {
		printf("그대로 입니다...\n");
	}
	else {
		int level = holliday / 8;
		switch (level) {
		default:
			printf("코딩 공부를 하셔야 해요!\n");
			break;

		case 0:
			printf("오늘을 즐기고 다시 공부해요.\n");
			break;
		case 1:
			printf("코딩 공부를 다시 해야해요.\n");
			break;
		case 2:
			printf("코딩을 잊어먹겠어요!\n");
			break;

		}
	}



}