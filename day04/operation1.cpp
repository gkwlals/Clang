//operator [연산자]

//산술 연산자
//대입 연산자
//비교 연산자
//논리 연산자
//-----------

//#include<stdio.h>
//int main() {
//	//증감 연산자
//	// -, ++, --
//	int a = 1;
//	a++;
//	a++;
//	printf("a: %d\n", a);
//	a--;
//	printf("a: %d\n", a);
//
//	int b = 0;
//	// ++b: 전위 연산자
//	// b++: 후위 연산자
//	printf("b: %d\n", ++b); //1
//	printf("b: %d\n", b++); //1
//	printf("b: %d\n", ++b); //3

	//삼항 연산자
	//유저가 알파벳을 입력하고 
	//대문자이면 숫자 1을 출력 아니면 0 출력하는 프로그램
//#include<stdio.h>
//int main(){
//	char a;
//	printf("알파벳 ㄱ:");
//	scanf("%c", &a);
//	getchar();
//	int isCapital = 65 <= a && a <= 90 ? 1 : 0;
//	printf("결과: %d", isCapital);

//유저가 알파벳을 입력하고 
//알파벳이면 숫자 1을 출력 아니면 0 출력하는 프로그램
//#include<stdio.h>
//int main(){
//	char a;
//	printf("알파벳:");
//	scanf("%c", &a);
//	getchar();
//
//	int isCapital = (65 <= a && a <= 90);
//	int isLower = (97 <= a && a <= 122);
//	int isalpha = isCapital || isLower;
//	int result = isalpha ? 1 : 0;
//	printf("결과: %d", result);

//콤마 연산자
////int a, b; //,
//sizeof 연산자
//int - 4byte, float - 4byte, double - 8byte, char - 1byte
// 인간: 연산 + 기억 동시가능
// 컴퓨터: 연산(cpu) | 기억(ram) 따로 
// 컴퓨터 RAM- 16GB

//int 4byte

// 1byte - 8bit
// 1024byte = 1kb
// 1024kb= 1mb
// 1024mb= 1gb
// int 4byte = 32bit = 2^32(0~+-2^31)


//type casting(형 변환)
int n = 10;
double k = (double)n;
#include<stdio.h>
int main(){
	//int m;
	//printf("사이즈 m: %d\n", sizeof(m));



	return 0;
}

