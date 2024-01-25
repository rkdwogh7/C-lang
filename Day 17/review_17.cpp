#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Coffee {
	char name[50];
	int price;
}Coffee;

typedef struct Node {
	struct Node* prev;
	Coffee data;
	struct Node* next;
};

Node* createNode() {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));

	char newName[50];
	printf("Ŀ�� �̸� �Է�:");
	scanf("%s", newName);

	int newPrice;
	printf("Ŀ�� ���� �Է�:");
	scanf("%d", &newPrice);

	newNode->prev = NULL;
	strcpy(newNode->data.name, newName);
	newNode->data.price = newPrice;
	newNode->next = NULL;

	return newNode;	//
}

void appendNode(Node** head) {
	Node* newNode;
	newNode = createNode();

	if (*head == NULL) {
		*head = newNode;
		return;
	}

	Node* searcher = *head;

	while (searcher->next != NULL) {
		searcher = searcher->next;
	}
	searcher->next = newNode;
	newNode->prev = searcher;

}

void printNodes(Node** head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {
		printf("[Ŀ�� �̸�: %s , Ŀ�� ����: %d]\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;
	}
	printf("[Ŀ�� �̸�: %s , Ŀ�� ����: %d]\n", searcher->data.name, searcher->data.price);
}

void deleteLastNode(Node** head) {
	Node* searcher = *head;

	while (searcher->next->next != NULL) {
		searcher = searcher->next;
	}
	Node* target = searcher->next;
	printf("Ŀ��:%s, ����:%d �����մϴ�.", searcher->next->data.name, searcher->next->data.price);
	searcher->next = NULL;
	free(target);

}

//�߰� ����
void deleteNode(Node** head) {
	Node*temp = 
}

int main() {

	return 0;
}