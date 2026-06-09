#include <stdio.h>
int main(){
    unsigned long long fact=1;
    printf("enter an integer");
    scanf("%d",&n);
    if(n<0)
    printf("error! factorial of a negative number does not exist");
else{
    for(i=1;i<=n;++i){
        fact*=i;
    }
    printf("factorial of %d=%llu",n,fact);
}
return 0;
}