#include <stdio.h>
int main() {
	float a, b;
	float div;
	printf("Input your numbers:\n");
	scanf_s("%f %f", &a, &b);
	if (b != 0)
		div = a / b;
	else
	{
		printf("Divided by zero");
		return 1;
	}
	printf("%.1f / %.1f = %.1f\n", a, b, abs(div));
	system("pause");
	return 0;
}
