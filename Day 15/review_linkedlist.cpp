#include <stdio.h>
#include <stdlib.h>

typedef struct Node {	
	int data;
	struct Node* next;
} Node;

Node* createNode() {	//노드를 만들어주는 함수
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	int n;
	printf("노드 값 입력:");
	scanf("%d", &n);
	newNode->data = n;
	newNode->next = NULL;
	return newNode;
}

void appendNode(Node** head) {
	Node* target;
	target = createNode();
	if (*head == NULL) {
		*head = target;
		return;
	}
	else {
		Node* searcher = *head;
		while (searcher->next != NULL) {
			searcher = searcher->next;
		}
		searcher->next = target;
	}
}

void printNode(Node** head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {
		printf("%d=>", searcher->data);
		searcher = searcher->next;
	}
	printf("%d", searcher->data);
}

int main() {
	Node* head = NULL;
	appendNode(&head);
	appendNode(&head);
	appendNode(&head);

	printNode(&head);


	return 0;
}