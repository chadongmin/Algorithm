#include <stdio.h>	
#include <string.h>

int main(void) {

	int cnt = 0;
	char S[100]; //�Է¹��� ���ڿ�
	int result[26]; // ���ĺ�
	scanf("%s", &S);

	int len = strlen(S);
	
	for (int i = 0; i < 26;i++) {

		result[i] = -1;
	}
	//printf("%d", result[0]);

	

		for (int i = 97; i <= 122; i++) { //�Է¹��� ���ڿ��� char���̱� ������ a-z�� �ƽ�Ű�ڵ�� ��ȯ�Ͽ� 97~122�� ���Ѵ�

			for (int k = 0; k < len; k++) {

				if (i == S[k]) { // S[k]�� �Է��� ���ڿ��̰� i�� ���ĺ��̴�.

					result[S[k]- 97] = k;
					break; //�������� for �� Ż��
									
				}

			}

			
		}
	

	//printf("%d", result[0]);
	for (int i = 0; i < 26; i++) {

		printf("%d ", result[i]);

	}
	
	return 0;
}