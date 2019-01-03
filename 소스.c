/*
acmicpc #8393
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.
1부터 n까지의 합
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