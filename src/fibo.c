#include "../include/fibo.h"


/*fibonacci number calculator for ints
 *
 *	only works from nubers from 0 to 46, due to overflow issues.
 * */
int fibo(int n) {
	if (n < 2) return n;
	int n0 = 0;
	int n1 = 1;
	int n2;
	for(int i=2; i <= n; i++){
		n2 = n0 + n1;
		n0 = n1;
		n1 = n2;
	}
	return n2;
	
}




