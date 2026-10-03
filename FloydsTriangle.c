#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int k = 1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("\t%d",k++);
        }
        printf("\n");
    }
    return 0;
}