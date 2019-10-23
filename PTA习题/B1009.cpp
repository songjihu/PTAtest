/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reverse(char a[], int start, int end) {
	
	int i = 0;
	char t;
	for (i = start; i <= (start + end) / 2; i++) {
		t = a[i];
		a[i] = a[end + start - i];
		a[end + start - i] = t;
	}
	return;
}

int main() {

	int n = 0;
	int i = 0, j = 0;
	int start = 0, end = 0;
	char str[100];
	for (i = 0; i < 100; i++) {
		str[i] = '0';
	}

	
	for (i = 0; i < 100; i++) {
		scanf("%c", &str[i]);
		if (str[i] == '\n') {
			break;
		}
	}

	for (i = 0; str[i]!='\n'; i++) {
		n++;
	}

	reverse(str, 0, n - 1);

	end = 0;
	for (i = 0; i < n; i++) {
		start = i;
		end = i;
		while (str[end] != ' ' && str[end] != '\n') {
			end++;
		}
		end--;
		reverse(str, start, end);
		i = end + 1;
	}
	str[n] = '\0';

	printf("%s", str);

	return 0;
}
*/