#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	char str[102];
	int answer[12];
	int n = 0, i = 0, j = 0;
	scanf("%d", &n);// ‰»În,–°”⁄10
	for (i = 0; i < n; i++) {
		scanf("%s", str);
		for (j = 0; str[j] != '\0'; j++) {
			if (str[j] != 'P' || str[j] != 'A' || str[j] != 'T') {
				answer[i] = 0;
			}
		}
		answer[i] = 0;

	}

	return 0;
}
