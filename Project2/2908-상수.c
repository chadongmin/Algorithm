#include <stdio.h>
int main(void) {

	char num1[4];
	char num2[4];


	scanf("%s %s", num1, num2);

	if (num1[2] == num2[2]) { //��� �� �������� �� ���ڸ��� ���� ��

		if (num1[1] == num2[1]) { // �ڿ��� �ι�° �ڸ��� ū ���� �� 

			if (num1[0] > num2[0]) { // �ڿ��� �� ��° �ڸ����� ���ٸ� �ڿ��� ����° �ڸ� ���� ��
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