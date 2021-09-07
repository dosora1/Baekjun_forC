#include <stdio.h>

int main() {
	int n, num;
	int max = -1000000;
	int min = 1000000;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &num);
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
	}
	printf("%d %d", min, max);
}