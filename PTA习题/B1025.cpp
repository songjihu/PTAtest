#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string.h>
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

void exchange_int(int *a, int *b) {
	//交换整数
	int t;

	t = *a;
	*a = *b;
	*b = t;
	
	return;
}

void reverse_n(node a[], int start, int num, char head[], char tail[]) {
	//开始位置,个数,新头,新尾
	//逆序a[]从start到num个
	strcpy(tail, a[start].addr_s);
	int i = start;
	int count = 0;
	int temp, temp1;
	//循环num次
	while (1) {
		count++;
		//交换前保存
		temp = a[i].next;
		exchange_int(&a[i].pre, &a[i].next);
		exchange_str(a[i].pre_s, a[i].next_s);
		if (count == num) {
			strcpy(head, a[i].addr_s);
			break;
		}
		i = temp;//否则继续
	}
	return;
}

int main() {

	int n = 0;
	int i = 0, j = 0, count;
	node a[100002];
	int b[100002];//存储
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



	//验证打印
	//print_a(a, start.addr);

	//计算前驱并计算链表长度
	i = start.addr;
	count = 1;
	a[i].pre = -1;
	a[i].pre_s[0] = '-'; a[i].pre_s[1] = '1'; a[i].pre_s[2] = '\0';
	while (a[i].next != -1) {
		a[a[i].next].pre = a[i].addr;//后继有人时把后继的前驱定义
		for (j = 0; j < 10; j++) {
			a[a[i].next].pre_s[j] = a[i].addr_s[j];
		}
		i = a[i].next;//后移
		count++;
	}
	start.data = count;

	
	//特殊情况
	i = start.addr;
	if (count == 1) {
		//只有一个节点
		printf("%s %d %s\n", a[i].addr_s, a[i].data, a[i].next_s);
		return 0;
	}
	if (start.next > count || start.next == 0 || start.next == 1) {
		//不反转
		print_a(a, i);
		return 0;
	}


	//print_a_plus(a, start.addr);

	

	//交换并连接
	char newhead[10], newtail[10];//每一段新的开头和结尾
	int jump = start.next;//跳跃个数
	//int jump = 2;//跳跃个数
	int printloc = 0;//记录打印开始的位置
	n = start.data;//总个数n
	//前边完整的反转
	int k = start.addr;//开始位置
	for (i = 0; i < n / jump; i++) {
		if (i != 0) {
			//不是首次则处理连接到后方
			a[count_addr(newtail)].next = k;
			strcpy(a[count_addr(newtail)].next_s, a[k].addr_s);
		}
		reverse_n(a, k, jump, newhead, newtail);
		if (i == 0) {
			printloc = count_addr(newhead);
		}
		k = a[count_addr(newhead)].pre;//下次开始的地方
	}
	//处理剩余的并标记结束
	if (n % jump == 0) {
		//无剩余
		k = count_addr(newtail);
		a[k].next = -1;
		a[k].next_s[0] = '-'; a[k].next_s[1] = '1'; a[k].next_s[2] = '\0';
	}
	else
	{
		//连接剩余的
		a[count_addr(newtail)].next = k;
		strcpy(a[count_addr(newtail)].next_s, a[k].addr_s);
	}
	
	print_a(a, printloc);
	


	return 0;
}
