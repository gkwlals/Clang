#include<stdio.h>
//operation[������].cpp

// ��ū[token]
// ��� ������: +,-,*,/,%
// ���� ������: =, +=, -=, *=, /=
// �� ������: >,<,<=,>=, ==(����), !=(�ٸ���)
// 1(��), 0(����)
// ���� ������: &&(and), ||(or), !(not)
// &&: ��� ���̿��߸� ����
// ||: �ϳ��� ���̸� ���� 
// !: not

int main() {
	printf("%d", !(5 < 3 || 1 < 0 || 100 < 0));
	return 0;
}