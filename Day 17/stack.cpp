#include<stdio.h>
#include<stdlib.h>


//�迭 ������� ���� ����
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
	//0. �� �ٴ��ϰ�� �ȵ�
	//1. top�� �ϳ� �Ʒ���
	if (isEmpty(stack)) {
		printf("���� ����\n");
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
		printf("����\n");
		return;
	}

	//1. ���� �Է¹ޱ�
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);
	//2. top ++�ϱ�
	stack->top++;	// 0 
	//3. stack�� top��° ���� �Է¹����� �ֱ�
	stack->data[stack->top] = num;
}


void printStack(Stack* stack) {
	//top�� ���ٸ� return;
	if (isEmpty(stack)) {
		printf("����\n");
		return;
	}

	// top�������� �Ʒ���
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