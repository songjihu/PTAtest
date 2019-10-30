/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	int i = 0, j = 0;
	long long  x1 = 0, x2 = 0, r = 0;
	int x3 = 0;
	int answer[100000];
	for (i = 0; i < 100000; i++) {
		answer[i] = 0;
	}

	scanf("%lld%lld%d", &x1, &x2, &x3);
	
	r = x1 + x2;
	

	i = 100000;
	while (r != 0) {
		i--;
		answer[i] = r % x3;
		r = r / x3;
	}

	if (i != 100000) {
		for (; i < 100000; i++) {
			printf("%d", answer[i]);
		}
	}
	else
	{
		printf("0");
	}
	


	return 0;
}
*/