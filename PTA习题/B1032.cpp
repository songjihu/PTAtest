/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int m[100000], n[100000], q[100000], x = 0;
	int i = 0, j = 0, max = 0, max_num = 0;
	scanf("%d", &x);

	for (i = 0; i < 100000; i++) {
		m[i] = 0;
		n[i] = 0;
		q[i] = 0;
	}

	for (i = 0; i < x; i++) {
		scanf("%d%d", &m[i], &n[i]);
		q[m[i]] += n[i];
		if (q[m[i]] >= max_num) {
			max = i;
			max_num = q[m[i]];
		}
	}

	printf("%d %d", m[max],max_num);
	return 0;
}
*/