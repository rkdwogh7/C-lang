#include<stdio.h>
#include<string.h>

//struct
struct Coffee {
	char name[50];
	int price;
	int shots;
};

struct Student {
	char name[50];
	char major[50];
	int id;
	struct Coffee a;
};
int main() {

	/*int price;
	char name[50];
	double height;*/

	struct Coffee a;

	a.price = 2500;
	strcpy(a.name, "americano");
	a.shots = 2;

	printf("%d\n", a.price);

	struct Student b;

	strcpy(b.name, "강재호");
	strcpy(b.major, "전자전기");
	b.id = 2021111865;

	printf("%s\n", b.major);
	b.a = a;
	//이름 전공 커피
	printf("%s %s %s ", b.name, b.major, b.a.name);



}