#include "Stack.h"

// 스택 생성 함수
Stack::Stack()
{

}
Stack::~Stack()
{

}

void Stack::init_stack(StackType *s)
{
	s->top = -1;
	s->capacity = 1;
	s->data = (element *)malloc(s->capacity * sizeof(element));
}
void Stack::s_delete(StackType *s)
{
	free(s);
}

// 공백 상태 검출 함수
int Stack::is_empty(StackType *s)
{
	return (s->top == -1);
}
// 포화 상태 검출 함수
int Stack::is_full(StackType *s)
{
	return (s->top == (MAX_STACK_SIZE - 1));
}
void Stack::push(StackType *s, element item)
{
	if (is_full(s)) {
		s->capacity *= 2;
		s->data =
			(element *)realloc(s->data, s->capacity * sizeof(element));
	}
	s->data[++(s->top)] = item;
}

// 삭제함수
element Stack::pop(StackType *s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}
element Stack::peek(StackType *s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->data[(s->top)];
}
