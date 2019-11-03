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
	int addr;//��ַ
	char addr_s[10];

	int data;//����

	int next;//��̵�ַ
	char next_s[10];

	int pre;//ǰ����ַ
	char pre_s[10];

};

int count_addr(char temp[]) {
	int count = 0, j = 0;
	int flag = 1;//����
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
	//�����ַ������ݣ�����Ϊ10
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
	//��������
	int t;

	t = *a;
	*a = *b;
	*b = t;
	
	return;
}

void reverse_n(node a[], int start, int num, char head[], char tail[]) {
	//��ʼλ��,����,��ͷ,��β
	//����a[]��start��num��
	strcpy(tail, a[start].addr_s);
	int i = start;
	int count = 0;
	int temp, temp1;
	//ѭ��num��
	while (1) {
		count++;
		//����ǰ����
		temp = a[i].next;
		exchange_int(&a[i].pre, &a[i].next);
		exchange_str(a[i].pre_s, a[i].next_s);
		if (count == num) {
			strcpy(head, a[i].addr_s);
			break;
		}
		i = temp;//�������
	}
	return;
}

int main() {

	int n = 0;
	int i = 0, j = 0, count;
	node a[100002];
	int b[100002];//�洢
	node start;
	char temp[10], temp1[10];
	int temp2 = 0, taddr = 0;
	char* ctemp, * ctemp1;
	int flag = 1;//�޸�����
	
	scanf("%s%d%s", start.addr_s, &start.data, start.next_s);
	start.addr = count_addr(start.addr_s);
	start.next = count_addr(start.next_s);
	if (start.data == 0) {
		//�ձ������
		return 0;
	}

	for (i = 0; i < start.data; i++) {
		scanf("%s%d%s", temp, &temp2, temp1);
		taddr = count_addr(temp);
		//��ֵ������ʽ����
		a[taddr].data = temp2;
		a[taddr].addr = taddr;
		a[taddr].next = count_addr(temp1);
		//��ֵ�ַ�����ʽ��ַ
		for (j = 0; j < 10; j++) {
			a[taddr].addr_s[j] = temp[j];
			a[taddr].next_s[j] = temp1[j];
		}
		//printf("\n%5d %d %5d\n",a[taddr].addr, a[taddr].data, a[taddr].next);

	}



	//��֤��ӡ
	//print_a(a, start.addr);

	//����ǰ��������������
	i = start.addr;
	count = 1;
	a[i].pre = -1;
	a[i].pre_s[0] = '-'; a[i].pre_s[1] = '1'; a[i].pre_s[2] = '\0';
	while (a[i].next != -1) {
		a[a[i].next].pre = a[i].addr;//�������ʱ�Ѻ�̵�ǰ������
		for (j = 0; j < 10; j++) {
			a[a[i].next].pre_s[j] = a[i].addr_s[j];
		}
		i = a[i].next;//����
		count++;
	}
	start.data = count;

	
	//�������
	i = start.addr;
	if (count == 1) {
		//ֻ��һ���ڵ�
		printf("%s %d %s\n", a[i].addr_s, a[i].data, a[i].next_s);
		return 0;
	}
	if (start.next > count || start.next == 0 || start.next == 1) {
		//����ת
		print_a(a, i);
		return 0;
	}


	//print_a_plus(a, start.addr);

	

	//����������
	char newhead[10], newtail[10];//ÿһ���µĿ�ͷ�ͽ�β
	int jump = start.next;//��Ծ����
	//int jump = 2;//��Ծ����
	int printloc = 0;//��¼��ӡ��ʼ��λ��
	n = start.data;//�ܸ���n
	//ǰ�������ķ�ת
	int k = start.addr;//��ʼλ��
	for (i = 0; i < n / jump; i++) {
		if (i != 0) {
			//�����״��������ӵ���
			a[count_addr(newtail)].next = k;
			strcpy(a[count_addr(newtail)].next_s, a[k].addr_s);
		}
		reverse_n(a, k, jump, newhead, newtail);
		if (i == 0) {
			printloc = count_addr(newhead);
		}
		k = a[count_addr(newhead)].pre;//�´ο�ʼ�ĵط�
	}
	//����ʣ��Ĳ���ǽ���
	if (n % jump == 0) {
		//��ʣ��
		k = count_addr(newtail);
		a[k].next = -1;
		a[k].next_s[0] = '-'; a[k].next_s[1] = '1'; a[k].next_s[2] = '\0';
	}
	else
	{
		//����ʣ���
		a[count_addr(newtail)].next = k;
		strcpy(a[count_addr(newtail)].next_s, a[k].addr_s);
	}
	
	print_a(a, printloc);
	


	return 0;
}
