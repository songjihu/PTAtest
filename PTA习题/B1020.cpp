/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	int i = 0, j = 0;
	double all = 0, a[1002], b[1002], answer = 0;
	double c[1002][2];
	for (i = 0; i < 1002; i++) {
		a[i] = 0;//总量
		b[i] = 0;//总价
		c[i][0] = 0;//零售价
		c[i][1] = i;//序号
	}


	scanf("%d%lf", &n, &all);
	for (i = 0; i < n; i++) {
		scanf("%lf", &a[i]);//总量
	}
	for (i = 0; i < n; i++) {
		scanf("%lf", &b[i]);//总价值
		c[i][0] = b[i] / a[i];
	}

	double temp = 0, temp1 = 0, flag = 0;;
	for (i = 0; i < n - 1; i++) {
		flag = 0;
		for (j = 0; j < n - 1 - i; j++) {
			if (c[j][0] < c[j + 1][0]) {
				//降序
				flag = 1;
				temp = c[j][0]; temp1 = c[j][1];
				c[j][0] = c[j + 1][0]; c[j][1] = c[j + 1][1];
				c[j + 1][0] = temp; c[j + 1][1] = temp1;
			}
		}
		if (flag == 0) {
			break;
		}
	}

	/*3 50
	18 15 10
	75 72 45*/

	double count = 0;//已卖出量
	i = 0; j = 0;
	while (n != 0 && j != n && all != 0) {
		//可以完整卖出一种月饼
		if (all >= a[(int)c[j][1]]) {
			answer += b[(int)c[j][1]];//收入增加
			count += a[(int)c[j][1]];//已卖出量增加
			all -= a[(int)c[j][1]];//市场剩余减少
			j++;
		}
		else {
			//有多少市场就卖多少
			answer += c[j][0] * all;
			break;
			
		}
	}


	printf("%.2lf", answer);

	return 0;
}
*/