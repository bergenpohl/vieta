#include <stdio.h>
#include <math.h>

int	main() {
	double	pi;
	double	res;
	double	last;

	res = 1;
	last = sqrt(2);
	for (unsigned int i = 0; i < 30; i++) {
		res *= (last / 2);
		last = sqrt(2 + last);
	}
	pi = 2 / res;
	printf("pi: %.30f\n", pi);
	return (0);
}

