#include <stdio.h>
#include <cs50.h>
#include <string.h>

int
main(void) {
	int n;
	do {
		printf("Height: ");	
		n = GetInt();
	}
	while ((n < 0) || (n > 23));
	string space = " ";
	string hash = "#";

	for (int i=1; i<=n; i++) {
		int j = 1;
		while (j<=n-i) {
			printf("%s", space);
			j++;
		}
		j = 1;
		while (j<=i+1) {
			printf("%s", hash);
			j++;
		}
		printf("\n");
	}
}

/*
5
    ## 4s 2h
   ### 3s 3h
  #### 2s 4h
 ##### 1s 5h
###### 0s 6h
*/