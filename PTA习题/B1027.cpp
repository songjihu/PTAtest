#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void out(int left, int right,char c) {
	int count = 0;
	while (count <= left * 2 + right) {
		if (count < left || count>left + right) {
			printf(" ");
		}
		else
		{
			printf("%c", c);
		}
		count++;
	}
	printf("\n");
}

int main() {

	int n = 0;
	int i = 0, j = 0;
	char sign;
	int sum = 1, count = 0;
	int rest = 0;

	scanf("%d%c", &n, &sign);
	if (n == 1) {
		printf("*\n0");
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
		}
		count = i - 2;
		int flag = 0, k = 0;
		for (i = 0; i < count / 2; i++) {
			//上半部分
			out(i, sum - 2 * i, sign);
		}
		out(i, sum - 2 * i, sign);
		for (; i >= 0; i--) {
			out(i, sum - 2 * i, sign);
		}
	}
	
	printf("%d", rest);

	return 0;
}
