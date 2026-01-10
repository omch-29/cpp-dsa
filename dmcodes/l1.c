#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Below are logical opeartions on numbers %d and %d\n",a,b);
    printf("logical and=%d\n",a&b);
    printf("logical OR=%d\n",a||b);
    printf("logical XOR=%d\n",a^b);
    printf("Right shift of %d by 2 bits=%d",a,a>>2);
}