#include <stdio.h>

int main() {
	int t,a,b;
	scanf_s("%d", &t);
	for (int i=0; i < t; i++) {
		scanf_s("%d %d", &a, &b);
		printf("Case #%d: ", i + 1);		
		printf("%d + %d = %d\n", a, b, a + b);
	}
}