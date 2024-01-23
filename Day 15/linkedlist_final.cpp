#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* createNode() {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	int n;
	printf("노드 값 입력:");
	scanf("%d", &n);
	newNode->data = n;
	newNode->next = NULL;
	return newNode;
}
void appendNode(Node **head) {
	Node* newNode = createNode();
	if (*head == NULL) {
		*head = newNode;
		return;
	}

	Node* searcher = *head;
	while (searcher->next != NULL) {
		searcher = searcher->next;
	}
	searcher->next = newNode;
}

void printNodes(Node* head) {
	while (head->next != NULL) {
		printf("%d=>", head->data);
		head = head->next;
	}
	printf("%d", head->data);
}
int main() {

	Node* head = NULL;
	
	appendNode(&head);
	appendNode(&head);
	appendNode(&head);

	printNodes(head);
	return 0;
}