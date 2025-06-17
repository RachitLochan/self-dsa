#include<stdio.h>
int max(int arr[],int low,int high,int *maxi){
    int max1;
    int max2;
    if (high==low)
    {   *maxi=arr[high];
        return 1;
    }
    if (high==low+1)
    {
        if (arr[high]>arr[low])
        {*maxi=arr[high];
            return 1 ;
        }
        else
        {
            *maxi= arr[low];
            return 1;
        }
        
    }
    int mid=(low+high)/2;
    max(arr,0,mid,&max1);//we haveto have to have to take & only even if we not takin *(as we assing only onese) to maintain pointer to pointer and not covert it int lol
    max(arr,mid+1,high,&max2);
    if (max1>max2)
    {
        *maxi=max1;
    }
    else
    {
        *maxi=max2;
    }
    return 0;
    
}
int main(){
int maxi;
int arr[]={6,65,465,65,4,48,984,56,65,489,9,6,4654,9,94,65,6,4,8,6,654};
int size= sizeof(arr)/sizeof(arr[0]);
max(arr,0,size,&maxi);//cause insise funtion we may update this 2 times so we neeed real  loaction
printf("the max is %d",maxi);
}