#include <stdio.h>
#include <stdlib.h>

void Find(int* arrN, int* arrM, int N, int M);

int main() {
	int N, M;
	int *arrN,*arrM;

	scanf_s("%d", &N);
	arrN = (int*)calloc(N, sizeof(int));	
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arrN[i]);
	}
	scanf_s("%d", &M);
	arrM = (int*)calloc(M, sizeof(int));		
	for (int j = 0; j <M; j++) {
		scanf_s("%d", &arrM[j]);
	}
	Find(arrN, arrM,N,M);	
}

void Find(int* arrN, int* arrM, int N, int M) {
	for (int i = 0; i < M; i++) {
		int cnt=0;
		for (int j = 0; j < N; j++) {
			if (arrM[i] == arrN[j]) {
				cnt++;
				break;
			}
		}
		if (cnt) printf("%d\n", 1);
		else printf("%d\n", 0);
	}
}

