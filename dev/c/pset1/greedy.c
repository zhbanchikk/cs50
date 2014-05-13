#include <stdio.h>
#include <cs50.h>
#include <math.h>

int
main(void) {
	int coins = 0;
	float n;
	do {
		printf("Enter amount in dollars (e.g. 2.89): ");	
		n = GetFloat();
	}
	while (n<=0.0);
	int usd;
	usd = round(n*100);
	
	while (usd > 0) {
		if (usd >= 25) {
			coins++;
			usd = usd - 25;
		}
		else if (usd >= 10) {
			coins++;
			usd = usd - 10;
		} 
		else if (usd >= 5) {
			coins++;
			usd = usd - 5;
		}
		else if ( usd >= 1) {
			coins++;
			usd = usd - 1;
		}
	}
	printf("number of coins is %d\n", coins);
}
