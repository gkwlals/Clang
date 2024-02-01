#include<stdio.h>
int main() {
	//int side;
	//printf("정사각형의 한 변의 길이 입력(n):");
	//scanf("%d", &side);
	//printf("% d의 길이 정사각형의 넓이는 %d이고 둘레는 %d이다.", side*side, side*4);

	double r;
	printf("원의 반지름 길이 입력:");
	scanf("%lf", &r);
	printf("%.2lf의 반지름 원의 넓이는 %.2lf이고 둘레는 %.2lf이다", r,r*r*3.14, r*2*3.14);






	return 0;
}