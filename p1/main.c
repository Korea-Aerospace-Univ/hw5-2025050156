#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, k = 0;
	bool found = false;

	int A = 900, B = 750, C = 200;

	int N; scanf("%d", &N);

	for(i=1; i*A<=N; i++)
		for(j=1; j*B<=N; j++)
			for(k=1; k*C<=N; k++)
				if(N - i * A - j * B - k * C == 0 && !(j % 2) && (k < i || k < j)) {
					printf("%d %d %d\n", i, j, k);
					found = true;
				}

	if(!found) printf("none");

	return 0;
}
