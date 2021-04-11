#include <stdio.h>
using namespace std;

int main() {
	float h, b, c, s;
	scanf("%f %f %f %f", &h, &b, &c, &s);
	float result = h * b * c * s;
	printf("%.1f MB", result / (8 * 1024 * 1024));
	return 0;
}