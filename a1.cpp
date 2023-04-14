#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>col1(3);
    vector<int>col2(3);
    vector<int>col3(3);
    col1[0]=a;
    col2[2]=b;
    col3[0]=c;
    for(int a=1;a<=9;a++)
    {
        col1[1]=a;
        for(int b=1;b<=9;b++)
        {
            col1[2]=b;
            for(int c=1;c<=9;c++)
            {
                col2[0]=c;
                for(int d=1;d<=9;d++)
                {
                    col2[1]=d;
                    for(int e=1;e<=9;e++)
                    {
                        col3[1]=e;
                        for(int f=1;f<=9;f++)
                        {
                            col3[2]=f;
                            if()
                        }

                    }
                }
            }
        }
    }
}