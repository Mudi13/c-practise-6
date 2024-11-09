#include<stdio.h>
#include<conio.h>
int main()
{
    int ringtype;
    float engravings,cost=0;
    scanf("%d",&ringtype);
    scanf("%f",&engravings);

    printf("1 is for Gold plated rings\n");
    printf("2 is for Solid gold rings\n");
    printf("3 is for Silver plated rings\n");
    

    if (ringtype==1)
    {
        cost=500+(70.30*engravings);
    }

    else if (ringtype==2)
    {
        cost=1000+(10.40*engravings);
    }

    else if (ringtype==3)
    {
        cost=300+(5.10*engravings);
    }

    else
    {
        printf("Invalid choice\n");
    }
    
    printf("%f is the total cost\n",cost);

return 0;   
}