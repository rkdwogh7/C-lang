#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* createNode(){
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	int n;
	printf("data 입력:");
	scanf("%d", &n);

	newNode->data = n;		
	newNode->next = NULL;	

	return newNode;
}

void appendNode(Node** head) {
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

void printNodes(Node** head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {
		printf("%d=>", searcher->data);
		searcher = searcher->next;
	}
	printf("%d\n", searcher->data);
}

void deleteLastNode(Node** head) {
	Node* searcher = *head;

	if (searcher == NULL) {
		printf("삭제할 데이터가 없습니다.\n");
		return;
	}

	if (searcher->next == NULL) {
		*head = NULL;
		printf("데이터 %d가 삭제되었습니다.\n", searcher->data);
		free(searcher);
		return;
	}

	while (searcher->next->next != NULL) {
		searcher = searcher->next;
	}
	searcher->next = NULL;
	Node* deleteTarget = NULL;
	deleteTarget = searcher->next->next;
	
	printf("데이터 %d가 삭제되었습니다.\n", deleteTarget->data);
	free(deleteLastNode);
}
int main() {

	Node* head = NULL;

	while (1) {
		int system;
		printf("1.데이터 추가\n2.데이터 확인\n3.종료\n4.삭제\n");
		printf("번호 입력:");
		scanf("%d", &system);

		switch (system) {

		case 1:
			appendNode(&head);
			break;
		case 2:
			printNodes(&head);
			break;
		case 3:
			printf("종료");
			return 0;
		case 4:
			deleteLastNode(&head);
			break;
		}
	}
	return 0;
}