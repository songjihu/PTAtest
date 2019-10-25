/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

struct node { //结点 
	int num;
	int de;
	int cai;
};

int cmp(struct node a, struct node b) {  //从才 德 号 依次排序 
	if ((a.de + a.cai) != (b.de + b.cai))
		return (a.de + a.cai) > (b.de + b.cai);
	else if (a.de != b.de)
		return a.de > b.de;
	else
		return a.num < b.num;
}


int main() {

	int n = 0, l = 0, h = 0;
	int i = 0, j = 0, k = 0;
	int p = 0, q = 0;
	vector<node> v[4];
	int count[5] = { 0,0,0,0,0 };
	node temp;

	scanf("%d%d%d", &n, &l, &h);
	
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &temp.num, &temp.de, &temp.cai);
		if (temp.de >= l && temp.cai >= l) {
			count[0]++;
			if (temp.de >= h && temp.cai >= h) {
				//德分和才分均不低于此线的被定义为“才德全尽”
				v[0].push_back(temp);
			}
			else
			{
				if (temp.de >= h) {
					//才分不到但德分到线的一类考生属于“德胜才”
					v[1].push_back(temp);
				}
				else
				{
					if (temp.de < h && temp.cai < h && temp.de >= temp.cai) {
						//德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者
						v[2].push_back(temp);
					}
					else
					{
						//其他达到最低线 L 的考生
						v[3].push_back(temp);
					}
				}
			}
		}
	}
	printf("%d\n", count[0]);
	

	//第k类考生
	for (i = 0;i < 4; i++) {
		sort(v[i].begin(), v[i].end(), cmp);
		for (j = 0; j < v[i].size(); j++)
			printf("%d %d %d\n", v[i][j].num, v[i][j].de, v[i][j].cai);
	}

	return 0;
}
*/