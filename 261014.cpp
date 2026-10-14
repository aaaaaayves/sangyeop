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
#include <stdio.h>
#include <math.h>

int main()
{
	int num = 3721;
	int count = 0;
	double num2 = pow(num, 1);
	int odd = 0;
	int odd2 = 0;
	int odd3 = 0;
	int odd4 = 0;



		//count = num / 10;

		while (num != 0) { // num이 0과 같지않을때 실행해라 

			count++;

			num = num / 10;

			odd = num2 / 1000;
			odd2 = num2 / 100;
			odd3 = num2 / 10;
			odd4 = num2 / 1;

		}




	//printf("숫자를 여러개 입력: ");
	//scanf("%d", &num );


	printf("%d자리수\n", count);
	printf("%0.0f\n", num2);
	printf("%d\n", odd);
	printf("%d\n", odd2);
	printf("%d\n", odd3);
	printf("%d\n", odd4);
}
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