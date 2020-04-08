#회문검사 스텍활용
1.Windows SDK 버전: 10.0.17763.0
2.플랫폼 도구 집합: Visual Studio 2017 (v141)
3. _MSC_VER: 1916
4.기타:교재에 사용된 소스코드를 클레스화 시켜서 사용
///////////////////////////////////의사코드////////////////////////////////

Function_Check_palindrome(word)// Input: string Output:BOOL

1. Create Stack "S" ← word

2. Create Sting "S1" ← word

3. IF word IS Empty OR Alone

4.	RETURN TRUE

5. ELSE IF S1[ 0 ]==Pop( S )

6.	Create String "word2" ← S1[ 1 ] ~S1[ Len(word)-1]

7. 	Function_Check_palindrome(word2)

8. ELSE RETURN FALSE
//////////////////////////////////////////////////////////////////////////////////
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
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
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\