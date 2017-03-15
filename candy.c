#include<stdio.h>
#include<stdlib.h>

int main()
{
    int candy[10010],n,average,mod,count,a,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
        break;
        else
        {
            average=0;
            mod=0;
            count=0;
            for(i=0;i<n;i++)
            {
                scanf("%lld",&a);
                candy[count++]=a;

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
                printf("Average=%d: Mod=%d\n",average,mod);
            }

        }
    }
    return 0;
}
