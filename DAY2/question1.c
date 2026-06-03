#include <stdio.h>
int main(void){
    int num,sum=0,rem;
    printf("enter a number");
    scanf("%d",&num);
    while (num!=0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;}
    
    printf("sum of digits of the number is %d",sum);
return 0;

}