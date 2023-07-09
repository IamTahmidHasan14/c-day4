#include<stdio.h>
int main()
{
    int n,r,c;
    printf("Enter Number of Rows : ");
    scanf("%d",&n);
    for(r=1; r<=n; r++){
        for(c=r;c<=n;c++){
        printf("*");
    }
    printf("\n");
}
}
