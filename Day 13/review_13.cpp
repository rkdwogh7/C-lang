#include <stdio.h>
#include <string.h>

typedef struct Book {
	char bookname[50];
	char writer[50];
	int price;
	int ISBN;
}Book;

void RaiseBookPrice (Book* something){
	int amount;
	printf("인상 가격 입력:");
	scanf("%d", &amount);
	something->price += amount;
}

void ChangeWriter(Book*something) {
	char name[50];
	printf("변경 작가 입력:");
	scanf("%s", &name);
	strcpy(something->writer, name); //??
}

int main() {

	//1. Book 구조체를 만들기
	//책 제목, 작가, 가격 ISBN
	Book a = { "mega", "study", 15000, 1234 };
	//2. 책의 가격을 올려주는 RaiseBookPrice 함수 만들기
	RaiseBookPrice(&a);
	//3. 책의 작가를 바꿔주는 ChangeWriter 함수 만들기
	ChangeWriter(&a);

	printf("%s, %s, %d, %d", a.bookname, a.writer, a.price, a.ISBN);

	return 0;
}