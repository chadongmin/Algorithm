#include <stdio.h>
int main(void) {

	char num1[4];
	char num2[4];


	scanf("%s %s", num1, num2);

	if (num1[2] == num2[2]) { //상수 식 계산법으로 젤 뒷자리가 같을 때

		if (num1[1] == num2[1]) { // 뒤에서 두번째 자리가 큰 수를 비교 

			if (num1[0] > num2[0]) { // 뒤에서 두 번째 자리수도 같다면 뒤에서 세번째 자리 수를 비교
				for (int i = 2; i > -1; i--) {
					printf("%c", num1[i]);
				}
			}
			else
				for (int i = 2; i > -1; i--) {
					printf("%c", num2[i]);
				}
		}
		else if (num1[1] > num2[1]) {
			
			for (int i = 2; i > -1; i--) {
				printf("%c", num1[i]);
			}
		}
		else
			for (int i = 2; i > -1; i--) {
				printf("%c", num2[i]);
			}

	}
	else if (num1[2] > num2[2]) {

		for (int i = 2; i > -1; i--) {
			printf("%c", num1[i]);
		}
		
	}
	else 
		for (int i = 2; i > -1; i--) {
			printf("%c", num2[i]);
		}

	return 0;
}