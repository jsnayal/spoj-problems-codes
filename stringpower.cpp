#include<bits/stdc++.h>

#define MAX 100010
#define print(x) printf("%c",x)

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);

    while(test--)
    {
        char a[MAX],b[MAX],repeat[MAX];
        scanf("%s%s",a,b);


    //printf("%s %s\n",a,b);


        if(strlen(a)<=strlen(b))
        {


        int start=0;
        int end=0;
        int i=0;
        repeat[0]=a[i++];
        //printf("hello");
        print(repeat[0]);
        //printf("hello");
        int temp2=end;

            while(a[i]!='\0')
            {
                if(a[i]==repeat[start])
                {
                    for(int j=start;j<=end;j++)
                    {
                        if(repeat[j]==a[i])
                        {
                            repeat[++temp2]=a[i++];
                            print(repeat[temp2]);
                        }
                        else
                        {
                            repeat[++temp2]=a[i++];
                            print(repeat[temp2]);
                            end=temp2;
                            //break;
                        }
                    }
                }
                else
                {
                    if(a[i-1]==repeat[end])
                    {
                        end=temp2;
                    }
                    end++;
                    repeat[end]=a[i];
                    print(repeat[end]);
                    i++;
                    temp2=end;
                }
            }

  //          printf("\n\n");
            /*for(int k=start;k<=end;k++)
            printf("%c",repeat[k]);
*/
            int index=start;
            int flag=0;
            int counter=0;
            for(int k=0;b[k]!='\0';k++)
            {
                if(b[k]!=repeat[index])
                {
                    flag=1;
                    break;
                }
                if(index==end)
                {
                    index=start;
                    counter=0;
                }
                else
                {
                    index++;
                    counter++;
                }
            }

            if(flag==1)
            printf("NO\n");
            else
            {
                if(counter==0/*repeat[end]==b[strlen(b)-1]*/)
                {
                    printf("YES\n");
                }
                else
                printf("NO\n");
            }
        }
        else
        {


        int start=0;
        int end=0;
        int i=0;
        repeat[0]=b[i++];
        //printf("hello");
        //print(repeat[0]);
        //printf("hello");
        int temp2=end;

            while(b[i]!='\0')
            {
                if(b[i]==repeat[start])
                {
                    for(int j=start;j<=end;j++)
                    {
                        if(repeat[j]==b[i])
                        {
                            repeat[++temp2]=b[i++];
                            //print(repeat[temp2]);
                        }
                        else
                        {
                            repeat[++temp2]=b[i++];
                            //print(repeat[temp2]);
                            end=temp2;
                            //break;
                        }
                    }
                }
                else
                {
                    if(b[i-1]==repeat[end])
                    {
                        end=temp2;
                    }
                    end++;
                    repeat[end]=b[i];
                    //print(repeat[end]);
                    i++;
                    temp2=end;
                }
            }
/*
            printf("\n\n");
            for(int k=start;k<=end;k++)
            printf("%c",repeat[k]);
*/
            int index=start;
            int flag=0;
            int counter=0;
            for(int k=0;a[k]!='\0';k++)
            {
                if(a[k]!=repeat[index])
                {
                    flag=1;
                    break;
                }
                if(index==end)
                {
                    index=start;
                    counter=0;
                }
                else
                {
                    index++;
                    counter++;
                }
            }

            if(flag==1)
            printf("NO\n");
            else
            {
                if(counter==0/*repeat[end]==a[strlen(a)-1]*/)
                {
                    printf("YES\n");
                }
                else
                printf("NO\n");
            }
        }

    }
    return 0;
}
