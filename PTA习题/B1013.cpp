/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int m = 0, n = 0;
	int p = 0, flag = 0;
	long long i = 0, j = 0;
	int count = 0;
	long long a[1002];
	for (i = 0; i < 1002; i++) {
		a[i] = 0;
	}
	scanf("%d%d", &m, &n);

	for (i = 2; ; i++)
	{
		//验证i是否为素数(不能被1和本身以外的数整除)
		flag = 0;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			count++;
			if (count == n) {
				if ((count - m + 1) % 10 == 0) {
					printf("%d\n", i);
				}
				else
				{
					printf("%d", i);
				}
				break;
			}
			if (count >= m) {
				if ((count-m+1) % 10 == 0) {
					printf("%d\n", i);
				}
				else
				{
					printf("%d ", i);
				}
			}
			
		}

	}
	return 0;
}
*/
