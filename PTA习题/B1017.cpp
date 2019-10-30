/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {

	int n = 0, x = 0;
	int i = 0, j = 0, flag = 0, temp = 0, t = 0, count = 0;
	char a[1002];
	char answer[1002];
	for (i = 0; i < 1002; i++) {
		a[i] = '\0';
		answer[i] = '\0';
	}

	scanf("%s", a);
	scanf("%d", &x);
	//ÓÃtemp±£´æÓàÊý
	for (i = 0; i < 1002; i++) {
		if (a[i] == '\0') {
			break;
		}
		t = temp * 10 + a[i] - '0';
		if ( t < x) {
			answer[i] = '0';
			count++;
			temp = t;
		}
		else
		{
			answer[i] = t / x + '0';
			count++;
			temp = t % x;
		}
	}
	i = 0;
	while (answer[i] == '0')
	{
		i++;
	}
	for (; i < 1002; i++) {
		if (answer[i] == '\0') {
			break;
		}
		printf("%c", answer[i]);
		flag = 1;
	}
	if (flag == 0) {
		printf("0");
	}
	printf(" %d\n", temp);

	return 0;
}
*/