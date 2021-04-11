#include <stdio.h>
using namespace std;

int main() {
	float h, w, b;
	scanf("%f %f %f", &h, &w, &b);
	float result = h * w * b;
	printf("%.2f MB", result / (8 * 1024 * 1024));
	return 0;
}