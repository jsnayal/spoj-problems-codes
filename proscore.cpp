#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        int teams,probs;
        int a[20][20];
        int binary[5]={1,1,1,1,1};
        scanf("%d%d",&teams,&probs);
        for(int i=0;i<teams;i++)
        {
            for(int j=0;j<probs;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        for(int j=0;j<probs;j++)
        {
            int flag=0;
            for(int i=0;i<teams;i++)
            {
                if(a[i][j]==1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                binary[0]=0;
                break;
            }
        }

        for(int i=0;i<teams;i++)
        {
            int flag=0;
            for(int j=0;j<probs;j++)
            {
                if(a[i][j]==1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                binary[1]=0;
                break;
            }
        }

        for(int i=0;i<teams;i++)
        {
            int solved=0;
            for(int j=0;j<probs;j++)
            {
                if(a[i][j]==1)
                {
                    solved+=1;
                }
            }
            if(solved==probs)
            {
                binary[2]=0;
                break;
            }
        }

        int res=(binary[0]*pow(2,2) + binary[1]*pow(2,1) + binary[2]*pow(2,0));
        printf("Case %d: %d\n",t+1,res);
    }
    return 0;
}
