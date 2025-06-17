#include<stdio.h>

int search(int arr[],int size,int find){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==find)
        {
            printf("element found at %d index",i);
            return 1;
        }
        
    }
    printf("element bniort founnd");
    return 0;
};

int main(){
int arr[]={1,7,34,79,3,7,34,67,99,32,798,34,3,7,0,3314,7,3,2};
int size=sizeof(arr);
search(arr,size,0);

}