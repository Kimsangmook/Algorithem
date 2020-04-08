#pragma once
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
#define MAX_ARRAY_SIZE 100
typedef int element;
typedef struct {
	element *data;		// data은 포인터로 정의된다. 
	int capacity;		// 현재 크기
	int top;
} StackType;

class Stack
{
public:
	Stack();
	~Stack();
	void init_stack(StackType *s);
	void s_delete(StackType *s);
	int is_empty(StackType *s);
	int is_full(StackType *s);
	void push(StackType *s, element item);
	element pop(StackType *s);
	element peek(StackType *s);
private:

};


