#include<stdio.h>
int main()
{
int no1,no2,no3,no4,no5,no6,i=1;
    while(i!=5)
    {
    no1=rand()%2+1;
    printf("\nFirst Random Number(Between 1 to 2) is %d\n",no1);
    no2=rand()%100+1;
    printf("Second Random number(Between 1 to 100) is %d\n",no2);
    no3=rand()%10;
    printf("Third Random Number(Between 0 to 9) is %d\n",no3);
    no4=rand()%113+1000;
    printf("Forth Random Number(Between 1000 to 1112) is %d\n",no4);
    no5=rand()%3-1;
    printf("Fifth Random Number(Between -1 to 1) is %d\n",no5);
    no6=rand()%15-3;
    printf("Sixth Random(Between -3 to 11) Number is %d\n",no6);
    i++;
    }
    return 0;
}
