/*
acmicpc #8393
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.
1���� n������ ��
*/

#include <stdio.h>

int main(void) {
	int n = 0, sum = 0;
	int i = 0;

	scanf_s("%d", &n);

	if (n >= 1 && n <= 10000) {
		for (i = 1; i <= n; i++) {
			sum += i;
		}
	}

	printf("%d\n", sum);

	return 0;
}