#include<stdio.h>
#include<algorithm>
int main() {
	int a[11], b[11], i, aScore = 0, bScore = 0, lastWin = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		scanf("%d", &b[i]);
	}

	for (i = 0; i < 10; i++) {
		if (a[i] > b[i]) {
			aScore += 3;
			lastWin = 1;
		}
		else if (b[i] > a[i]) {
			bScore += 3;
			lastWin = 2;
		}
		else {
			aScore++;
			bScore++;
		}
	}

	printf("%d %d", aScore, bScore);
	if (aScore == bScore) {
		if (lastWin == 0)
			printf("D");
		else if (lastWin == 1)
			printf("A");
		else
			printf("B");
	}
	else if (aScore > bScore) {
		printf("A");
	}
	else {
		printf("B");
	}
}