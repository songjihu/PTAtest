/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0, count = 0, i = 0, j = 0;
	int a[102][1002],b[102],c[102];

	for (i = 0; i < 100; i++) {
		b[i] = 0;
		c[i] = 0;
		for (j = 0; j < 1000; j++) {
			a[i][j] = 0;
		}
	}
	b[100] = 0;//总个数
	b[101] = 0;//flag

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i][0]);//存入0位置
		for (j = 0; j < 1000; j++) {
			//在下一个位置存入被覆盖的数字，1为结尾
			if (a[i][j] % 2 == 0) {
				a[i][j+1] = a[i][j] / 2;
			}
			else
			{
				a[i][j+1] = (a[i][j] * 3 + 1) / 2;
			}
			if (a[i][j+1] == 1) {
				break;
			}
		}
		
	}
	int t=0;
	for (i = 0; i < n; i++) {
		//判断数列中数字是否被覆盖
		b[101] = 0;
		for (j = 0; j < n; j++) {
			for (t = 1; a[j][t] != 1; t++) {
				if (a[i][0] == a[j][t]) {
					b[101] = 1;
					break;
				}
			}
			if (b[101] == 1) {
				break;
			}
		}
		//存入
		if (b[101] == 0) {		
			b[b[100]] = a[i][0];
			b[100]++;
		}
	}
	//sort
	for (i = 0; i < b[100] - 1; i++) {
		for (j = i + 1; j < b[100]; j++) {
			if (b[i] < b[j]) {
				t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
	}
	printf("%d", b[0]);
	for (i = 1; i < b[100]; i++) {
		printf(" %d", b[i]);
	}

	
	return 0;
}
*/