/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	char x[1002];
	int i = 0, j = 0;
	int a[11];

	for(i = 0; i < 11; i++) {
		a[i] = 0;
	}
	for (i = 0; i < 1002; i++) {
		x[i] = 0;
	}
	
	scanf("%s", x);
	i = 0;
	while (x[i] != '\0') {
		a[(x[i] - '0')]++;
		i++;
	}

	for (i = 0; i < 10; i++) {
		if (a[i] != 0) {
			printf("%d:%d\n", i, a[i]);
		}
	}

	return 0;
}
*/