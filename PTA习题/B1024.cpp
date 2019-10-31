/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	int i = 0, j = 0, jump = 0, temp = 0;
	//正则表达式 [+-][1-9].[0-9]+E[+-][0-9]+
	char a[10002];
	char answer[10002];
	int count = 0;
	for (i = 0; i < 10002; i++) {
		a[i] = '\0';
		answer[i] = '\0';
	}
	scanf("%s", a);
	if (a[0] == '0') {
		printf("0");
		return 0;
	}
	if (a[0] == '-') {
		//先处理符号
		printf("-");
	}
	
	for (i = 1; a[i] != 'E'; i++) {
		//E之前
		answer[count] = a[i];
		count++;//计算中间长度
	}
	i++;//跳过E
	
	int flag = 0;
	if (a[i] == '+') {
		flag = 1;
		//小数点需要向后跳
		//否则向前跳
	}
	i++;//跳过符号
	jump = 0;
	for (; a[i] != '\0'; i++) {
		//结束之前，统计要跳的次数
		jump = jump * 10;
		jump += a[i] - '0';
	}
	if (jump == 0) {
		//若不需要跳 结束
		printf("%s",answer);
	}
	else
	{
		if (flag == 1) {
			//若需要向后跳
			if (jump < count - 2) {
				//需要在数字内保留小数点
				j = 0; temp = 0;
				for (j = 0; answer[j] != '\0'; j++) {
					if (answer[j] == '.') {
						continue;
					}
					printf("%c", answer[j]);
					if (temp == jump) {
						printf(".");
					}
					temp++;//控制打印点
				}
			}
			else
			{
				//不需要小数点
				for (j = 0; answer[j] != '\0'; j++) {
					if (answer[j] == '.') {
						continue;
					}
					printf("%c", answer[j]);
				}
				for (j = 0; j < jump - (count - 2); j++) {
					printf("0");
				}
			}
		}
		else {
			//向前跳
			printf("0.");
			for (j = 0; j < jump - 1; j++) {
				//打印跳过的0
				printf("0");
			}
			for (j = 0; answer[j] != '\0'; j++) {
				if (answer[j] == '.') {
					continue;
				}
				printf("%c", answer[j]);
			}
		}
	}
	return 0;
}
*/