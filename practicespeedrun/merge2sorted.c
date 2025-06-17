#include<stdio.h>
int merge(int a[],int b[],int c[],int size1,int size2,int size3){
    int j=0;int k=0;int C=0;
    while (j<size1 && k<size2) // this is && or bro 
    {
    
        if (a[j]<=b[k])
        {
            c[C]=a[j];
            j++;C++;//c++lol first use i gess
        }
        else
        {
            c[C]=b[k];
            k++;C++;
        }
        
    }if (j>=size1)
    {
        for (int p =k ; p < size2; p++)
        {
            c[C]=b[p];
            k++;
        }
        
    }
    if (k>=size2)
    {
        for (int p =j ; p < size1; p++)
        {
            c[C]=a[p];//insted coud have used a simple while lopp why so bother lol
            j++;
        }
        
    }
    for ( int i = 0; i < size3; i++)
    {
        printf("%d ",c[i]);
    }
    
    return 1;
}
int main(){
    int a[]={1,4,6,7,9,30,60,70};
    int b[]={2,3,5,8,10,20,40,50};
    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);
    int size=size1+size2;
    int c[size];
    merge(a,b,c,size1,size2,size);
}