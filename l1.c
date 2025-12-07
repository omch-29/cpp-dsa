#include<stdio.h>
int main(){
    int a, b;

    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);

    printf("AND = %d\n", a & b);
    printf("OR = %d\n", a | b);
    printf("NOT of a = %d\n", ~a);
    printf("NOT of b = %d\n", ~b);
    printf("xor of a and b %d:",a^b);
    printf("left shift of a by 2bytes:%d",a<<2);

    return 0;
}
