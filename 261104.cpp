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

//1이상 50이하의수 369 박수 일 또는 십의 자리에 3,6,9
//#include <stdio.h>
//
//int main()
//{
//	int num;
//	int num1;
//	int num10;
//
//	for (num = 1; num <= 50; num++) {
//		int num10 = num / 10; //십의자리 구하기
//		int num1 = num % 10;  //일의자리 구하기
//
//		if (num1 == 3 || num1 == 6 || num1 == 9 ||
//			num10 == 3 || num10 == 6 || num10 == 9) { //0이 아닌 논리연산자 사용해야함 
//
//			printf("%d 박수\n", num);
//		}
//	}
//
//}


//====================================================homework====================================================

 //194p 6-3
//#include <stdio.h>
//void main()
//{
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("안녕하세요 \n");
//		printf("##또 안녕하세요?## \n");
//	}
//
//	printf("\n\n");
//
//	for (i = 0; i < 3; i++)
//		printf("안녕하세요? \n");
//	printf("##또 안녕하세요?## \n");
//}

// 205p 6-13
//#include <stdio.h>
//
//void main()
//{
//	int i, k;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 2; k++)
//		{
//			printf("중첩 for문입니다. (i값: %d, k값: %d\n", i, k);
//		}
//	}
//}

// 208p 6-14
//#include <stdio.h>
//
//void main()
//{
//	int i, k;
//
//	for (i=2; i<= 9; i++)
//	{
//		printf(" ## %d단 ##\n", i);
//		for (k = 1; k <= 9; k++)
//		{
//			printf(" %d X %d = %d \n", i, k, i * k);
//		}
//		printf("\n");
//	}
//}

// 210p 6-15

//#include <stdio.h>
//
//void main()
//{
//	int i, k;
//	
//	for (i = 1; i <= 9; i++)
//	{
//		for(k=2; k<=9; k++)
//		{
//			printf("%2dX%2d=%2d", k,i,k*i);
//		}
//		printf("\n");
//	}
//}

// ====== 261102 =======
// 
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("100이하의 제곱수를 출력합니다.\n");
//
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("100이하 7의 배수를 출력\n");
//
//	for (number = 7; number <= 100; number += 7)
//	{//증감조건이 ++ --가 아니어도 가능
//		printf("%d\n", number);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	char input;
//	for ( ; ; ) //조건문을 적지않고 클론을 2개 넣으면 이 경우 무한 반복
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case 's': 
//			printf("START GAME\n");
//			break;
//		case 'e': //e입력시 프로그램 종료 
//			printf("EXIT GAME\n");
//			return 0;
//		}//main안에서 return시 프로그램이 종료
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	for (; ; ) //조건문을 적지않으면 무한반복
//	{
//		printf("숫자 입력>>");
//		scanf("%d", &input);
//		if (input == 404) printf("Not Found");
//		else if (input <= 30 && input >= 1) {
//			printf("Good");
//		}
//		else break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1;
//	exitFor; number *= exitFor, exitFor--)
//	{
//		// 초기화와 증감식에 여러줄의 코드가 들어갈 수 있다.
//		// 조건식에 변수 하나가 들어가면 0이될 때 반복이멈춘다.
//		// {}안에 코드가 없어도 조건문과 증감식은 실행된다.
//		// 
//		// exitFor; 10 * 9, 곱하고 9인 exitFor를 -- 1씩 빼라  
//        // 조건식에 변수하나가 들어갔기에? exit가 0이 될때까지 반복문 실행 
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number, exitFor;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1;
//		exitFor; number *= exitFor, exitFor--)
//	{//변수 선언을 for문 내부에서 하면 for문 내부에서만 변수가 존재하게 됨 
//     //때문에 for문밖에서는 사용불가 (if문이나 while문도 동일) 
//
//	//	printf("%d\n", number); 여기에 printf하면 10 * 9 인 90부터 하나씩 차례대로 출력 됨
//	}
//	printf("%d\n", number); //for문 밖에서 printf할시 1부터 10까지 곱한 결과값만 출력
//	
//		
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		//for()옆에 ; x 
//		// while(), if()도 마찬가지 
//		// 단 do-while문은 ;써야함 
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	for (num = 0; num <= 200; num += 11)
//	{
//		printf("%d\n", num);
//	}
//}

