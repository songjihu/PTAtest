/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

struct node
{
	int addr;//地址
	int data;//数据
	int next;//后继地址
};

int main() {

	int start = 0, n = 0, jump = 0;
	int i = 0, j = 0, count = 0;
	node a[100002];
	int b[100002];//存储链表顺序
	int t1,t2,t3;//addr num next
	
	scanf("%d%d%d", &start, &n, &jump);

	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &t1, &t2, &t3);
		//address number next
		a[t1].addr = t1;
		a[t1].data = t2;
		a[t1].next = t3;
	}

	count = 0;
	t1 = start;
	for (i = 0; i < n && t1 != -1; i++) {
		b[i] = t1;
		t1 = a[t1].next;
		count++;
	}

	if (jump > 1 && jump <= count) {
		for (i = 0; i < count / jump; i++) {
			reverse(b + i * jump, b + (i + 1) * jump);
		}
	}
	
	for (i = 0; i < count - 1; i++) {
		printf("%05d %d %05d\n", b[i], a[b[i]].data, b[i + 1]);
	}
	if (count > 0) {
		printf("%05d %d -1\n", b[i], a[b[i]].data);
	}
	return 0;
}
*/