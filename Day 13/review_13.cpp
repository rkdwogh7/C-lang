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
	printf("�λ� ���� �Է�:");
	scanf("%d", &amount);
	something->price += amount;
}

void ChangeWriter(Book*something) {
	char name[50];
	printf("���� �۰� �Է�:");
	scanf("%s", &name);
	strcpy(something->writer, name); //??
}

int main() {

	//1. Book ����ü�� �����
	//å ����, �۰�, ���� ISBN
	Book a = { "mega", "study", 15000, 1234 };
	//2. å�� ������ �÷��ִ� RaiseBookPrice �Լ� �����
	RaiseBookPrice(&a);
	//3. å�� �۰��� �ٲ��ִ� ChangeWriter �Լ� �����
	ChangeWriter(&a);

	printf("%s, %s, %d, %d", a.bookname, a.writer, a.price, a.ISBN);

	return 0;
}