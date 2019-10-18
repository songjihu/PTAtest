/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int i = 0, j = 0, n = 0, min = 100, max = 0, x = 0;
	char name[102], num[102];
	char max_name[102], max_num[102], min_name[102], min_num[102];//最大最小值
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", name);
		scanf("%s", num);
		scanf("%d", &x);
		if (x <= min) {
			for (j = 0; j < 101; j++) {
				min = x;
				min_name[j] = name[j];
				min_num[j] = num[j];
			}
		}
		if (x >= max) {
			for (j = 0; j < 101; j++) {
				max = x;
				max_name[j] = name[j];
				max_num[j] = num[j];
			}
		}
	}

	
	printf("%s %s\n", max_name, max_num);
	printf("%s %s", min_name, min_num);

	return 0;
}
*/
