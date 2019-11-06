#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

struct node
{
	int addr;
	int data;
	int next;
	int pre;
};

int count_addr(char temp[]) {
	int count = 0, j = 0;
	int flag = 1;//正负
	if (temp[0] == '-') {
		flag = -1;
	}
	j = 1; count = 0;
	while (temp[j] >= '0' && temp[j] >= '9') {
		count = count * 10 + temp[j] - '0';
	}
	return count * flag;
}

char * count_back(int x) {
	char a[10];
	int i = 0;
	for (i = 4; i > -1; i--) {
		if (x % 10 != 0) {
			a[i] = x % 10 + '0';
			x = x / 10;
		}
		else
		{
			a[i] = '0';
		}
	}
	return a;
}

int main() {

	int n = 0;
	int i = 0, j = 0, count;
	node a[100002];
	node start;
	char temp[10], temp1[10];
	char* ctemp, * ctemp1;
	int flag = 1;//修改正负
	
	scanf("%s%d%s", temp, &start.data, temp1);
	start.addr = count_addr(temp);
	start.next = count_addr(temp1);

	for (i = 0; i < start.data; i++) {
		scanf("%s%d%s", temp, &a[count_addr(temp)].data, temp1);
		a[count_addr(temp)].addr = count_addr(temp);
		a[count_addr(temp)].next = count_addr(temp1);
	}

	i = start.addr;
	if (a[i].next == -1) {
		ctemp = count_back(a[i].addr);
		ctemp1 = count_back(a[i].next);
		printf("%s%d%s", ctemp, a[i].data, ctemp1);
	}
	a[i].pre = -1;
	while (a[i].next != -1) {
		//计算前驱
		a[i + 1].pre = a[i].addr;//后继有人时把后继的前驱定义
		i = a[i].next;//后移
	}
	


	return 0;
}
