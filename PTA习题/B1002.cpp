/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n = 102;
	int i = 0;
	char str[102];
	int num[102], all = 0, out_num[102];
	
	for (i = 0; i < n; i++) {
		num[i] = 0;
		str[i] = '*';
		out_num[i] = 0;
	}
	scanf("%s", str);
	//n = 0;
	for (i = 0; str[i]>='0'&&str[i]<='9'; i++) {
		num[i] = str[i] - '0';
		all += num[i];
	}
	int count = 0, temp = all;
	while (all != 0) {
		out_num[count] = all % 10;
		all = all / 10;
		count++;
	}
	for (i = count - 1; i >= 0; i--) {
		if (i<count-1) {
			printf(" ");
		}
		switch (out_num[i])
		{
		case 0: {
			printf("ling");
			continue;
		}case 1: {
			printf("yi");
			continue;
		}case 2: {
			printf("er");
			continue;
		}case 3: {
			printf("san");
			continue;
		}case 4: {
			printf("si");
			continue;
		}case 5: {
			printf("wu");
			continue;
		}case 6: {
			printf("liu");
			continue;
		}case 7: {
			printf("qi");
			continue;
		}case 8: {
			printf("ba");
			continue;
		}case 9: {
			printf("jiu");
			continue;
		}
		default:
			break;
		}
		
	}

	
	return 0;
}
*/
