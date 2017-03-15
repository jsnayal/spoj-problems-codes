#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int test;
    scanf("%lld",&test);
    while(test--)
    {
        long long int k,m=192;
        scanf("%lld",&k);

        printf("%lld\n",m+((k-1)*250));
    }
    return 0;
}
