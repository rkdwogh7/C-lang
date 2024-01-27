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
	printf("커피 이름 입력:");
	scanf("%s", newName);

	int newPrice;
	printf("커피 가격 입력:");
	scanf("%d", &newPrice);

	strcpy(newNode->data.name, newName);
	newNode->data.price = newPrice;

	return newNode;
}

//appendNode
void appendNode(Node** head) {
	Node* newNode = createNode();

	if (*head == NULL) {				//아무것도 없을때 노드(1) 생성
		*head = newNode;
		return;
	}
	
	Node* searcher = *head;				//searcher가 생성한 노드를 가리킴
	while (searcher->next != NULL) {	//다음 노드가 있다면(2->3)
		searcher = searcher->next;		//생성한 노드를 searcher로 바꿔줌
	}

	searcher->next = newNode;			//생성한 노드(searcher)의 다음 노드 생성(2)
}

//printNode
void printNode(Node** head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {		//다음 노드가 있다면
		printf("커피 이름:%s, 커피 가격:%d\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;			//프린트하고 다음 노드를 searcher로 바꿔줌
	}
	printf("커피 이름:%s, 커피 가격:%d\n", searcher->data.name, searcher->data.price);
											//첫번째 노드 프린트(노드가 하나일때 실행)
}

//deleteNode

/*void deleteLastNode(Node** head) {
	Node* searcher = *head;
	//아무것도 없을때
	if (searcher == NULL) {
		printf("삭제할 데이터가 없습니다.\n");
		return;
	}
	//하나만 있을때
	if (searcher->next == NULL) {
		*head = NULL;
		printf("데이터 %d가 삭제되었습니다.\n", searcher->data);
		free(searcher);
		return;
	}
	//두개 이상 있을때
	while (searcher->next->next != NULL) {
		searcher = searcher->next;
	}

	Node* deleteTarget = NULL;
	deleteTarget = searcher->next->next;

	printf("데이터 %d가 삭제되었습니다.\n", deleteTarget->data);
	free(deleteLastNode);
}
*/

int main() {
	Node* head = NULL;			//head가 있음
	appendNode(&head);
	appendNode(&head);
	printNode(&head);
	return 0;
}
