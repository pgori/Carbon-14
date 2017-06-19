#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int * dateRange(int conc, int err){
	double lower = (conc + err)/10000.0;
	double upper = (conc - err)/10000.0;
	static int r[2];
	r[0] = (int) (log(lower)*8267) *-1;
	r[1] = (int) (ceil(log(upper)*8267)) *-1;
	return r; 
}

int main() {
	int *range;
	range = dateRange(5000, 100);
	printf("%d\n", *(range + 0));
	printf("%d\n", *(range + 1));
	
	return (0);
}
