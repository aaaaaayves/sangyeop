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


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;       // 입력받은 값
//	int day = 0;       // 날짜
//	int study = 0;     // 공부 한 횟수
//	int holliday = 0;  // 여행 간 횟수
//	int famous = 0;    // 친구 만난 횟수
//
//	do {
//		printf("\n%d번째 날 !\n", ++day);
//		printf("오늘도 뭘 할까요?\n");
//		printf("1. 코딩 공부한다.\n2. 친구를 만난다.\n3. 여행간다.\n");
//		printf("그외. 끝낸다.\n >> ");
//		scanf("%d", &command);
//		if (command < 1 || command > 3) break;
//		int randInt = rand() % 5 + 1;
//
//		if (command == 1) {
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
//			case 5:
//				printf("학원에서 ");
//			}
//			printf("코딩 공부합시다.\n ");
//			study++;
//		}
//		else if (command == 2) {
//			switch (randInt) {
//			case 1:
//				printf("오늘은 친구 생일\n");
//				break;
//			case 2:
//				printf("오늘은 친구랑 저녁 약속\n");
//				break;
//			case 3:
//				printf("친구 결혼식\n");
//				break;
//			}
//			printf("인맥 관리\n");
//			famous++;
//		}
//		else if (command == 3) {
//			switch (randInt) {
//			case 1:
//				printf("동네 가까운 관광지\n");
//				break;
//			case 2:
//				printf("해외 유명 관광지\n");
//				break;
//			case 3:
//				printf("국내 유명 관광지\n");
//				break;
//			}
//			printf("여행 간날\n");
//			holliday++;
//		}
//
//	} while (1);
//
//	if (day <= 4) {
//		printf("그대로 입니다...\n");
//	}
//	else {
//		//공부엔딩
//		if (study > 0) {               // 공부를 1번이라도 했을 때만
//			int level = study / 8;
//			switch (level) {
//			default:
//				printf("풀스택 개발자가 되었습니다.!\n");
//				break;
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
//
//		//친구엔딩
//		if (famous > 0) {              // 친구를 1번이라도 만났을 때만
//			int level = famous / 5;
//			switch (level) {
//			default:
//				printf("인맥왕이 되었습니다.!\n");
//				break;
//			case 0:
//				printf("친구가 조금 생겼습니다.!\n");
//				break;
//			case 1:
//				printf("인기쟁이가 되었습니다.!\n");
//				break;
//			}
//		}
//
//		//여행엔딩
//		if (holliday > 0) {            // 여행을 1번이라도 갔을 때만
//			int level = holliday / 5;
//			switch (level) {
//			default:
//				printf("가이드가 되었습니다.!\n");
//				break;
//			case 0:
//				printf("여행을 조금 다녀왔습니다.!\n");
//				break;
//			}
//		}
//	}
//
//	return 0;
//}

//위에꺼에서 제일 많이 실행 된 것만 엔딩으로 출력하기 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;       // 입력받은 값
//	int day = 0;       // 날짜
//	int study = 0;     // 공부 한 횟수
//	int holliday = 0;  // 여행 간 횟수
//	int famous = 0;    // 친구 만난 횟수
//
//	do {
//		printf("\n%d번째 날 !\n", ++day);
//		printf("오늘도 뭘 할까요?\n");
//		printf("1. 코딩 공부한다.\n2. 친구를 만난다.\n3. 여행간다.\n");
//		printf("그외. 끝낸다.\n >> ");
//		scanf("%d", &command);
//		if (command < 1 || command > 3) break;
//		int randInt = rand() % 5 + 1;
//
//		if (command == 1) {
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
//			case 5:
//				printf("학원에서 ");
//			}
//			printf("코딩 공부합시다.\n ");
//			study++;
//		}
//		else if (command == 2) {
//			switch (randInt) {
//			case 1:
//				printf("동호회 참석\n");
//				break;
//			case 2:
//				printf("지인들과의 저녁 약속 참석\n");
//				break;
//			case 3:
//				printf("동료 결혼식 참석\n");
//				break;
//			}
//			printf("사회생활\n");
//			famous++;
//		}
//		else if (command == 3) {
//			switch (randInt) {
//			case 1:
//				printf("동네 가까운 관광지\n");
//				break;
//			case 2:
//				printf("해외 유명 관광지\n");
//				break;
//			case 3:
//				printf("국내 유명 관광지\n");
//				break;
//			}
//			printf("여행 간날\n");
//			holliday++;
//		}
//
//	} while (1);
//
//	if (day <= 4) {
//		printf("그대로 입니다...\n");
//	}
//	else {
//		//공부엔딩
//		if (study > famous && study > holliday) { //스터디가 가장많이 실행될 경우 스터디"만" 출력하기
//			int level = study / 8;
//			switch (level) {
//			default:
//				printf("풀스택 개발자가 되었습니다.!\n");
//				break;
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
//
//		//친구엔딩
//		else if (famous > study && famous > holliday) {             
//			int level = famous / 5;
//			switch (level) {
//			default:
//				printf("인맥왕이 되었습니다.!\n");
//				break;
//			case 0:
//				printf("친구가 조금 생겼습니다.!\n");
//				break;
//			case 1:
//				printf("인기쟁이가 되었습니다.!\n");
//				break;
//			}
//		}
//
//		//여행엔딩
//		else if (holliday > study && holliday > famous) {          
//			int level = holliday / 5;
//			switch (level) {
//			default:
//				printf("가이드가 되었습니다.!\n");
//				break;
//			case 0:
//				printf("여행을 조금 다녀왔습니다.!\n");
//				break;
//			}
//		}
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//
//	}
//	return 0;
//}

//#include <stdio.h>	
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//양 20마리 세는 프로그램
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//}

//양 50마리를 세는데 10,20,30,40마리를 셀때는 깜빡졸고 45마리를 셀때 멈추도록
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("깜빡 졸았다!\n");
//		}
//		else if (sheep == 45) {
//			printf("잠들었어요.\n");
//			break;
//			
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{ // 1부터 20까지 더하는 방법 
//	int number;
//	int sum_number = 0; 
//	for (number = 1; number <= 20; number++) //number는 1부터 20까지 1씩 변한다
//	{
//		sum_number += number; //이 코드는 sum_number = sum_number + number;와 같다
//		// 반복시마다 sum_number에 number를 더한다.
//		// 0+1+2+3+4....+20
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
////입력한 횟수만큼 반복하는 방법 
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요: ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//		//조건식이 False가 되면 끝남 
//	{
//		printf("삐약");
//	//조건식에 number < 입력한 수를 넣어 횟수만큼 반복 
//    //for(number = 1; number <= count; number++) 로도 가능 
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (number = 10; number <= 99; number++)
//	{
//		printf("10~99까지의 두 자리수 %d\n", number);
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int num;
//	int multiply = 1;
//	for (num = 3; num <= 8; num++) {
//		multiply *= num;
//	}
//	printf("3부터 8까지 곱한 값: %d\n", multiply);
//}

#include <stdio.h>

int main()
{
	int num;
	for (num = 1; num <= 50; num++) {
		int num10 = num / 10;
		int num1 =  num % 10; //
		if (num1 % 3 == 3 || num10 != 0) { //0이 아닌 논리연산자 사용해야함 
		
			printf("%d 박수\n", num);
		}
	}
	
}