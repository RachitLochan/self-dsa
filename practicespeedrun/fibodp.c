#include<stdio.h>
int fibo(int n){
int f[n];
f[0]=0;
f[1]=1;
for (int i = 2; i <= n; i++)
{
    f[i]=f[i-1]+f[i-2];
}
printf("your answer is %d",f[n]);
return f[n];
}
int main(){int n;
    printf("enter number to find ");
    scanf("%d",&n);
    fibo(n);

}// man was the fastest code no erroe too lol 18062025