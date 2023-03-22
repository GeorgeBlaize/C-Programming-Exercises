
//C Program to Calculate Standard Deviation

#include<stdio.h>
#include<math.h>

float calculateSD(float data[]);
int main()
{
    float data[10];

    printf("Enter 10 elements:");
    for(int i=0; i<10; i++)

        scanf("%f",&data[i]);

        printf("\nStandard Deviation = %.6f",calculateSD(data));

        return 0;

}

float calculateSD(float data[])
{
    float sum = 0.0,mean,SD=0.0;

    for(int i=0; i<10; i++)
    {
        sum += data[i];
    }
    mean = sum/10;
    for(int i=0; i<10; i++)
    {
        SD+=pow(data[i]-mean,2);
    }
    return sqrt(SD/10);
}
