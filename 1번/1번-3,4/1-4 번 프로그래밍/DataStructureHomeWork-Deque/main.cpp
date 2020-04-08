#include "Deque.h"
#include <string.h>
#include <iostream>
#include <windows.h>

#define TRUE 1
#define FALSE 0

bool Function_Check_palindrome(char *c, DequeType q1);

int main(void)
{
	Deque dq;
	DequeType queue;
	dq.init_deque(&queue);

	char k[MAX_ARRAY_SIZE] = {};
	printf("문자열을 입력하세요: ");
	scanf("%s", k);
	if (Function_Check_palindrome(k, queue))
	{
		printf("회문입니다.");
	}
	else
		printf("회문이 아닙니다.");
	system("pause");
	return 0;
}
bool Function_Check_palindrome(char * c, DequeType q1)
{
	Deque dq;									//큐생성
	int plen = strlen(c);						//입력 문자 길이
	char a[MAX_ARRAY_SIZE] = {};				//재귀호출 반환용 string

	//큐에 데이터 넣기
	for (int i = 0; i < plen; i++) {			
		dq.add_rear(&q1, c[i]);
	}
	//회문 검사
	if (plen == 0 || plen == 1) {
		return TRUE;
	}
	else if (dq.delete_front(&q1) == dq.delete_rear(&q1))
	{
		for (int i = 0; i < q1.rear-q1.front; i++)
		{
			a[i] = dq.delete_front(&q1);
		}
		Function_Check_palindrome(a, q1);
	}
	else
		return FALSE;
}
