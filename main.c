#include <stdio.h>

int main(void) {
    int m, n, i, j;
    printf("digite m para linhas \n");
    scanf("%d", &m);
    printf("digite n para coluna \n");
    scanf("%d", &n);
    int A[m][n];

    printf("inserir elementos da matriz a \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; i++) {
            printf("digite o valor para posicao [%d][%d]",i,j);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; i++) {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }



return 0;
}