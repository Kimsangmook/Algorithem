#pragma once
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 100
#define MAX_ARRAY_SIZE 100
typedef int element;
typedef struct { // ≈• ≈∏¿‘
	element  data[MAX_QUEUE_SIZE];
	int  front, rear;
} DequeType;

class Deque
{
public:
	Deque();
	~Deque();
	void error(const char *message);
	void init_deque(DequeType *q);
	int is_empty(DequeType *q);
	int is_full(DequeType *q);
	void deque_print(DequeType *q);
	void add_rear(DequeType *q, element item);
	element delete_front(DequeType *q);
	element get_front(DequeType *q);
	void add_front(DequeType *q, element val);
	element delete_rear(DequeType *q);
	element get_rear(DequeType *q);

private:
};

