/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
    int arr[1000][1000];
	for (int i =0; i<=n;i++) {
		for (int j =0;j<=i; j++) {
			if (j==0 || j==i ) {
				arr[i][j]=1;
				printf("%d ",arr[i][j]);
			} else if (j>0 && j<i) {
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
				printf("%d ",arr[i][j]);
			}
		} printf("\n");
	} 
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
