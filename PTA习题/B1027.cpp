/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void out(int count, char c) {
	for (int i = 0; i < count; i++) {
		printf("%c",c);
	}
	return;
}

int main() {

	int n = 0;
	int i = 0, j = 0;
	char temp[2];
	char sign='0';
	int sum = 1, count = 0;
	int rest = 0;

	scanf("%d%s", &n, temp);
	sign = temp[0];
	if (n == 0) {
		printf("0");
		return 0;
	}
	if (n < 7) {
		printf("%c\n",sign);
		printf("%d", n - 1);
		
	}
	else
	{
		for (i = 3; i < n; i = i + 2) {
			if (n - sum < 2 * i) {
				//如果余下的不能再打印了
				rest = n - sum;
				break;
			}
			sum = sum + 2 * i;
			count++;//*上边需要打印的行数
		}
		int flag = 0, k = count;
		for (i = 0; i < count + 1; i++, k--) {
			//上半部分
			out(i, ' '); out(2 * k + 1, sign);
			printf("\n");
		}
		i-=2; k+=2;
		for (; i >= 0; i--, k++) {
			out(i, ' '); out(2 * k + 1, sign);
			printf("\n");
		}
		printf("%d", rest);
	}
	
	

	return 0;
}
*/