//한변의길이가 sqLine인 정사각형이 있다. 
//정사각형의 둘레의 합이 21이하인 sqLine의 값을 모두 출력하라 
// 정사각형의 둘레 공식은 = sqLine *4이다 
//단 sqLine은 소수 첫 번째 자리의숫자이며, 0.1 부터 시작해 반복시마다 0.1씩 증가
//#include <stdio.h>
//int main()
//{
//	float sqLine;
//	int total;
//	for (sqLine = 0.1; (sqLine*4)<=21.0; sqLine+=0.1 )
//	{
//		printf("%.1f\n", sqLine);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1; //학번 초기화
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}


//위의 두 코드를 for문을 통해 출력한거 
//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번\n", myClass, student);
//	}//student는 for문 ()안에 있음 
//
//	myClass++;//초기화는 for문()안에 있음 
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번\n", myClass, student);
//	}
//	return 0;
//}

//위의 코드들을 내부 for문과 외부for문을 사용해서 더 간략하게 출력하기 
//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++) {
//		for (student = 1; student <= 30; student++) {
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}

//위의 코드들 구체화 
//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//
//
//}

//구구단 3단제외
//#include<stdio.h>
//int main()
//{
//	int num1;
//	int num2;
//
//	for (num1 = 2; num1 <= 9; num1++)
//	{
//		if (num1 == 3) continue; //3단 건너뛰기 
//		
//		printf(">>> %d단 <<<\n", num1);
//		for (num2 = 1; num2 <= 9; num2++)
//		{
//			printf("%d * %d = %d\n", num1, num2, num1 * num2);
//		}
//		
//	}
//	
//}

//#include<stdio.h>
//int main()
//{
//	int dice;
//	int dice2;
//
//	for (dice = 1; dice <= 4; dice++) {
//		for (dice2 = 1; dice2 <= 6; dice2++) {
//			printf("4면 = %d, 6면 = %d\n", dice, dice2);
//		}
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer ++ ) {
//		printf("%d번째 내부 반복문 진입 \n", outer);
//		
//		//내부 for 문 앞에  코드는 그 전에 실행 
// 
//		for (inter = 0; inter < 5; inter++) {
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		//내부 for문 앞에 넣은 코드는 그 후에 실행
//		printf("%d번째 내부 반복문 탈출\n\n", outer); //반복문바깥에서 출력한거
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf("*");
//		}
//		//안쪽 반복문 반복시마다 *찍힘
//		//내부 for 문 뒤에 넣은 코드는 내부for문 반복 끝나고 실행
//		printf("\n"); //바깥 반복문 반복시마다 줄바꿈 여기선 outer를 뜻함 
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < outer + 1; inter++) {
//			//내부 반복문의 조건문에서 외부반복문의 outer 사용
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//=================homework================


//212p 6-16
//#include <stdio.h>
//
//void main()
//{
//
//	int i, k;
//
//	for (i = 1, k = 1; i <= 9; i++, k++)
//		printf("%d X %d = %d \n", i, k, i * k);
//}
//

//214p 6-17
//#include <stdio.h>
//
//void main()
//{
//	int i;
//	i = 0;
//	for (; ; )
//	{
//		printf("%d \n", i);
//		i++;
//	}
//}

//218p 예제모음15 
//#include <stdio.h>
//
//void main()
//{
//	int i;
//
//	for (i = 0; i < 128; i++) //아스키코드 0~127까지 
//	{
//		if (i % 16 == 0) //16행마다 제목 줄을 출력 
//		{
//			printf("-------------------\n");
//			printf("10진수 16진수 문자 \n");
//			printf("-------------------\n");
//		}
//		printf("%5d %5x %5c\n", i, i, i); //10진수, 16진수, 문자로 출력 
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < outer+1; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int outer;   // 몇 번째 줄인지 (0 ~ 4)
//	int inter;   // 그 줄에 별을 몇 개 찍었는지
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5 - outer; inter++)
//		{
//			printf("*"); //
//		}
//		printf("\n");
//	}
//}


