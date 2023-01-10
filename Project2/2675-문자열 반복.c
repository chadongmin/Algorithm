#include <stdio.h>
int main(void) {

	int testcase, num;
	char S[20];
	char result[60];

	scanf("%d", &testcase);

	for (int i = 0; i < testcase; i++) {
		scanf("%d %s",&num,S);

		for (int i = 0; S[i] != '\0'; i++) {
			
			for (int k = 0; k < num; k++) {
				printf("%c", S[i]);
			}
			
		}
		printf("\n");

		
		
	}
	return 0;
}