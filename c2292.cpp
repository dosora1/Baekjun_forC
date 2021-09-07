#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	int Sum = 1;
	for (int i = 0; i < n; i++) {
		Sum += 6 * i;
			if (Sum >= n) {
				printf("%d", i + 1);
				break;
			}
	}
	return 0;
}