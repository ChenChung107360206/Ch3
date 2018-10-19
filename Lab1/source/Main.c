#include<stdio.h>
#include<stdlib.h>
int ODD(int U);
int EVEN(int U);
int TotalSum(int U);

int main(void) {

	int n, sum=0;
	char AddChoice;

	printf("1+2+...+n=?請輸入n=");
	scanf_s("%d", &n);
	getchar();
	//fflush(stdin);
	printf("請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇:");
	scanf_s("%c", &AddChoice);

	switch (AddChoice) {
	case 'O':
		sum = ODD(n);
		break;
	case 'E':
		sum = EVEN(n);
		break;
	case 'I':
		sum = TotalSum(n);
		break;
	default:
		printf("錯誤選擇");
		return -1;
	}

	printf("總合為%d\n",sum);
	system("pause");
	return 0;
}

int ODD(int U) {

	int i = 1, total = 0;

	for (i; i <= U; i++) {
		if (i % 2 == 1)
			total = total + i;
	}
	return total;
}
int EVEN(int U) {

	int i = 1, total = 0;

	for (i; i <= U; i++) {
		if (i % 2 == 0)
			total = total + i;
	}
	return total;
}
int TotalSum(int U) {

	int i = 1, total = 0;

	for (i; i <= U; i++) {
		total = total + i;
	}
	return total;
}