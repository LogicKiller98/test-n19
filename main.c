#include <stdio.h>
#include <stdlib.h>
#define n 5
int sumarr(int *ptrofarr,int sizeofarr);
void main()
{
   int j;
   int z;
    int avg;
    int x [5];
    int *ptr =&x;
    for (j=0;j<5;j++)
    {
        printf("enter value number %d\n",j+1);
        scanf(" %d",&ptr[j]);
    }
    z=sumarr(x,n);
    avg = z / j;
    printf("sum = %d\naverage = %d",z,avg);

}
int sumarr(int *ptrofarr,int sizeofarr)
{
     int i;
     int sum=0;
     for (i=0;i<5;i++)
    {
        sum = sum + ptrofarr[i];
    }
    return sum;
}
