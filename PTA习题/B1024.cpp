/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	int i = 0, j = 0, jump = 0, temp = 0;
	//������ʽ [+-][1-9].[0-9]+E[+-][0-9]+
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
		//�ȴ������
		printf("-");
	}
	
	for (i = 1; a[i] != 'E'; i++) {
		//E֮ǰ
		answer[count] = a[i];
		count++;//�����м䳤��
	}
	i++;//����E
	
	int flag = 0;
	if (a[i] == '+') {
		flag = 1;
		//С������Ҫ�����
		//������ǰ��
	}
	i++;//��������
	jump = 0;
	for (; a[i] != '\0'; i++) {
		//����֮ǰ��ͳ��Ҫ���Ĵ���
		jump = jump * 10;
		jump += a[i] - '0';
	}
	if (jump == 0) {
		//������Ҫ�� ����
		printf("%s",answer);
	}
	else
	{
		if (flag == 1) {
			//����Ҫ�����
			if (jump < count - 2) {
				//��Ҫ�������ڱ���С����
				j = 0; temp = 0;
				for (j = 0; answer[j] != '\0'; j++) {
					if (answer[j] == '.') {
						continue;
					}
					printf("%c", answer[j]);
					if (temp == jump) {
						printf(".");
					}
					temp++;//���ƴ�ӡ��
				}
			}
			else
			{
				//����ҪС����
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
			//��ǰ��
			printf("0.");
			for (j = 0; j < jump - 1; j++) {
				//��ӡ������0
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