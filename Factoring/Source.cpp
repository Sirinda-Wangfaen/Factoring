#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int x, y = 2;
	printf("Enter number : ");
	scanf_s("%d", &x);
	printf("Factoring Result : ");
	if (x == -1 || x == 0 || x == 1) {
		printf("%d", x);
	}
	else {
		if (x < -1) {
			x = -x;
			printf("(-1) x ");
		}
		while ((x > 1) && (y < x)) {
			if (x % y == 0) {
				printf("%d x ", y);
				x = x / y;
				y = 2;
			}
			else {
				y = y + 1;
			}
		}
		printf("%d\n", y);
	}
	return 0;
}


