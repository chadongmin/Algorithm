#include <stdio.h>
#include <string.h>
int main() {

	int testcase;
	char word[101] = { 0 };
	int alpa[26] = { 0 };
	int cnt = 0;
	int result = 0;

	scanf("%d", &testcase);



	for (int i = 0; i < testcase; i++) { //�Է��� �׽�Ʈ ���̽� Ƚ�� ��ŭ for���� ����


		scanf("%s", word);

		for (int j = 0; j < 26; j++) {

			alpa[j] = 0;				//���ĺ� - alpa �迭�� 0���� �� �ʱ�ȭ

		}
		int len = strlen(word);

		for (int k = 0; k < len; k++) {

		
			char letter = word[k];

			if (alpa[letter - 'a'] == 0) {

				alpa[letter - 'a'] = 1;
			}
			else {

				if (word[k-1] != word[k]) { //�׷�ܾ �ƴ�

					cnt++;
					break;
				}
			
			}
		
		}
	}
	printf("%d", testcase-cnt);


	return 0;
}