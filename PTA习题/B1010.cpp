/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	int i = 0, j = 0;
	int a[10000], b[10000];
	char str[10000];
	int s = 0, flag = 1, count = 0;

	for (i = 0; i < 10000; i++) {
		a[i] = 0;
		b[i] = 0;
		str[i] = '0';
	}

	for (i = 0; i < 1000; i++) {
		scanf("%c", &str[i]);
		if (str[i] == '\n') {
			a[count] = s * flag;
			count++;
			break;
		}
		else
		{
			if (str[i] == ' ') {
				a[count] = s * flag;
				count++;
				s = 0;
				flag = 1;
			}
			else
			{
				if (str[i] == '-') {
					flag = -1;
				}
				else
				{
					s = s * 10 + str[i] - '0';
				}
			}
		}
	}

	printf("%d %d", a[0] * a[1], a[1] - 1);
	for (i = 2; i < count - 1; i+=2) {
		if (a[i] * a[i + 1] != 0) {
			printf(" %d %d", a[i] * a[i + 1], a[i + 1] - 1);
		}
		else {
			break;
		}
			
	}
	
	return 0;
}
*/