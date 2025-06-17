#include<stdio.h>
int main(){int ar,ac,br,bc;
    //find the dimention of 2 matrix first boss
    printf("enter dimention of martix a");
    scanf("%d",&ar);
    scanf("%d",&ac);
    printf("enter dimention of martix b"); 
    scanf("%d",&br);
    scanf("%d",&bc);
    if (ac==br)//turns out i still dono horizontal are rows wow //found aout heard way they are cXr format //(wrong)simple logic as row cross coluym format are dimetions as coloum into rows in multiply
    {
        printf("ok this is possible lets go and ");
        int number=ar*ac*bc;//easy peesy
        printf("number of multiications are %d",number);
    }
    else
    {
        printf("not possible bro");
        return 0;
    }
    //now put values in this m,atrix
    int a[ar][ac]={};
    int b[br][bc]={};
    int c[ar][bc]={};//as ab will have ar*bc dimentions

    printf("putvaluse in your -a-  matric");
    for (int i = 0; i < ar; i++)//after 1 row is done move nect coloum man
    {
        for (int j = 0; j < ac; j++)//simple put values row wise horizontal one is row is called 
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("putvaluse in your -b-  matric");
    for (int i = 0; i < br; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            scanf("%d",&b[i][j]);

        }
        
    }
    //only 1 erroe so far daym error: expected '=', ',', ';', 'asm' or '__attribute__' before 'printf'
    
    //now we happily print them matrix dude
    printf("your matrix a was this right bro ? \n");
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < ac; j++)
        {
            printf("%d, ",a[i][j]);
        }
        printf("\n");
    }
    printf("and your matrix b was this right bro ? \n");
    for (int i = 0; i < br; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            printf("%d, ",b[i][j]);
        }
        printf("\n");
    }
    // done after a billon attemts now multiply fr would be easy i gess 22;33 now 17062025
    //dreaming of maming a teaching vids lol
    for (int i = 0; i <ar; i++)//i is row rember
    {
        for (int j = 0; j <bc ; j++)//j is coloum rember
        {
            for (int k = 0; k <ac ; k++)//k is puttin in c and k is diffrentnumber of coloums is always with a only thats why
            {   //add previos values too thats why c=c+baki
                c[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }//understand pictorail is best finally understool my dumb self didint know still what is aclled horizontal let alone reos man
    //nows is 23;11
printf("bro now the solution matrix is finally this \n ");
for (int i = 0; i < bc; i++)
{
    for (int j = 0; j < ar; j++)
    {
        printf("%d ,",c[j][i]);
    }
    printf("\n");
}
//done23:19
}