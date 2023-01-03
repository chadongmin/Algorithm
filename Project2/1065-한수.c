#include <stdio.h>

int hansoo(int num) {

	int a, b, c;
	

	if (num < 100)

		printf("%d", num);

	else
	{
		int cnt = 99;

		for (int i = 100; i <= num; i++) {


			a = i / 100;
			b = (i % 100) / 10;
			c = (i % 100) % 10;

			if ((c - b) == (b - a))
				cnt++;
		}
		printf("%d", cnt);

	}
		
}
int main(void) {

	
	int num;
	scanf("%d", &num);
	hansoo(num);
}
