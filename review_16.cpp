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
	printf("data �Է�:");
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
		printf("������ �����Ͱ� �����ϴ�.\n");
		return;
	}

	if (searcher->next == NULL) {
		*head = NULL;
		printf("������ %d�� �����Ǿ����ϴ�.\n", searcher->data);
		free(searcher);
		return;
	}

	while (searcher->next->next != NULL) {
		searcher = searcher->next;
	}
	searcher->next = NULL;
	Node* deleteTarget = NULL;
	deleteTarget = searcher->next->next;
	
	printf("������ %d�� �����Ǿ����ϴ�.\n", deleteTarget->data);
	free(deleteLastNode);
}
int main() {

	Node* head = NULL;

	while (1) {
		int system;
		printf("1.������ �߰�\n2.������ Ȯ��\n3.����\n4.����\n");
		printf("��ȣ �Է�:");
		scanf("%d", &system);

		switch (system) {

		case 1:
			appendNode(&head);
			break;
		case 2:
			printNodes(&head);
			break;
		case 3:
			printf("����");
			return 0;
		case 4:
			deleteLastNode(&head);
			break;
		}
	}
	return 0;
}