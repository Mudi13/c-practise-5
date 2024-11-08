#include<stdio.h>
#include<conio.h>
int main()
{
    int amount,count_500=0,count_200=0,count_100=0,
    count_50=0,count_20=0,count_10=0,count_5=0,
    count_2=0,count_1=0;

    scanf("%d",&amount);

    if (amount>=500)
    {
        count_500=amount/500;
    }
    
    if (amount>=200)
    {
        count_200=amount/200;
    }
    
    if (amount>=100)
    {
        count_100=amount/100;
    }
    
    if (amount>=50)
    {
        count_50=amount/50;
    }
    
    if (amount>=20)
    {
        count_20=amount/20;
    }
    
    if (amount>=10)
    {
        count_10=amount/10;
    }
    
    if (amount>=5)
    {
        count_5=amount/5;
    }

    if (amount>=2)
    {
        count_2=amount/2;
    }
    
    if (amount>=1)
    {
        count_1=amount/1;
    }
    
    
    if (count_500>0)
    {
        printf("%d is the no of 500 notes\n",count_500);
    }
    if (count_200>0)
    {
        printf("%d is the no of 200 notes\n",count_200);
    }
    if (count_100>0)
    {
        printf("%d is the no of 100 notes\n",count_100);
    }
    if (count_50>0)
    {
        printf("%d is the no of 50 notes\n",count_50);
    }
    if (count_10>0)
    {
        printf("%d is the no of 10 notes\n",count_10);
    }
    if (count_5>0)
    {
        printf("%d is the no of 5 notes\n",count_5);
    }
    if (count_2>0)
    {
        printf("%d is the no of 2 notes\n",count_2);
    }
    if (count_1>0)
    {
        printf("%d is the no of 1 notes\n",count_1);
    }
}