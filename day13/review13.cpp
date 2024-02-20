#include<stdio.h>

//course 구조체를 만들고
// 강의명, 강사 이름, 수강생 수, 시간
// 함수 수강생수를 한명 올리기, 수강 정보

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
	printf("이름:%s 선생님이름:%s 학생 수: %d 시간:%d", course->name, course->teachername, course->students, course->time);
}


int main() {

	Course a = { "java","kim", 4, 1 };
	raiseStudents(&a);
	info(&a);



	return 0;
}