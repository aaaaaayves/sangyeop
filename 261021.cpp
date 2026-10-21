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

#include <stdio.h>
#include <math.h>

int main()
{
	int num;          // 입력한 숫자 (계산하면서 값이 바뀜)
	int count = 0;    // 몇 자리 수인지 세는 변수
	double num2;      // 10의 (count-1)승, pow 결과라서 double
	int odd;          // 꺼낸 한 자리 숫자 (3 → 7 → 2 → 1)
	int original;     // [추가] 입력한 숫자 원본 보관용
	int power;        // [추가] num2를 정수로 바꾼 값 (1000 → 100 → 10 → 1)
	int i;            // [추가] 하트 개수 세는 변수

	printf("숫자를 여러개 입력: ");
	scanf("%d", &num);
	original = num;

	// 1. 몇 자리 수인지 구하기
	while (num != 0) {    // num이 0과 같지 않을 때 실행해라
		count++;
		num = num / 10;
	}
	printf("%d자리수\n", count);

	// 2. 10의 몇 승인지 구하기
	num2 = pow(10, count - 1);
	printf("10의 %d승 = %0.0f\n", count - 1, num2);

	// 3. 한 자리씩 세로로 출력하기
	num = original;
	power = (int)(num2 + 0.5);
	while (power != 0) {
		odd = num / power;
		printf("%d\n", odd);
		num = num % power;
		power = power / 10;
	}

	// 4. 하트 출력하기
	num = original;
	power = (int)(num2 + 0.5);
	while (power != 0) {
		odd = num / power;
		i = 0;
		while (i < odd * 2) {
			printf("\u2665");
			i++;
		}
		printf("\n");
		num = num % power;
		power = power / 10;
	}
}