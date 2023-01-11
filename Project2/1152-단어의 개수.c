#include <stdio.h>
#include <string.h>

int main(void) {

	char sen[1000000];
	int cnt = 0;
	int num = 0;
	
	scanf("%[^\n]s", sen);

	for (int i = 0; sen[i]!='\0'; i++) {

		num++;
		/*if (i > 0 && sen[i] == ' ' && sen[i - 1] == ' ')
			break;*/

		if (sen[i] == ' ') {
			cnt++;

		}		
		
	}
	
	if (sen[0] == ' ' && sen[num-1] == ' ')
		printf("%d", cnt - 1);
	else if (sen[0] == ' ')
		printf("%d", cnt );
	else if (sen[num-1] == ' ')
		printf("%d", cnt);
	else 
		printf("%d", cnt+1);

	
	


	return 0;
}