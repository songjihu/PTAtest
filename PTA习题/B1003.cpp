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
	//计算aPbTc之间abc的长度

	for (i = 0; i < 12; i++) {
		answer[i] = 1;
	}

	scanf("%d", &n);//输入n,小于10

	for (i = 0; i < n; i++) {
		scanf("%s", str);
		count_a = 0, count_all = 0, count_b = 0, count_c = 0;
		count_PT = 0;//全部归0
		flag = 0;//条件没通过
		for (j = 0; str[j] != '\0'; j++) {	
			if ((str[j] != 'P' && str[j] != 'A' && str[j] != 'T') || count_PT > 2) {
				answer[i] = 0;
				flag = 1;
				break;
			}//保证P和T共有2个且无除PAT的其他字母

			if (str[j] == 'P') {
				count_PT++;
			}

			if (str[j] == 'T') {
				if (count_PT == 1) {
					count_PT++;
				}
				else
				{
					count_PT += 2;//T在P之前出现
				}
				
			}
			//保证PT先后顺序一致
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
			//计算abc个数

			if (count_b == 0) {
				//不满足第二条
				flag = 2;
				answer[i] = 0;
				//break;
			}

			if (count_c - (count_b - 1) * count_a != count_a) {
				//不满足第三条
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
