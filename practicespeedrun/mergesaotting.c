#include<stdio.h>
void merge(int a[],int b[],int c[],int size1,int size2,int size3){
    int j=0;
    int k=0;
    int C=0;
    
    
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
        
    }
    if (j>=size1)
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
}
void mergesort(int arr[],int size){
    int mid=(size)/2;
    int left[mid];
    int right[size-mid];
    if (size<=1)
    {
        return;
    }
    for (int i = 0; i < mid; i++)
    {
       left[i]=arr[i];
    }
    for (int i = 0; i < size-mid; i++)
    {
        right[i]=arr[size-mid+i];
    }
    mergesort(left,mid);
    mergesort(right,size-mid);
    merge(left,right,arr,mid,size-mid,size);
}
int main(){
    int arr[]={9,1,7,8,3,7,2,7141,9,8,52,27,21,3,0,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    //cooked but still did this dono how far i can go more now doug for real 01;46 now
}