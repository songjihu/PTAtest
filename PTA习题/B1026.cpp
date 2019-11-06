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
	double x, x1, x2;
	int t = 0;
	scanf("%lf%lf", &x1, &x2);
	x = (x2 - x1) / 100;//共计多少秒
	t = (int)(x + 0.5);//先四舍五入
	printf("%02d:", t / 3600); t = t % 3600;
	printf("%02d:", t / 60); t = t % 60;
	printf("%02d\n", t);


	return 0;
}
*/