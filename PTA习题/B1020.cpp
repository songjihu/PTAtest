/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	int i = 0, j = 0;
	double all = 0, a[1002], b[1002], answer = 0;
	double c[1002][2];
	for (i = 0; i < 1002; i++) {
		a[i] = 0;//����
		b[i] = 0;//�ܼ�
		c[i][0] = 0;//���ۼ�
		c[i][1] = i;//���
	}


	scanf("%d%lf", &n, &all);
	for (i = 0; i < n; i++) {
		scanf("%lf", &a[i]);//����
	}
	for (i = 0; i < n; i++) {
		scanf("%lf", &b[i]);//�ܼ�ֵ
		c[i][0] = b[i] / a[i];
	}

	double temp = 0, temp1 = 0, flag = 0;;
	for (i = 0; i < n - 1; i++) {
		flag = 0;
		for (j = 0; j < n - 1 - i; j++) {
			if (c[j][0] < c[j + 1][0]) {
				//����
				flag = 1;
				temp = c[j][0]; temp1 = c[j][1];
				c[j][0] = c[j + 1][0]; c[j][1] = c[j + 1][1];
				c[j + 1][0] = temp; c[j + 1][1] = temp1;
			}
		}
		if (flag == 0) {
			break;
		}
	}

	

	double count = 0;//��������
	i = 0; j = 0;
	while (n != 0 && j != n && all != 0) {
		//������������һ���±�
		if (all >= a[(int)c[j][1]]) {
			answer += b[(int)c[j][1]];//��������
			count += a[(int)c[j][1]];//������������
			all -= a[(int)c[j][1]];//�г�ʣ�����
			j++;
		}
		else {
			//�ж����г���������
			answer += c[j][0] * all;
			break;
			
		}
	}


	printf("%.2lf", answer);

	return 0;
}
*/