#include<stdio.h>
int bs(int arr[],int high,int start,int find){
int mid=(start+high)/2;
if (start>high)
{
   return 0;
}
else{
if (arr[mid]==find)
{
    printf("element found at %d",mid);
    return 1;
}
else if (arr[mid]>find)//bruh else if is just else that has a if condition dude like lol
{
    bs(arr,mid-1,start,find);//remove mid we already know it not thrre bro
}
else
{
    bs(arr,high,mid+1,find);//remove mid we already know it not thrre bro
}
}
return 0;

}
int main(){

    int arr[]={1,2,4,6,8,9,10,69,79,89};
    int size = sizeof(arr)/sizeof(arr[0]);
    bs(arr,size,4,10);// i put 4 you put 0 wahtever 0 is put ideally 

}