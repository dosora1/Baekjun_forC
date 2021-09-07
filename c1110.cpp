#include <stdio.h>

int main() {
	int n, ten, one;	
	int cnt = 0;
	int N = -1;
	scanf_s("%d", &n);
	ten = n / 10;
	one = n % 10;

	while (N!=n){
		N = 10*one + (ten + one) % 10;
		ten = N / 10;
		one = N % 10;
		cnt++;		
	}
	printf("%d\n", cnt);
}