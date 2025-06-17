#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int qs(int arr[],int start,int end){
    if (start>=end)
    {
        return 0;
    }
    
    int i=start; int j; int p=end;
    for ( j = start; j <= end; j++)
    {   if (arr[j]<arr[p])
    {
        if (arr[i]>arr[j])
        {
            swap(&arr[i],&arr[j]);
          
        }  i++;
        
    }   
    }
    swap(&arr[i],&arr[p]);
    qs(arr,start,i-1);
    qs(arr,i+1,end);
return 1;
}
int main(){
    int arr[]={69,9,1,7,5,986,74,7,32,4,73,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    qs(arr,0,size-1);
    for (int i = 0; i < size; i++)
    {if (i==size-1)
    {
        printf("%d",arr[i]);
        return 0;
    }
    
        printf("%d ,",arr[i]);
    }
    
}