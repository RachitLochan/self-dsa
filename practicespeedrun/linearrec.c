#include<stdio.h>
int search(int arr[],int size,int find,int i)
{   
    

    if (i>size)
    {   printf("element not found sadly sorry");
        return 0;
            
    }
                                                 /*else if(arr[i]==find) { printf("elemnt found at %d locastion",i); return 1;}*/ //understand this for mew please what do to make this ahppen a ut0omatically 
    else
    {if (arr[i]==find)
    {printf("found at %d",i);
        return 1;
    }
    else
    {
        search(arr,size,find,i+1);
    }
    }
    
    
return 0;
};


int main(){
int arr[]={6,65,465,65,4,48,984,56,65,489,9,6,4654,9,94,65,6,4,8,6,654};
int size= sizeof(arr)/sizeof(arr[0]);
//printf("%d",size); try this with int size= sizeof(arr) only asad see if confused 
search(arr,size,984,0);

}