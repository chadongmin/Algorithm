#include <stdio.h>
int main() {

	char word[100];
	int cnt = 0;
	int cro = 0;
	int cro_3 = 0;

	scanf("%s", word);
	for (int i = 0; word[i] != '\0'; i++) {

		
		cnt++;
		if (i >= 1) {

			if (word[i] == '=' && word[i - 1] == 'c')
				cro++;
			else if (word[i] == '-' && word[i - 1] == 'c')
				cro++;
			else if (word[i] == '-' && word[i - 1] == 'd')
				cro++;
			else if (word[i] == 'j' && word[i - 1] == 'l')
				cro++;
			else if (word[i] == 'j' && word[i - 1] == 'n')
				cro++;
			else if (word[i] == '=' && word[i - 1] == 's')
				cro++;
			else if (word[i] == '=' && word[i - 1] == 'z')
				cro++;
		}

		if (i >= 2) {

			if (word[i] == '=' && word[i - 1] == 'z' && word[i - 2] == 'd') {

				cro_3++;
				cro--; // 중복제거
			}

		}
		
	}
	int result = cnt - cro - (cro_3 * 2);
	printf("%d\n", result);

	//printf("%d %d %d", cnt, cro, cro_3);


	return 0;
}