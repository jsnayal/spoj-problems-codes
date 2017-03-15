#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

int main()
{
    while(1)
    {
        int cols;
        scanf("%d",&cols);

        if(cols==0)
        break;
        else
        {
            char a[200];
            char message[25][25];
            scanf("%s",a);

            int rows=strlen(a)/cols;
            int r=0;
            int c=0;
            for(int i=0;i<=(strlen(a)-cols);i+=cols)
            {
                for(int j=i;j<i+cols;j++)
                {
                    message[r][c]=a[j];
                    c++;
                }
                r+=1;
                c=0;
            }

            for(int i=1;i<rows;i+=2)
            {
                int max=cols/2;
                for(int j=0;j<max;j++)
                {
                    char temp;
                    temp=message[i][j];
                    message[i][j]=message[i][cols-j-1];
                    message[i][cols-j-1]=temp;
                }
            }

            for(int j=0;j<cols;j++)
            {
                for(int i=0;i<rows;i++)
                printf("%c",message[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
