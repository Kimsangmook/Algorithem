#include "Stack.h"
#include <string.h>
#include <iostream>
#include <windows.h>

#define TRUE 1
#define FALSE 0

bool Function_Check_palindrome(char *c, StackType s1);

int main(void)
{
	Stack st1;
	StackType s1;
	st1.init_stack(&s1);

	char k[MAX_ARRAY_SIZE] = {};
	printf("문자열을 입력하세요: ");
	scanf("%s", k);
	if (Function_Check_palindrome(k,s1))
	{
		printf("회문입니다.");
	}
	else
		printf("회문이 아닙니다.");

	system("pause");
	return 0;
}

bool Function_Check_palindrome(char * c, StackType s1)
{
	Stack st1;										//덱생성
	int plen = strlen(c);							//입력 문자 길이
	int i = 0;
	char a[MAX_ARRAY_SIZE] = {};					//저장용1
	char b[MAX_ARRAY_SIZE] = {};					//재귀호출용
	strcpy(a, c);									//저장
	//스텍에 데이터 넣기
	for (int i = 0; i < plen; i++) {
		st1.push(&s1, c[i]);
	}
	//회문검사
	if (plen == 0 || plen == 1) {
		return TRUE;
	}
	else if (a[i] == st1.pop(&s1))
	{
		for (int i = 0; i < plen - 2; i++) {
			b[i] = a[i + 1];
		}
		Function_Check_palindrome(b, s1);
	}
	else
	return FALSE;
}
