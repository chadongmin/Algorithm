#include <stdio.h>

int num = 1;
int d(int num) {
	int num1, num2, num3, num4;
	int result;

	if (num < 100) {
		result = num + (num / 10) + (num % 10);
		return result;
	}
	else if (num >= 100 && num < 1000) {
		num1 = num / 100;
		num2 = (num % 100) / 10;
		num3 = (num % 100) % 10;

		result = num + num1 + num2 + num3;

		return result;
		//result = num + (num / 100) + (num % 10) + (num % 10);
	}	//result = num / 10;
	else if (num >= 1000 && num < 10000) {
		num1 = num / 1000;
		num2 = (num / 100) % 10;
		num3 = (num / 10) % 10;
		num4 = (num % 10);

		result = num + num1 + num2 + num3 +num4;

		return result;
		//result = num + (num / 100) + (num % 10) + (num % 10);
	}	//result = num / 10;
	
	//printf("%d\n", result);
}




int main(void) {
	int check;
	int arr[10000] = { 0 };
	int result[10000] = { 0 };
	int result_arr[10000] = { 0 };
	
	
	for (int i = 0; i < 10000; i++) {

		check = d(i);

		if (check < 10000) {
			result[check] = 1;
		}
		
	}
	for (int i = 0; i < 10000; i++) {

		if (result[i] != 1) {
			printf("%d\n", i);
		}
		
		
	}
/////////////


	return 0;
}