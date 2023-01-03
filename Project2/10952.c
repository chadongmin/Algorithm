#include <stdio.h>

int main(void) {


	int a, b, c, d=-1;
	

	int num, start, result;

	int cnt = 0;

	scanf("%d", &num);

	result = num;

	while (result != d) {

		a = num / 10;

		b = num % 10;

		c = (a + b) % 10;

		d = (b * 10) + ((a + b) % 10);

		num = d;

		cnt++;


	}

	printf("%d", cnt);

	return 0;


}