#include<stdio.h>
int binary(int array[],int start,int size,int target)
	{

	
	int i,j;
	i=start;
	j=size;
		if(i==j){if(array[i]==target) {printf("element size 1 so found at %d",i);return i;};}//i will make size 1 not 0 as a[0]is undefined //ok so if i remove %d",i it will print and return too what if i remove return i 
												// no loner int return type will the program not terminate
	else
		{
	
		int mid=(i+j)/2;
		if(array[mid]==target){printf("elemnt found at" );return mid;} // i removed return lets see how happens elemnt found at 3-697130273
		
		if(mid>target){return binary(array,start,mid-1,target);}
		
		else{return binary(array,(start+size)/2+1,size,target);} //on int less sapce lol
		
		printf("elemst not ingiven array");	
		return 0;
	
	
	
	
	
	
	
		} //kiyaha return 0?
	}
void main(){
int size,goal;
printf("enter size of array");
scanf("%d",&size);
int array[size];
	for(int i =0;i<size;i++){ //use ; duffer not ,
	printf("enter the %dth element",i);   
		scanf("%d",&array[i]);
				}//not <= as size of 6 array has last 5 still has 6 elemts daym  
printf("enter value");
scanf("%d",&goal);
printf("%d",binary(array,0,size,goal));
}
