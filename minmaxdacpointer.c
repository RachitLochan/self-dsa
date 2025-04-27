#include<stdio.h>
int minmax(int a[],int start, int end,int *min,int *max){
    int min1,max1,min2,max2,mid;
    mid=(start+end)/2;
if (start==end){*min=*max=a[start];return 0;}
    
if (start==end-1){
    if (a[start]>a[end]){*max=a[start];*min=a[end];return 0;}
    else{*max=a[end];*min=a[start];return 0;}
    }

else
{
    minmax(a,start,mid,&min1,&max1);
    minmax(a,mid+1,end,&min2,&max2);
}
if (max1>max2){*max=max1;}
else{*max=max2;}
if (min1<min2){*min=min1;}
else{*min=min2;}
return 0;
}
int main(){int min,max;
    int a[] = {1,5,2,9,4,3,6,8,7};
    minmax(a,0,8,&min,&max);
    printf("the min is %d the max is %d",min,max);
    
}
