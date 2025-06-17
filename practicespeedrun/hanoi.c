#include<stdio.h>
void hanoi(char start,char middle,char goal,int n){
    if (n==1)
    {
        printf("move 1 number  %c from %c to \n",n,start,goal);
        return;
    }
    hanoi(start,goal,middle,n-1);printf("move %d number %c from %c to \n",n,start,goal);// move all upper ones to middle
    hanoi(middle,start,goal,n-1);//move all upper ones to gaol now from middle
   

};
int main(){
    // unsed lol char s,m,g; 
hanoi('s','m','g',4);
}