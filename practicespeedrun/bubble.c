#include<stdio.h>
int bubble(int arr[],int size){
for ( int i = 0; i < size-1; i++)
{
    for (int j = 0; j < size-i-1; j++)//same dp wala stle as you do fron stat agin so jnot eqal to i but 0 
    {
        if (arr[j]>arr[j+1])
        {
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        
    }
    
}

return 0;


}
int main (){
int arr[]={8,5,8,72,8,8,2,5,7,9,8,298,95,3,5};
int size = sizeof(arr)/sizeof(arr[0]);
bubble(arr,size);

printf("now the sorted array is  ;-");
for (int i = 0; i < size; i++)
{
    printf(" %d ",arr[i]);
}

}