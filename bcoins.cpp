#include<bits/stdc++.h>

#define maxm(a,b) ((a>b)?(a):(b))
using namespace std;

long long int calc(long long int);
long long int ar[10000005]={0};

int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        printf("%lld\n",calc(n));
    }
    return 0;
}

long long int calc(long long int n)
{
    long long int a=n/2;
    long long int b=n/3;
    long long int c=n/4;

    if(n<12)
    return ar[n]=n;

    else if(n<=10000000)
    {
        if(ar[n]!=0)
        return ar[n];
        else
        {
            if(a+b+c >= n)
            {
                return ar[n]=(calc(a)+calc(b)+calc(c));
            }
            else
            return ar[n]=n;
        }
    }
    else
    {
        if(a+b+c >=n)
        return calc(a)+calc(b)+calc(c);
        else
        return n;
    }
}
