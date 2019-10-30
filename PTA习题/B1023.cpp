/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	int i = 0, j = 0, m = 0;;
	int a[55];
	int out[55];
	int flag = 0;
	for (i = 0; i < 55; i++) {
		a[i] = 0; out[i] = 0;
	}
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		if (a[i] > 0) {
			flag = 1;
		}
	}
	if (flag == 0) {
		printf("0");
		return 0;
	}

	if (a[0] != 0) {
		for (i = 1; i < 10; i++) {
			//找到一个非零
			if (a[i] != 0) {
				a[i]--;
				printf("%d", i);
				for (j = 0; j < 10; j++) {
					for (m = 0; m < a[j]; m++) {
						printf("%d", j);
					}
				}
				break;
			}
			
		}
		if (i == 10) {
			//都是0
			for (m = 0; m < a[0]; m++) {
				printf("0");
			}
		}
	}
	else {
		//开头没0则正常输出
		for (j = 0; j < 10; j++) {
			for (m = 0; m < a[j]; m++) {
				printf("%d", j);
			}
		}
	}

	return 0;
}
*/
