/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

struct node { //��� 
	int num;
	int de;
	int cai;
};

int cmp(struct node a, struct node b) {  //�Ӳ� �� �� �������� 
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
				//�·ֺͲŷ־������ڴ��ߵı�����Ϊ���ŵ�ȫ����
				v[0].push_back(temp);
			}
			else
			{
				if (temp.de >= h) {
					//�ŷֲ������·ֵ��ߵ�һ�࿼�����ڡ���ʤ�š�
					v[1].push_back(temp);
				}
				else
				{
					if (temp.de < h && temp.cai < h && temp.de >= temp.cai) {
						//�²ŷ־����� H�����ǵ·ֲ����ڲŷֵĿ������ڡ��ŵ¼����������С���ʤ�š���
						v[2].push_back(temp);
					}
					else
					{
						//�����ﵽ����� L �Ŀ���
						v[3].push_back(temp);
					}
				}
			}
		}
	}
	printf("%d\n", count[0]);
	

	//��k�࿼��
	for (i = 0;i < 4; i++) {
		sort(v[i].begin(), v[i].end(), cmp);
		for (j = 0; j < v[i].size(); j++)
			printf("%d %d %d\n", v[i][j].num, v[i][j].de, v[i][j].cai);
	}

	return 0;
}
*/