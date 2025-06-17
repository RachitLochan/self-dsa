#include<stdio.h>
int power(int n,int m){
    int mn=1;
if (m==1)
{
    return n;
}
if (m==0){return 1;}
if (m%2!=0)
{//i kjnow i have done this earlier but still dude daym mna daymn to me ma man

    mn=n;// eg 2 to power 7 is 2 to power 3,3 and 2^1 also so 3+3+1=7 }
int y=power(n,m/n);
//this thing leanred new 
mn*=y*y;//why multiply 2 times and make 2 stake just take the left half only as it is repetaive so all right half is gone of tree
return mn;
}
int main(){ int m,n;
    printf("entrer oyu number to pwer");
    scanf("%d",&m);
    printf("enter power ");
    scanf("%d",&n);
    printf("this is your power %d",power(m,n));
}