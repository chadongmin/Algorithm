#include <stdio.h>
int main(void) {

	char word[1000000];
	int num = 65;
	int result[26] = { 0 };
	int max = -1;
	int alp = 0;
	int cnt = 0;

	scanf("%s", word); //�ܾ �Է¹޴´�.

	for (int i = 0; word[i] != '\0'; i++) {  //�Է¹��� �ܾ�� �� ���� ���� �� ���� ��ĵ

		for (int k = num; k < 91; k++) {

			if (word[i] == k || word[i] == (k + 32)) {  //� ���ĺ����� Ȯ�� �� ī��Ʈ ����
				
				result[k - 65]++;

			}
		}
	}
	for (int i = 0; i < 26; i++) {
		
		if (result[i] > max) {
			max = result[i];
			alp = i;	
		}
		
	}
	for (int i = 0; i < 26; i++) {

		if (max == result[i])
			cnt++;
	}
	if (cnt > 1) {
		printf("?\n");
	}
	else
		printf("%c", alp + 65);
	
	
	

	return 0;
}