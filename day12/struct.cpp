#include<stdio.h>
//struct [������ ������ Ÿ��(����ü)]
//typedef int Length;
//
typedef struct Coffee {
	char name[30];
	double calories;
	int price;
}Coffee;
//
//typedef struct Sushi {
//	char sushiname[30];
//	char fishname[30];
//	double calories;
//}Sushi;
//
//
//int main() {
//	Coffee americano = { "americano", 5, 2500 };
//	printf("�ش� Ŀ���� �̸��� %s Į�θ��� %lf ������ %d�Դϴ�.\n", americano.name, americano.calories, americano.price);
//
//	Sushi salmonsushi = { "salmonsushi", "salmon", 6};
//	printf("�ش� ������ �̸��� %s ���� �̸��� %s Į�θ��� %lf\n", salmonsushi.sushiname, salmonsushi.fishname, salmonsushi.calories);



//coffee menu[3]
//���⿡ ������ �Է¿� ���� Ŀ�� �޴��� �ϼ��ϴ� ���α׷� �����
int main(){
	//Coffee menu[3] = {
	//	{"�Ƹ޸�ī��", 15, 2500},
	//	{"���̽���", 215, 3000},
	//	{"�ٴҶ��", 355, 3500}
	//};
	////for���� ����� �޴� ��� �����ֱ�
	//for (int i = 0; i < 3; i++) {
	//	printf("�̸�:%s Į�θ�:%2.lf ���� %d\n", menu[i].name, menu[i].calories, menu[i].price);
	//}

	//�������� �޴� 3�� �Է� �ޱ�
	Coffee menu[3];

	for (int i = 0; i < 3; i++) {
		printf("%d��° �޴� �Է�\n",i);
		printf("%d��° �̸� �Է�\n",i);
		scanf("%s", &menu[i].name);
		printf("%d��° Į�θ� �Է�\n",i);
		scanf("%lf", &menu[i].calories);
		printf("%d��° ���� �Է�\n",i);
		scanf("%d", &menu[i].price);
		
	}
	return 0;
}