#include <stdio.h>	
#include <string.h>

int main(void) {

	int cnt = 0;
	char S[100]; //입력받은 문자열
	int result[26]; // 알파벳
	scanf("%s", &S);

	int len = strlen(S);
	
	for (int i = 0; i < 26;i++) {

		result[i] = -1;
	}
	//printf("%d", result[0]);

	

		for (int i = 97; i <= 122; i++) { //입력받은 문자열은 char형이기 떄문에 a-z를 아스키코드로 변환하여 97~122와 비교한다

			for (int k = 0; k < len; k++) {

				if (i == S[k]) { // S[k]가 입력한 문자열이고 i는 알파벳이다.

					result[S[k]- 97] = k;
					break; //같아지면 for 문 탈출
									
				}

			}

			
		}
	

	//printf("%d", result[0]);
	for (int i = 0; i < 26; i++) {

		printf("%d ", result[i]);

	}
	
	return 0;
}