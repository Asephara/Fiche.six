#include <stdio.h>
int main(){
    int A[2][3]={{3,4,5},{6,7,8}};
    int B[2][3]={{9,10,11},{12,13,14}};
    int C [2][3];

    for ( int i= 0; i<2; i++){
        for ( int j=0; j<3; j++){
            C[i][j]=0;
            for ( int k= 0; k<3; k++){
                C[i][j] += A[i][k]* B[k][j];

            }
        }
    }
   printf("Résultats de la multiplication est %d\n",C[0][0]);
   return 0;
}