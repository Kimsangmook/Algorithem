#회문검사 덱 활용
1.Windows SDK 버전: 10.0.17763.0
2.플랫폼 도구 집합: Visual Studio 2017 (v141)
3. _MSC_VER: 1916
4.기타:교재에 사용된 소스코드를 클레스화 시켜서 사용

/////////////////////////의사 코드/////////////////////////////
Function_Check_palindrome(word)// Input: string Output:BOOL

1.Create Deque "DQ" ← word

2.IF word IS Empty OR Alone

3. 	RETURN TRUE

4.ELSE IF Delet_Front(DQ)==Delet_Rear(DQ)

5.	 Create String "word2" ← DQ

6.	 Function_Check_palindrome(word2)

7.ELSE RETURN FALSE
////////////////////////////////////////////////////////////////////////
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
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
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

