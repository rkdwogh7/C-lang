#include<stdio.h>
#include<stdlib.h>


//배열 기반으로 스택 구현
typedef struct Stack {
	int top;
	int data[100];
}Stack;

void initStack(Stack* stack) {
	stack->top = -1; //NULL
}

int isEmpty(Stack* stack) {
	return stack->top == -1;
}

void pop(Stack* stack) {
	//0. 맨 바닥일경우 안됨
	//1. top을 하나 아래로
	if (isEmpty(stack)) {
		printf("뺄거 없음\n");
		return;
	}
	stack->top--;
	return;
}


int isFull(Stack* stack) {
	return stack->top == 99; // 1 or 0
}

void push(Stack* stack) {
	//stack overflow 100
	//1. if top == 100 -> return
	if (isFull(stack)) {
		printf("꽉참\n");
		return;
	}

	//1. 정수 입력받기
	int num;
	printf("정수 입력:");
	scanf("%d", &num);
	//2. top ++하기
	stack->top++;	// 0 
	//3. stack의 top번째 정수 입력받은거 넣기
	stack->data[stack->top] = num;
}


void printStack(Stack* stack) {
	//top이 없다면 return;
	if (isEmpty(stack)) {
		printf("없음\n");
		return;
	}

	// top에서부터 아래로
	for (int i = stack->top; i >= 0; i--) {
		if (i == stack->top) {
			printf("%d ", stack->data[i]);
		}
		else {
			printf(" <- %d", stack->data[i]);
		}
	}
	printf("\n");
}


int main() {
	Stack st;

	initStack(&st);

	push(&st);
	push(&st);
	push(&st);
	printStack(&st);
	pop(&st);
	printStack(&st);

	return 0;
}