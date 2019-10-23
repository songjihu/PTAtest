/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0, a[100002], flag = 0, count = 0, out = 0;
	int i = 0, j = 0;
	for (i = 0; i < 100002; i++) {
		a[10002] = 0;
	}

	scanf("%d", &n);
	for (i = 2; i <= n; i++) {
		flag = 0;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				//存在除1和本身之外的数可以整除
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			a[count] = i;
			count++;
		}
	}

	for (i = 0; i < count-1; i++) {
		if (a[i + 1] - a[i] == 2) {
			out++;
		}
	}

	printf("%d", out);

	return 0;
}
*/
