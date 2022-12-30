#include<stdio.h>

int Ord(int);
int Arm(int,int);
int pow(int,int);

int main()
{
    int Onum,Nnum,num,order,c=0;
    printf("Enter the number: ");
    scanf("%d", &Onum);
    num=Onum;
    order=Ord(num);
    Nnum=Arm(num,order);
    c=Nnum==Onum?1:0;
    c==1?printf("Yes\n"):printf("No\n");
}

int Ord(int n)
{
    int a=0;
    while(n!=0)
    {
        a+=1;
        n/=10;
    }
    return(a);
}

int Arm(int n,int o)
{
    int a,b=0;
    for(int i=0;i<o;i++)
    {
        a=n%10;
        b+=pow(a,o);
        n/=10;
    }
    return(b);
}

int pow(int a,int o)
{
    if(o==0)
    return 1;
    else
    return a*pow(a,o-1);
}