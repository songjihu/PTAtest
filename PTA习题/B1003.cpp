/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	char str[102];
	int answer[12], flag = 0;
	int n = 0, i = 0, j = 0, t = 0;
	int count_all = 0, count_a = 0, count_b = 0, count_c = 0;
	int count_PT = 0;
	//����aPbTc֮��abc�ĳ���

	for (i = 0; i < 12; i++) {
		answer[i] = 1;
	}

	scanf("%d", &n);//����n,С��10

	for (i = 0; i < n; i++) {
		scanf("%s", str);
		count_a = 0, count_all = 0, count_b = 0, count_c = 0;
		count_PT = 0;//ȫ����0
		flag = 0;//����ûͨ��
		for (j = 0; str[j] != '\0'; j++) {	
			if ((str[j] != 'P' && str[j] != 'A' && str[j] != 'T') || count_PT > 2) {
				answer[i] = 0;
				flag = 1;
				break;
			}//��֤P��T����2�����޳�PAT��������ĸ

			if (str[j] == 'P') {
				count_PT++;
			}

			if (str[j] == 'T') {
				if (count_PT == 1) {
					count_PT++;
				}
				else
				{
					count_PT += 2;//T��P֮ǰ����
				}
				
			}
			//��֤PT�Ⱥ�˳��һ��
			count_all++;
		}

		if (flag == 0) {

			for (j = 0; str[j] != 'P'; j++) {
				count_a++;
			}
			for (j = j + 1; str[j] != 'T'; j++) {
				count_b++;
			}
			for (j = j + 1; str[j] != '\0'; j++) {
				count_c++;
			}
			//����abc����

			if (count_b == 0) {
				//������ڶ���
				flag = 2;
				answer[i] = 0;
				//break;
			}

			if (count_c - (count_b - 1) * count_a != count_a) {
				//�����������
				flag = 3;
				answer[i] = 0;
				//break;
			}
		}
	}
	
	for (i = 0; i < n; i++) {
		if (answer[i] == 0) {
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}

	return 0;
}
*/
