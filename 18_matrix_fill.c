#include<stdio.h>

int main(){
    int m,n,i,j;
    printf("Enter the Order of Matrix: ");
    scanf("%d%d",&m,&n);
    int mat[m][n];

    for ( i = 0; i < m; i++)
        for (j=0;j<n;j++){
            if (j>i) mat[i][j]=1;
            else if(i==j) mat[i][j]=0;
            else mat[i][j]=-1;
        }

    for ( i = 0; i < m; i++){
        for (j=0;j<n;j++){
            if (mat[i][j]<0) printf(" %d",mat[i][j]);
            else printf("  %d",mat[i][j]);
        }
        printf("\n");
    }

}