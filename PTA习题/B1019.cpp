/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int cmp1(int x, int y) {
	return x > y;
}

int cmp2(int x, int y) {
	return x < y;
}

int main() {

	int n = 0;
	int i = 0, j = 0;
	char t = '0';
	int temp = 0, temp1 = 0;
	int x = 0, y = 0, z = 0, flag = 0;
	vector<int> a, b, c, d;

	for (i = 0; i < 4; i++) {
		scanf("%c", &t);
		a.push_back(t - '0');
	}
	while (flag != 6174) {
		//½µÐò
		sort(a.begin(), a.end(), cmp1);
		for (i = 0; i < 4; i++) {
			b.push_back(a[i]);
			x = x * 10 + a[i];
		}
		//ÉýÐò
		sort(a.begin(), a.end(), cmp2);
		for (i = 0; i < 4; i++) {
			c.push_back(a[i]);
			y = y * 10 + a[i];
		}
		z = x - y;
		flag = z;
		if (z == 0) {
			printf("%d%d%d%d - %d%d%d%d = 0000\n", b[0], b[1], b[2], b[3], c[0], c[1], c[2], c[3]);
			return 0;
		}
		else
		{
			a.clear();
			temp = 1000;
			for (i = 0; i < 4; i++) {
				temp1 = z / temp;
				z = z % temp;
				temp = temp / 10;
				a.push_back(temp1);
			}
			printf("%d%d%d%d - %d%d%d%d = %d%d%d%d\n", b[0], b[1], b[2], b[3], c[0], c[1], c[2], c[3]
			,a[0],a[1],a[2],a[3]);
		}
		b.clear(); c.clear();
		x = 0; y = 0;
	}
	


	return 0;
}
*/
