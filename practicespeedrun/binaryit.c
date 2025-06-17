#include<stdio.h>
int bs(int arr[],int size,int find){
    int mid=1;
    int start=0;
    int end=size-1; //always size-1 always always always plsesesese
if (mid==size)
{
    if (arr[start]==find)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
while (start<=end)
{mid=(start+end)/2;  // dont confuse end and size pleas eman
    if (find==arr[mid])
    {
        printf("elemnet found at %d ",mid);
        return 1;
    }
    if (find<arr[mid])
    {
        end=mid;
    }
    if(find>arr[mid])
    {
        start=mid+1;
    }
    
}
return 0;

}
int main(){
int arr[]={1,2,4,6,8,9,10,69,79,89};
int size = sizeof(arr)/sizeof(arr[0]);
bs(arr,size,6);

}