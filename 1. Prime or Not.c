#include<stdio.h>
int main()
{
    int i, n, f=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i=2; i<n; i++){
        if(n%i==0)
            f++;
        break;
    }
    if(f==0){
        printf("%d is a Prime Number", n);
    }
    else{
        printf("%d is Not a Prime Number", n);
    }
}
