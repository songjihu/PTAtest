/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;
	int flag = 0;
	while (scanf("%d %d", &a, &b) != EOF) {
		//��������
		if (b != 0) {
			//���������
			if (flag == 0) {
				printf("%d", a * b);//��һ�β���ӡ�ո�
			}
			else printf(" %d", a * b);
			printf(" %d", b - 1);
			flag = 1;
		}
		
	}
	if (flag == 1) {
		printf("0 0");
	}
	
	return 0;
}
*/