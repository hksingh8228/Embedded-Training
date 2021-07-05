#include<stdio.h>
 
#include<math.h>
 
float detrminant(float[25][25], float);
 
void cofactors(float[25][25], float);
 
void trans(float[25][25], float[25][25], float);
 
main() {
 
	float a[25][25], n, d;
 
	int i, j;
 
	printf("Enter the order of the matrix:\n");
 
	scanf("%f", &n);
 
	printf("Enter the elements into the matrix:\n");
 
	for (i = 0; i < n; i++) {
 
		for (j = 0; j < n; j++) {
 
			scanf("%f", &a[i][j]);
 
		}
 
	}
 
	d = detrminant(a, n);
 
	printf("\nTHE DETERMINANT IS=%2f", d);
 
	if (d == 0)
 
	  printf("\nMATRIX IS NOT INVERSIBLE\n"); 
	else
 
	  cofactors(a, n);
 
}
 
float detrminant(float a[25][25], float k) {
 
	float s = 1, det = 0, b[25][25];
 
	int i, j, m, n, c;
 
	if (k == 1) {
 
		return (a[0][0]);
 
	} else {
 
		det = 0;
 
		for (c = 0; c < k; c++) {
 
			m = 0; n = 0;
 
			for (i = 0; i < k; i++) {
 
				for (j = 0; j < k; j++) {
 
					b[i][j] = 0;
 
					if (i != 0 && j != c) {
 
						b[m][n] = a[i][j];
 
						if (n < (k - 2))
 
						       n++; else {
 
							n = 0;
 
							m++;
 
						}
 
					}
 
				}
 
			}
 
			det = det + s * (a[0][c] * detrminant(b, k - 1));
 
			s = -1 * s;
 
		}
