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
	int addr;//地址
	char addr_s[10];

	int data;//数据

	int next;//后继地址
	char next_s[10];

	int pre;//前驱地址
	char pre_s[10];

};

int count_addr(char temp[]) {
	int count = 0, j = 0;
	int flag = 1;//正负
	if (temp[0] == '-') {
		return -1;
	}
	else
	{
		j = 0; count = 0;
		while (temp[j] >= '0' && temp[j] <= '9') {
			count = count * 10 + temp[j] - '0';
			j++;
		}
		return count;
	}
	
	
}

void print_a(node a[],int start) {

	int i = start;
	while (1) {

		printf("%s %d %s\n", a[i].addr_s, a[i].data, a[i].next_s);
		if (a[i].next == -1) {
			break;
		}
		i = a[i].next;

	}
	return;
}

void print_a_plus(node a[], int start) {

	int i = start;
	while (1) {

		printf("%s %s %d %s\n", a[i].pre_s, a[i].addr_s, a[i].data, a[i].next_s);
		if (a[i].next == -1) {
			break;
		}
		i = a[i].next;

	}
	return;
}

void exchange_str(char a[], char b[]) {
	//交换字符串内容，长度为10
	char t[10];
	int i = 0;
	for (i = 0; i < 10; i++) {
		t[i] = a[i];
		a[i] = b[i];
		b[i] = t[i];
	}
	return;
}

void exchange_int(int a, int b) {
	//交换整数
	int t;

	t = a;
	a = b;
	b = t;
	
	return;
}

void revolve(node a[], int start, int end, int head, int tail) {

	//逆序a[]从start到end位置的链表
	int i = start;
	int j;
	//用于交换pre和next
	int temp, temp1;
	char ts[10], ts1[10];
	while (1) {
		temp = a[i].pre;

		TODO://交换前驱后继
		

		if (i == end) {
			break;
		}
	}
	return;
}

int main() {

	int n = 0;
	int i = 0, j = 0, count;
	node a[100002];
	node start;
	char temp[10], temp1[10];
	int temp2 = 0, taddr = 0;
	char* ctemp, * ctemp1;
	int flag = 1;//修改正负
	
	scanf("%s%d%s", start.addr_s, &start.data, start.next_s);
	start.addr = count_addr(start.addr_s);
	start.next = count_addr(start.next_s);
	if (start.data == 0) {
		//空表则结束
		return 0;
	}

	for (i = 0; i < start.data; i++) {
		scanf("%s%d%s", temp, &temp2, temp1);
		taddr = count_addr(temp);
		//赋值整数格式内容
		a[taddr].data = temp2;
		a[taddr].addr = taddr;
		a[taddr].next = count_addr(temp1);
		//赋值字符串格式地址
		for (j = 0; j < 10; j++) {
			a[taddr].addr_s[j] = temp[j];
			a[taddr].next_s[j] = temp1[j];

		}
		//printf("\n%5d %d %5d\n",a[taddr].addr, a[taddr].data, a[taddr].next);

	}

	//特殊情况
	i = start.addr;
	if (a[i].next == -1) {
		//只有一个节点
		printf("%s %d %s\n", a[i].addr_s, a[i].data, a[i].next_s);
		return 0;
	}
	if (start.next == 0|| start.next == 1) {
		//不反转
		print_a(a, i);
		return 0;
	}


	//验证打印
	//print_a(a, start.addr);

	a[i].pre = -1;
	a[i].pre_s[0] = '-'; a[i].pre_s[1] = '1'; a[i].pre_s[2] = '\0';
	while (a[i].next != -1) {
		//计算前驱
		a[a[i].next].pre = a[i].addr;//后继有人时把后继的前驱定义
		for (j = 0; j < 10; j++) {
			a[a[i].next].pre_s[j] = a[i].addr_s[j];
		}
		i = a[i].next;//后移
	}

	//print_a_plus(a, start.addr);
	TODO://


	return 0;
}
