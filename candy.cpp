#include<cstdio>
#include<cstdlib>

#define max 10010
using namespace std;

int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==-1)
        break;
        else
        {
            int average=0;
            int mod=0;
            int candy[max];

            for(int i=0;i<n;i++)
            {
                int a;
                scanf("%d",&a);
                candy[i]=a;

                if(a>=n)
                {
                    average+=(a/n);
                    mod+=(a%n);
                }
                else
                {
                    mod+=a;
                }

                if(mod>=a)
                {
                    average+=(mod/n);
                    mod=mod%n;
                }

            }

            average+=(mod/n);
            mod=mod%n;

            if(mod!=0)
            {
                printf("-1\n");
            }
            else
            {
                long long int sum=0;
                for(int i=0;i<n;i++)
                {
                    if(candy[i]<average)
                    {
                        sum+=(average-candy[i]);
                    }
                }
                printf("%lld\n",sum);
            }

        }
    }
    return 0;
}
