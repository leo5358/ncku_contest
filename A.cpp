#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
bool isMagicSquare(int mat[3][3])
{
    int sum = 0; 
    for(int i=0; i<3; i++)
        sum += mat[0][i];
    for(int i=1; i<3; i++)
    {
        int row_sum = 0, col_sum = 0; 
        for(int j=0; j<3; j++)
        {
            row_sum += mat[i][j];
            col_sum += mat[j][i];
            if(i==j)
                sum += mat[i][j];
        }
        if(row_sum != sum || col_sum != sum|| col_sum!=row_sum)
            return false;
    }
    return true;
}

int main()
{
    fine 
    int a,b,c,count=0;
    long long int square=pow(10,9)+7,result=0; 
    cin>>a>>b>>c;
    int matrix[3][3];
    matrix[0][0]=a;
    matrix[1][2]=b;
    matrix[2][0]=c;
    for(int i=1;i<=9;i++)
    {
       
        for(int j=1;j<=9;j++)
        {
            
            for(int k=1;k<=9;k++)
            {
                 
                for(int l=1;l<=9;l++)
                {
                   
                    for(int m=1;m<=9;m++)
                    {
                       
                        for(int n=1;n<=9;n++)
                        {
                            matrix[0][1]=i;
                            matrix[0][2]=j;
                            matrix[1][1]=k;
                            matrix[1][2]=l;
                            matrix[2][1]=m;
                            matrix[2][2]=n;
                           if(isMagicSquare(matrix))
                           {
                                count+=1;
                           }
                         
                            }
                        }
                    }
                }
            }
        }
    result=square%count;
    cout<<count<<endl;
 }