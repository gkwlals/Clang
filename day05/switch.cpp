#include<stdio.h>
int main() {
	//switch
	//int num;
	//printf("���� �Է�:");
	//scanf("%d", &num);

	//switch(num) {
	//case 1:
	//	printf("�Ƹ޸�ī�� �ֹ�\n");
	//	break;
	//case 2:
	//	printf("�� �ֹ�\n");
	//	break;
	//case 3:
	//	printf("�ٴҶ� �ֹ�\n");
	//	break;
	//default:
	//	printf("�ش� ���� �����ϴ�.\n");
	//	break;
	//}


	// �������� 1~12���� �Է��ϰ�
	// 1~3: ��, 4~6: ���� 7~9:���� 10~12:�ܿ��̶�� ���α׷� �����
	int month;
	printf("�� �Է�:");
	scanf("%d", &month);
	switch (month) {
	case 1:
			printf("��\n");
			break;
	case 2:
		    printf("��\n");
		    break;
	case 3:
		printf("��\n");
		break;
	default:
		printf("���� �Է� ����:"\n);
		break;
	}


	return 0;
}