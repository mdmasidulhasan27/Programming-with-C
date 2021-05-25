#include<stdio.h>
int main()
{
    int A,B,C,result;
    A=200;
    B=52;
    result=A+B;
    printf("the addition of %d and %d is:%d\n",A,B,result);
    A=100;
    result = A - B;
    printf("the substraction of %d and %d is: %d\n",A,B,result);
    printf("value of C :%d\n",C);
    C = 10;
    printf("value of C :%d\n",C);
    result=A+B+A-C;
    printf("the reslt of A+B+A-B is: %d\n",result);
    return 0;
}
