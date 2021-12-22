#include <stdio.h>
#include <stdlib.h>

int factorial(int k){
if(k<2){
    return 1;
}
else{
    return k*factorial(k-1);
}

}
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("\n%d!=%d",x,factorial(x));
    return 0;
}
