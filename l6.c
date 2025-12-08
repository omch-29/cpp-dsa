#include<stdio.h>
#include<math.h>
int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
int main(){
    int a,b;
    printf("\nEnter numbers:");
    scanf("%d%d",&a,&b);
    printf("GCD(%d,%d)=%d",a,b,gcd(a,b));
    
}