/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 0;
	int i = 0, j = 0, flag = 0, k = 0;
	char strA1[70], strA2[70], strB1[70], strB2[70];
	char temp = '0';
	char answer[70];
	for (i = 0; i < 70; i++) {
		strA1[i] = '0';
		strA2[i] = '0';
		strB1[i] = '0';
		strB2[i] = '0';
		answer[i] = '0';

	}

	scanf("%s", strA1); scanf("%s", strA2); scanf("%s", strB1); scanf("%s", strB2);

	flag = 0;
	for (i = 0; i < 70; i++) {
		if (strA1[i] == strA2[i]) {
			if (flag == 0 && strA1[i] >= 'A' && strA1[i] <= 'G') {
				//�� 1 ����ͬ��  ��дӢ����ĸ   �� 4 ����ĸ D������������
				flag = 1;
				answer[1] = strA1[i];
			}
			else
			{
				if (flag == 1 && ((strA1[i] >= 'A' && strA1[i] <= 'N')|| (strA1[i] >= '0' && strA1[i] <= '9')))
				{
					//�� 2 ����ͬ��  �ַ�           �� E �����ǵ� 5 ��Ӣ����ĸ��
					//����һ����ĵ� 14 ����ͷ������һ��� 0 �㵽 23 �������� 0 �� 9���Լ���д��ĸ A �� N ��ʾ��
					answer[2] = strA1[i];
					break;
				}
			}	
		}
	}

	//�� 1 ����ͬ��  Ӣ����ĸ       s �����ڵ� 4 ��λ�ã��� 0 ��ʼ�������ϣ������ 4 ����
	for (i = 0; i < 70; i++) {
		temp = strB1[i];
		if (((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z')) && temp == strB2[i]) {
			//printf("11111111  %d    11111111\n", i);
			if (i < 10) {
				answer[3] = '0'; answer[4] = i + 48;
			}
			else
			{
				answer[3] = i / 10 + 48;
				answer[4] = i % 10 + 48;
			}
			break;
		}
	}


	for (i = 1; i < 5; i++) {
		//printf("*%d  %c*", i,answer[i]);
	}

	//DAY
	switch (answer[1])
	{
	case 'A': printf("MON "); break;
	case 'B': printf("TUE "); break;
	case 'C': printf("WED "); break;
	case 'D': printf("THU "); break;
	case 'E': printf("FRI "); break;
	case 'F': printf("SAT "); break;
	case 'G': printf("SUN "); break;
	default:break;
	}

	//HH
	if (answer[2] <= '9') {
		printf("0%c:", answer[2]);
	}
	else
	{
		printf("%d:", answer[2] - 65 + 10);
	}

	//MM
	printf("%c%c", answer[3], answer[4]);


	return 0;
}
*/