#include<stdio.h>
#include<stdlib.h>

typedef struct QueueNode {
	int data;
	struct QueueNode* next;
}QueueNode;

typedef struct Queue {	// ť�� �߿�����Ʈ
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
	printf("���� �Է�:");
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
		printf("ť�� �����\n");
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
		printf("ť�� �����\n");
		return;
	}

	QueueNode* deletetarget = q->front;
	printf("%d�� �����ϴ�.\n", deletetarget->data);

	q->front = deletetarget->next;

	if (q->front == NULL) {
		q->rear = NULL;
	}

	free (deletetarget);

	
	
}






int main() {
	//ť�� ����
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