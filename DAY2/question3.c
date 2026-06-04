#include <stdio.h>
#include<stdlib.h>
int main(){
    int num,temp,remainder;
    long long product=1;
printf("enter an integer");
if (scanf("%d",&num)!=1){
    printf("invalid input.\n");
    return 1;
}
temp=abs(num);
if (temp==0){
    product=0;
}
else{
    while(temp>0){
        remainder=temp%10;
        product=product*remainder;
        temp=temp/10;
    }
}
printf("the product of the digit of %dis: %lld\n",num,product);
return 0;
}