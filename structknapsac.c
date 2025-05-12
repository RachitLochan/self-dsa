#include<stdio.h>
#include<stdlib.h>
typedef struct knapsacstru
{
    int id;
    float ratio;
    int profit;
    int weight;
    //ratio=(float)profit\weight; galaat bro not possible
}item;
int main(){int num,sac;
    printf("enter number or elemets");
    scanf("%d",&num);
    printf("enter sac");
    scanf("%d",&sac);
    item saman[num];
    //fill saman
    for (int i = 0; i < num; i++)
    { 
    printf("enter id");
    scanf("%d",&saman[i].id); 
    printf(" profit");
    scanf("%d",&saman[i].profit);
    printf("enter weight");
    scanf("%d",&saman[i].weight);
    saman[i].ratio=(float)saman[i].profit/saman[i].weight;
    }
   for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if (saman[j].ratio>saman[i].ratio)
            {
                
            item temp = saman[j];
            saman[j]=saman[j];
            saman[j]=temp;}
                
            // float temp = saman[j].ratio;
            // saman[j].ratio=saman[j].ratio;
            // saman[j].ratio=temp;}
        }
    }
    int count=0,profit2=0;
    int x=0;
    while (x < num && sac > 0)
    { 
        if (saman[x].weight<=sac)
        {
        sac=sac-saman[x].weight;
        profit2+=saman[x].profit;
        count++;
        }
        else
        {   float fraction= (float)sac/saman[x].weight;
            profit2+=saman[x].ratio*sac;
            count++;
            printf("take partial of %f from %d",fraction,saman[x].id);
            sac=0;//or gives unreal erroes bro dont think
            //that you need to take 2 partial you dont bro you dont after 1 partai
            //code is done man
        }
          x++;
        
    }
printf("the profit is %d",profit2);
for (int i = 0; i < count; i++)
{
    printf("by these id %d,",saman[i].id);
}

}
