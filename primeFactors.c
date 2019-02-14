#include <stdio.h>

int prime() { //outputs the next prime with each call.
	static int prime = 1;
	int counter1 = prime;
	while (1) {
		counter1++;
		int counter2 = 2;
		for (counter2; counter2 <= counter1; counter2++) {
			if (counter1 % counter2 != 0) 
				continue;
			else
				break;
		}
		if (counter2 == counter1) {
			prime = counter1;
			return prime;
		}
	}
}

void factorize(int input) {
	int num = input;
	printf("%d\n", num);
	while (num > 1) {
		int currentP = prime();
		while (num % currentP == 0) {
			num /= currentP;
			printf("%dx%d\n", currentP, num);
		}
	}
}

int input() {
	int user;
	printf("Enter integer: ");
	scanf("%d", &user);
	return user;
}

int main( void ) {
	factorize(input());
	return 0;
}
