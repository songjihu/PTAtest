/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

struct node { //结点 
	int winer;//1甲方2乙方0平局
	char hand;//胜者手势
};

int cmp(char a, char b) {  //石头剪刀布比较结果
	if (a == 'C') {
		if (b == 'J') return 1;//胜
		else if (b == 'C') return 0;//平
			 else return -1;//负
	}
	if (a == 'J') {
		if (b == 'B') return 1;//胜
		else if (b == 'J') return 0;//平
		else return -1;//负
	}
	if (a == 'B') {
		if (b == 'C') return 1;//胜
		else if (b == 'B') return 0;//平
		else return -1;//负
	}
}

int main() {

	int n = 0;
	int i = 0, j = 0;
	char t1 = '0', t2 = '0', tt = '0';
	vector<node> a;
	node temp;
	scanf("%d%c", &n,&tt);
	for (i = 0; i < n; i++) {
		scanf("%c%c%c%c", &t1, &tt, &t2, &tt);
		if (cmp(t1, t2) == 0) {
			temp.winer = 0;temp.hand = '0';
		}
		else
		{
			if (cmp(t1, t2) == 1) {
				temp.winer = 1; temp.hand = t1;
			}
			else
			{
				temp.winer = 2; temp.hand = t2;
			}
		}
		a.push_back(temp);
	}

	int w = 0, p = 0, l = 0;
	int count1[3] = { 0,0,0 }, count2[3] = { 0,0,0 };
	for (i = 0; i < n; i++) {
		//甲方获胜
		if (a[i].winer == 1) {
			w++;
			switch (a[i].hand)
			{
			case 'C':count1[0]++; break;
			case 'J':count1[1]++; break;
			case 'B':count1[2]++; break;
			default:break;
			}
		}
		else
		{
			//乙方获胜
			if (a[i].winer == 2) {
				l++;
				switch (a[i].hand)
				{
				case 'C':count2[0]++; break;
				case 'J':count2[1]++; break;
				case 'B':count2[2]++; break;
				default:break;
				}
			}
			else
			{
				//平局
				p++;
			}
		}
	}

	printf("%d %d %d\n", w, p, l);
	printf("%d %d %d\n", l, p, w);
	//printf("%d %d %d\n", count1[0], count1[1], count1[2]);
	//printf("%d %d %d\n", count2[0], count2[1], count2[2]);


	int max_num = count1[1];
	char max_hand = 'J';
	
	if (count1[0] >= max_num) {
		max_num = count1[0];
		max_hand = 'C';
	}
	if (count1[2] >= max_num) {
		max_hand = 'B';
	}
	printf("%c ", max_hand);

	max_num = count2[1];
	max_hand = 'J';

	if (count2[0] >= max_num) {
		max_num = count2[0];
		max_hand = 'C';
	}
	if (count2[2] >= max_num) {
		max_hand = 'B';
	}
	printf("%c", max_hand);
		
	

	return 0;
}
*/