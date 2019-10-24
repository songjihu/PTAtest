/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	int i = 0, j = 0, count = 0, s = 0, flag = 0;
	int a[1002], b[1002];

	for (i = 0; i < 1000; i++) {
		a[i] = 0;
		b[i] = 0;
	}

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	s = 0, flag = 0;
	for (i = 0; i < n; i++) {
		if (a[i] % 5 == 0 && a[i] % 2 == 0) {
			flag = 1;
			s += a[i];
		}
	}
	if (flag == 0) {
		printf("N ");//A1
	}
	else
	{
		printf("%d ", s);//A1
	}


	s = 0; j = 0, flag = 0;
	for (i = 0; i < n; i++) {
		if (a[i] % 5 == 1) {
			flag = 1;
			j++;
			b[j] = a[i];
			if (j % 2 == 1) {
				s += b[j];
			}
			else
			{
				s -= b[j];
			}
		}
	}
	if (flag == 0) {
		printf("N ");//A2
	}
	else
	{
		printf("%d ", s);//A2
	}
	

	s = 0, flag = 0;
	for (i = 0; i < n; i++) {
		if (a[i] % 5 == 2) {
			flag = 1;
			s++;
		}
	}
	if (flag == 0) {
		printf("N ");//A3
	}
	else
	{
		printf("%d ", s);//A3
	}
	

	s = 0; j = 0, flag = 0;
	float m = 0, k = 0;
	for (i = 0; i < n; i++) {
		if (a[i] % 5 == 3) {
			flag = 1;
			m += a[i];
			k++;
		}
	}
	if (k != 0) {
		
		k = m / k;
	}
	if (flag == 0) {
		printf("N ");//A4
	}
	else
	{
		printf("%.1f ", k);//A4
	}

	s = 0; j = 0, flag = 0;
	for (i = 0; i < n; i++) {
		if (a[i] % 5 == 4 && a[i] > j) {
			flag = 1;
			j = a[i];
		}
	}
	if (flag != 0) {
		printf("%d", j);//A5
	}
	else
	{
		printf("N");
	}

	return 0;
}
*/
