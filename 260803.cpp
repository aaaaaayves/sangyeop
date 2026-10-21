//# include <stdio.h>
//
//void main()
//{
//	printf(" %d ", 100 - 99);
//}

//#include <stdio.h>
//
//void main()
//{
//	printf("\n");
//	printf("%d", 100 + 100);
//	printf("\n");
//}

#include <stdio.h>

void main()
{
	printf("%d", 100, 200);
	printf("\n");
	printf("%d %d", 100);
	printf("\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	do {
		printf("\n%d번째 날 !\n", ++day);
		printf("오늘도 뭘 할까요?\n");
		printf("1. 코딩 공부한다.\n2. 친구를 만난다.\n3. 여행간다\n.");
		printf("그외. 끝낸다.\n >> ");
		scanf("%d", &command);
		if (command > 4) break;
		int randInt = rand() % 5 + 1;

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
	} while (1);
	if (day <= 3) {
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
	return 0;
}
