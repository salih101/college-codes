#include<stdio.h>

int main(){
    int i,j,m,n;
    printf("Enter the Order of Matrix: ");
    scanf("%d%d",&m,&n);
    int mat[m][n];
    printf("\nEnter Matrix Elemets\n");
    
    for (i=0;i<m;i++)
        for (j=0;j<n;j++){
            printf("\nEnter the Value for a[%d][%d]:",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    
    printf("\nEnterd Matrix:-\n");

    for (i=0;i<m;i++){
        for (j=0;j<n;j++) printf("%d ",mat[i][j]);
        printf("\n");
    }

    printf("Transpose of Matrix:-\n\n");

    for (i=0;i<n;i++){
        for (j=0;j<m;j++) printf("%d ",mat[j][i]);
        printf("\n");
    }
}