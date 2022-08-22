#include<stdio.h>
void main(){
    int a1,a2,temp,i;
    printf("Enter the Number of Elements for First Array: ");
    scanf("%d",&a1);
    printf("Enter the Number of Elements for Second Array: ");
    scanf("%d",&a2);

    int arr3[a1+a2];
    printf("Enter the Elements for First Array\n");
    for (i=0;i<a1+a2;i++){
        if (i==a1) printf("Enter the Elements for Second Array\n");
        scanf("%d",&arr3[i]);
    }
    for (i=0;i<a1+a2-1;i++)
        for (int j=0;j<a1+a2-i-1;j++){
            if (arr3[j]>arr3[j+1]){
                temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }
        }
    printf("Merged Array in Ascending Order:\n");
    for (i=0;i<a1+a2;i++) printf("%d ",arr3[i]);
}