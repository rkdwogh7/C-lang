#include<stdio.h>
#include<stdlib.h>

typedef struct QueueNode {
	int data;
	struct QueueNode* next;
}QueueNode;

typedef struct Queue {	// 큐의 중요포인트
	QueueNode* front;
	QueueNode* rear;
}Queue;

void initQueue(Queue* q) {
	q->front = NULL;
	q->rear = NULL;
}

QueueNode* createNode(){
	QueueNode* newNode;
	newNode = (QueueNode*)malloc(sizeof(QueueNode));

	int n;
	printf("정수 입력:");
	scanf("%d", &n);

	newNode->data = n;
	newNode->next = NULL;

	return newNode;
}

void enQueue(Queue* q) {
	QueueNode* newNode = createNode();

	if(q->front == NULL){
		q->front = newNode;
	}
	else {
		q->rear->next = newNode;
	}
	q->rear = newNode;
}

void printQueue(Queue* q) {

	if (q->front == NULL) {
		printf("큐가 비었음\n");
		return;
	}

	QueueNode* searcher = q->front;
	while (searcher->next != NULL) {
		printf("%d ->", searcher->data);
		searcher = searcher->next;
	}
	printf("%d", searcher->data);
	printf("\n");
}

void deQueue(Queue* q) {
	if (q->front == NULL) {
		printf("큐가 비었음\n");
		return;
	}

	QueueNode* deletetarget = q->front;
	printf("%d는 빠집니다.\n", deletetarget->data);

	q->front = deletetarget->next;

	if (q->front == NULL) {
		q->rear = NULL;
	}

	free (deletetarget);

	
	
}






int main() {
	//큐의 시작
	Queue q;
	initQueue(&q);

	enQueue(&q);
	enQueue(&q);
	enQueue(&q);
	printQueue(&q);
	deQueue(&q);
	printQueue(&q);

	return 0;
}