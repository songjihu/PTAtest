/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {

	int n = 0;
	int i = 0, j = 0;
	long long  a1 = 0, b1 = 0, s1 = 0, s2 = 0;
	int a2 = 0, b2 = 0;
	scanf("%lld %d %lld %d", &a1, &a2, &b1, &b2);

	while (a1 != 0)
	{
		if ((a1 % 10) == a2) {
			s1 = s1 * 10 + a2;
		}
		a1 = a1 / 10;
	}

	while (b1 != 0)
	{
		if ((b1 % 10) == b2) {
			s2 = s2 * 10 + b2;
		}
		b1 = b1 / 10;
	}

	printf("%lld", s2 + s1);

	return 0;
}
*/