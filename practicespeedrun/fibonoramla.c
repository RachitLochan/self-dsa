#include<stdio.h>
int fibon(int n){int x;
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    //return fibon(n)==fibon(n-1)+fibon(n-2); not corret as no assingment allowed in return ma man
return fibon(n-1)+fibon(n-2);
}
int main(){
    int n;
    printf("which term of bibonachi do you want man ? ");
    scanf("%d",&n);
    printf("your fibbonachi term is %d this my doug",fibon(n));
}