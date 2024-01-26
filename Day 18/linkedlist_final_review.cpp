#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Coffee {
	char name[50];
	int price;
}Coffee;

typedef struct Node {
	Coffee data;
	struct Node* next;
}Node;

//createNode
Node* createNode() {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));

	char newName[50];
	printf("Ŀ�� �̸� �Է�:");
	scanf("%s", newName);

	int newPrice;
	printf("Ŀ�� ���� �Է�:");
	scanf("%d", &newPrice);

	strcpy(newNode->data.name, newName);
	newNode->data.price = newPrice;

	return newNode;
}

//appendNode
void appendNode(Node** head) {
	Node* newNode = createNode();

	if (*head == NULL) {				//�ƹ��͵� ������ ���(1) ����
		*head = newNode;
		return;
	}
	
	Node* searcher = *head;				//searcher�� ������ ��带 ����Ŵ
	while (searcher->next != NULL) {	//���� ��尡 �ִٸ�(2->3)
		searcher = searcher->next;		//������ ��带 searcher�� �ٲ���
	}

	searcher->next = newNode;			//������ ���(searcher)�� ���� ��� ����(2)
}

//printNode
void printNode(Node** head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {		//���� ��尡 �ִٸ�
		printf("Ŀ�� �̸�:%s, Ŀ�� ����:%d\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;			//����Ʈ�ϰ� ���� ��带 searcher�� �ٲ���
	}
	printf("Ŀ�� �̸�:%s, Ŀ�� ����:%d\n", searcher->data.name, searcher->data.price);
											//ù��° ��� ����Ʈ(��尡 �ϳ��϶� ����)
}

//deleteNode

/*void deleteLastNode(Node** head) {
	Node* searcher = *head;
	//�ƹ��͵� ������
	if (searcher == NULL) {
		printf("������ �����Ͱ� �����ϴ�.\n");
		return;
	}
	//�ϳ��� ������
	if (searcher->next == NULL) {
		*head = NULL;
		printf("������ %d�� �����Ǿ����ϴ�.\n", searcher->data);
		free(searcher);
		return;
	}
	//�ΰ� �̻� ������
	while (searcher->next->next != NULL) {
		searcher = searcher->next;
	}
	searcher->next = NULL;
	Node* deleteTarget = NULL;
	deleteTarget = searcher->next->next;

	printf("������ %d�� �����Ǿ����ϴ�.\n", deleteTarget->data);
	free(deleteLastNode);
}
*/

int main() {
	Node* head = NULL;			//head�� ����
	appendNode(&head);
	appendNode(&head);
	printNode(&head);
	return 0;
}