#include<stdio.h>
//not gonna lie super proud did 0 syntax erroe (ofc did 5 erooe of ; but did run this code on my mind )
//and this kinda works man super proud 
int main(){int num,sac;
    printf("enter number or elemets");
    scanf("%d",&num);
    printf("enter sac");
    scanf("%d",&sac);
    int id[num],profit[num],weight[num],bag[num];
    for (int i = 0; i < num; i++)
    { 
    printf("enter id");
    scanf("%d",&id[i]); 
    printf(" profit");
    scanf("%d",&profit[i]);
    printf("enter weight");
    scanf("%d",&weight[i]);
    }
    int ratio[num],ratio2[num];
    for (int i = 0; i < num; i++)
    {
        ratio[i]=profit[i]/weight[i];
        ratio2[i]=i;
    }
    //bubble sort on ratio but change ratio2 also eg[1,2,3,4,5,6]
    //will be [6,5,2,4,1,3] so first 6th profit and weight choose crazy plan i thought
    for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if (ratio[j]>ratio[i])
            {
                
            int temp = ratio[j];
            ratio[j]=ratio[i];
            ratio[i]=temp;
            
            int temp1 = ratio2[j];
            ratio2[j]=ratio2[i];
            ratio2[i]=temp;
            }
            
        }
        
    }
    //fill sac 
    int count=0,profit2=0;
    while (sac>0)
    {   int x=0;
        bag[x]=id[ratio2[x]];
        sac=sac-weight[ratio2[x]];
        x++;
        count++;
        profit2=profit2+profit[ratio2[x]];
    }
    printf("the list is this");
    for (int i = 0; i < count; i++)
    {
        printf(" %d ,",id[ratio2[count]]);
    }
    
    printf("the profit is %d ",profit2); 
    
     

}
