#include <stdio.h>
int main() {

	char alp[26];
	int result = 0;
	
	scanf("%s", alp);

	for (int i = 0; alp[i] != '\0'; i++) {

		if (alp[i] <= 76) {
			if (alp[i] <= 70) {
				if (alp[i] <= 67) {
					//2
					result += 3;
				}
				else {
					//68 69 70
					result += 4;
				}
			}
			else {
				if (alp[i] <= 73) {
					//71 72 73중에 하나
					result += 5;

				}
				else {
					//74 75 76
					result += 6;
				}
							}
		}
		else {
			
			if (alp[i] <= 83) {

				if (alp[i] <= 79) {
					//77 78 79중에 하나
					result += 7;

				}
				else {
					//80 81 82 83중에 하나
					result += 8;
				}
				

			}
			else {
				if (alp[i] <= 86) {
					//84 85 86중에 하나
					result += 9;
				}
				else {
					//87 88 89 90중에 하나
					result += 10;
				}

			}
		}
		
		//printf("%d\n", result);
	}
	printf("%d", result);
	return 0;
}