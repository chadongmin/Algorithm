#include <stdio.h>

int main(void) {

	int a, b, c;
	int i = 0;

	scanf("%d %d %d", &a, &b, &c);

	int num = a * b * c;
	int arr[10] = { 0 };

	while (num > 0){

		arr[num % 10]++;

		num = num / 10;
		

		
	}
	for (int i = 0; i < 10; i++) {

		printf("%d\n", arr[i]);

	}


	return 0;
}