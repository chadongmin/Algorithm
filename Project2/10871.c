#include <stdio.h>

int main(void) {

	int num, x;

	int k;

	
	scanf("%d %d", &num, &x);

	for (int i = 1; i <= num; i++) {

		scanf("%d", &k);

		if (k < x){

			printf("%d ", k);
		}

		

		
	}



	return 0;
}
