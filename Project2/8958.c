#include <stdio.h>	
#include <string.h>
int main(void) {

	char quiz[81];
	int n;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {	

		int sum = 0;
		int cnt = 1;
		
		scanf("%s", quiz);

		for (int k = 0; k < strlen(quiz); k++) {
			
			if (quiz[k] == 'O') {

				sum += cnt;
				cnt++;

			}
			else 				
				cnt = 1;					
		}	
		printf("%d\n", sum);	
		
	}	

	return 0;
}