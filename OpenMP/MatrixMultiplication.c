#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define R1 3 // number of rows in Matrix-1
#define C1 4 // number of columns in Matrix-1
#define R2 4 // number of rows in Matrix-2
#define C2 5 // number of columns in Matrix-2
 
void multiplyMatrix(int m1[][C1], int m2[][C2])
{
    int result[R1][C2];
    double start_time = omp_get_wtime(); 
 
    printf("Resultant Matrix is:\n");
 
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;
 
            for (int k = 0; k < R2; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
 
            printf("%d\t", result[i][j]);
        }
 
 
        printf("\n");
    }
    
    double end_time = omp_get_wtime(); // Fin del cron�metro
    double elapsed_time = end_time - start_time;
    printf("Tiempo de ejecuci�n: %f segundos\n", elapsed_time);
        
}
 
// Driver code
int main()
{
    // R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these
    // values in MACROs)
    int m1[R1][C1] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
 
    int m2[R2][C2] =  {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
 
    // if coloumn of m1 not equal to rows of m2
    if (C1 != R2) {
        printf("The number of columns in Matrix-1 must be "
               "equal to the number of rows in "
               "Matrix-2\n");
        printf("Please update MACROs value according to "
               "your array dimension in "
               "#define section\n");
 
        exit(EXIT_FAILURE);
    }
 
    // Function call
    multiplyMatrix(m1, m2);
 
    return 0;
}