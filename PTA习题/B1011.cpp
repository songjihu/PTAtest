/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	int i = 0, j = 0;
	long long x[11], y[11], z[11];
	for (i = 0; i < 10; i++) {
		x[i] = 0;
		y[i] = 0;
		z[i] = 0;
	}
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%lld%lld%lld", &x[i], &y[i], &z[i]);
	}
	for (i = 0; i < n; i++) {
		printf("Case #%d: ", i + 1);
		if (x[i] + y[i] > z[i]) {
			printf("true\n");
		}
		else {
			printf("false\n");
		}
	}

	return 0;
}
*/
