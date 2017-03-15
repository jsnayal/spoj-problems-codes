#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d\n",&test);

    while(test--)
    {
         int a[10000],b[10000];
        int ca=0,cb=0;
        int flag=0,i;
        int f1=0,f2=0;
        while(1)
        {
            char ch=getchar();
            if(ch=='\n' || ch==EOF)
            break;

            if(ch==' ')
            {
                flag=1;
                continue;
            }

            if(flag==0)
            {
                if(ch-48 !=0)
                {
                    f1=1;
                }
                if(f1==1)
                a[ca++]=ch-48;
            }
            else
            {
                if(ch-48 !=0)
                {
                    f2=1;
                }
                if(f2==1)
                b[cb++]=ch-48;
            }
        }

        //normalising number


        if((ca==1)&&(cb==1))
        {

            {
                printf("%d\n",a[0]+b[0]);
                continue;
            }

        }

        /*flag=0;
        int maxa,maxb;
        for(i=ca-1;i>=0;i--)
        {
            if(a[i]!=0)
            {
                maxa=i;
                break;
            }
        }


        for(i=cb-1;i>=0;i--)
        {
            if(b[i]!=0)
            {
                maxb=i;
                break;
            }
        }
*/
        int c[10000],cc=0;
        i=0;
        int j=0;
        int carry=0;
        int fl=0;
        int sum=0;
        while(1)
        {
            if(fl==0)
            {
                sum=a[i++]+b[j++]+carry;
                c[cc++]=sum%10;
                carry=(sum/10);
            }
            else if(fl==1)
            {
                sum=b[j++]+carry;
                c[cc++]=sum%10;
                carry=sum/10;

                if(j==cb)
                break;
            }
            else
            {
                sum=a[i++]+carry;
                c[cc++]=sum%10;
                carry=(sum/10);

                if(i==ca)
                break;
            }

            if(i==ca && j==cb)
            {
                if(carry>0)
                {
                    c[cc++]=carry;

                }
                break;
            }
            else if(i==ca)
            fl=1;

            else if(j==cb)
            fl=2;
        }

        flag=0;
        for(int i=0;i<cc;i++)
        {
            if(c[i]!=0)
            flag=1;

            if(flag==1)
            printf("%d",c[i]);
        }
        printf("\n");

    }
    return 0;
}
