#include<stdio.h>
#include<math.h>
int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
int main(){
    int a,b;
    printf("enter elements:");
    scanf("%d%d",&a,&b);
    printf("gcd of %d and %d is: %d",a,b,gcd(a,b));
}