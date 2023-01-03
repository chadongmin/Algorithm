#include <stdio.h>

int main(void) {

	int n;
	int max = 0;
	float avg;
	float sum = 0;
	float newscore[1000] = { 0 };

	scanf("%d", &n);
	int score[1000] = { 0 };
	
	for (int i = 0; i < n; i++) {

		scanf("%d",&score[i]);
		
		if (score[i] > max) {

			max = score[i];		
		}	
		
	}

	float change[1000] = { 0 };
	

	for (int i = 0; i < n; i++) {
	

		sum += (float)score[i] / max * 100;
		

	}
	
	avg = sum / n;
	printf("%f", avg);
	

	return 0;
}