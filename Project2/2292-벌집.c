#include <stdio.h>
int main() {

	int num;
	int x = 1;
	int cnt = 0;
	int mult = 0;

	scanf("%d", &num);

	if (num == 1) {
		printf("1");
		return 0;
	}
	else

		while (1) {

			cnt++;
		
			mult = cnt * 6;
			x = x + mult;

			if (x >= num) {
				printf("%d", cnt + 1);
				break;
			}
		}	
	

	return 0;
}