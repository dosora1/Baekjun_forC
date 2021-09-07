#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int t;
	long double d;
	double sub;
	int x1, x2, y1, y2, r1, r2;
	scanf_s("%d", &t);
	for (int i=0; i < t; i++) {
		scanf_s("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = sqrt((double)pow((x2 - x1), 2) + pow((y2-y1), 2));
		sub = r1 > r2 ? r1 - r2 : r2 - r1;		

		if (d == 0 && r1==r2) { // ���� ��
			printf("%d", -1);
		}
		else if (sub > d || r1 + r2 < d) { // ǰ�� �� or ������ ����
			printf("%d\n", 0);
		}
		else if (r1+r2 ==d || sub == d) { // ǰ�� ���̰�, �������� ���� //ǰ�� ���̰�, �������� ����
			printf("%d\n", 1);
		}
		else { // �� ������ ����
			printf("%d\n", 2);
		}
	}
}