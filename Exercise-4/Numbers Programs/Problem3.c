
//Display prime number

#include<stdio.h>

int main()
{

    int q,i=3,count,c;

    printf("Enter the number of prime numbers your require: \n");

    scanf("%d",&q);

    if(q>=1)
    {
        printf("First %d prime numbers are: \n",q);
        printf("2\n");
    }

    for(count=2; count<=q; )
    {
        for(c=2; c<=i-1; c++)
        {
            if(i%c==0)
                break;
        }
        if(c==i)
        {
            printf("%d\n",i);
            count++;
        }
        i++;
    }

    return 0;

}
