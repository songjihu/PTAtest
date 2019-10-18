/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reverse(int a[], int left, int right) {
	
	int i = 0, t = 0;
	for (i = left; i <= (right + left) / 2; i++) {
		t = a[i];
		a[i] = a[right + left - i];
		a[right + left - i] = t;
	}
	return;
}

int main() {

	int n = 0, m = 0;
	int i = 0, j = 0;
	int a[102];
	for (i = 0; i < 102; i++) {
		a[i] = 0;
	}

	scanf("%d%d", &n, &m);
	m %= n;

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	reverse(a, 0, n - m - 1);
	reverse(a, n - m, n - 1);
	reverse(a, 0, n - 1);

	printf("%d", a[0]);
	for (i = 1; i < n; i++) {
		printf(" %d", a[i]);
	}

	return 0;
}
*/

