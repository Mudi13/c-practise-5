#include<stdio.h>
int main()
{
    float call,bill;
    scanf("%f",&call);

    if ((call>0) && (call<=50))
    {
        bill=100;
    }

    else if ((call>50) && (call<=100))
    {
        bill=100+(0.80*(call-50));
    }

    else if ((call>100) && (call<=200))
    {
        bill=100 + (0.80*(50)) + (0.60*(call-100));
    }

    else if (call>200)
    {
        bill=100 + (0.80*(50)) + (0.60*(100)) + (0.40*(call-200));
    }

    printf("Bill= %f",bill);

}
