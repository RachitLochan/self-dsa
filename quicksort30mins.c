#include<stdio.h>
int pivot(){}
int quicksort(int a[],int start,int end){

int i = start;
int j = start;
int p = end;
if (start >= end) return 0;//base case in recursion dudh gpt told sadly 

for (j = start; j < end ; j++)
{
    if (a[j]<a[p]) //my full on all logic was corrct but i was doing i with p insted of j
    {
        if (a[i]>a[j])
        {
            int temp =a[i];
            a[i]=a[j];  
            a[j]=temp;
        }
        i++;
    }
}
int temp=a[i];
a[i]=a[p];
a[p]=temp;
int pivot=i;
quicksort(a,start,pivot-1); // in my logic i was passing pivot as 4th aregument due to too much doing prolog lol
quicksort(a,pivot+1,end);
    return 0;
}
int main(){
    int a[] = {1,5,2,9,4,3,6,8,7};
    quicksort(a,0,8);
    for (int i = 0; i < 9; i++)
    {
        printf("%d",a[i]);
    }
}
