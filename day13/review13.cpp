#include<stdio.h>

//course ����ü�� �����
// ���Ǹ�, ���� �̸�, ������ ��, �ð�
// �Լ� ���������� �Ѹ� �ø���, ���� ����

typedef struct Course {
	char name[20];
	char teachername[20];
	int students;
	int time;
}Course;
void raiseStudents(Course* course) {
	course->students += 1;
}

void info(Course* course) {
	printf("�̸�:%s �������̸�:%s �л� ��: %d �ð�:%d", course->name, course->teachername, course->students, course->time);
}


int main() {

	Course a = { "java","kim", 4, 1 };
	raiseStudents(&a);
	info(&a);



	return 0;
}