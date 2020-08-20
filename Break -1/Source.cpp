#include <stdio.h>
int main() {
	int x, y = 0;
	while (1) {
		scanf_s("%d", &x);
		if (x == -1) { break; }
		y += x;
	}
	printf("%d\n", y);
	printf("End of Program");
	return 0;
}