#include<stdio.h>
int main() {
	//2+3=5[인간:연산(뇌)+기억(뇌)]
	//2+3=5[컴퓨터:연산 (cpu) + 기억(ram)]
	//int a = 1;
	///*printf("%d", &a);*/ 
	////scanf("%d", &a);

	//// &(주소 연산자): 변수의 주솟값을 알려줌
	//// *(포인터 연산자): 주솟값을 줘봐, 거기에 담긴 값을 읽을게
	//int* pa;
	//pa = &a;
	//printf("%d\n", *pa); //거기에 있는 값을 읽는 거니깐 1이 나오는 것
	//*pa = 7;//7을 넣어버리는 것 
	//printf("%d\n", a); // 7 나옴


	int m = 20;
	int* pm;
	pm = &m;
	printf("m의 값은 %d\n", m);
	printf("pm이 가리키는 주소값:%d\n", pm);
	printf("pmdl 가리키는 포인터값:%d\n", *pm);


	return 0;
}