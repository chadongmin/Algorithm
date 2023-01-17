#include <stdio.h>
int main() {

	int fix, var, sale;
	int x ;

	scanf("%d %d %d", &fix, &var, &sale);

	if (sale > var) {
		x = fix / (sale - var);
		printf("%d", x + 1);

	}
	else
		printf("-1");

	
	

	return 0;
}