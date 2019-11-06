/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

struct node {
	char name[10];
	char birth[20];
	int year;
	int month;
	int day;
	bool flag;
};

bool older(int year, int month, int day, int year1, int month1, int day1) {
	if (year > year1) {
		return false;
	}
	if (year < year1) {
		return true;
	}
	if (month > month1) {
		return false;
	}
	if (month < month1) {
		return true;
	}
	if (day >= day1) {
		return false;
	}
	else
	{
		return true;
	}
}

bool younger(int year, int month, int day, int year1, int month1, int day1) {
	if (year < year1) {
		return false;
	}
	if (year > year1) {
		return true;
	}
	if (month < month1) {
		return false;
	}
	if (month > month1) {
		return true;
	}
	if (day <= day1) {
		return false;
	}
	else
	{
		return true;
	}
}

int main() {

	int n = 0;
	int i = 0, j = 0, flag = 0, count = 0;
	int max = 0, min = 0;
	node a[100002];
	node b[100002];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s%s", a[i].name, a[i].birth);
		a[i].year = 0; a[i].month = 0; a[i].day = 0; flag = 0;
		for (j = 0; j < 10; j++) {
			if (a[i].birth[j] == '/') {
				flag++;
				continue;
			}
			if (flag == 0) {
				a[i].year = a[i].year * 10 + a[i].birth[j] - '0';
			}
			else
			{
				if (flag == 1) {
					a[i].month = a[i].month * 10 + a[i].birth[j] - '0';
				}
				else
				{
					a[i].day = a[i].day * 10 + a[i].birth[j] - '0';
				}
			}
		}
		if (younger(a[i].year, a[i].month, a[i].day, 2014, 9, 6) || older(a[i].year, a[i].month, a[i].day, 1814, 9, 6)) {
			a[i].flag = false;//无效
		}
		else
		{
			a[i].flag = true;//有效
			min = i; max = i;
			count++;
		}
	}
	if (count == 0) {
		printf("0");
		return 0;
	}
	for (i = 0; i < n; i++) {
		//printf("%s %s %d %d %d %d\n", a[i].name, a[i].birth, a[i].year, a[i].month, a[i].day, a[i].flag);
		if (a[i].flag) {
			if (younger(a[i].year, a[i].month, a[i].day, a[min].year, a[min].month, a[min].day)) {
				min = i;
			}
			if (older(a[i].year, a[i].month, a[i].day, a[max].year, a[max].month, a[max].day)) {
				max = i;
			}
		}
		
	}
	printf("%d %s %s", count, a[max].name, a[min].name);
	return 0;
}
*/