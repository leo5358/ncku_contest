#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fine
    int n,q;
    long long int sum=0;
    cin>>n>>q;
    vector<long long int>able(n);
    for(int i=0;i<n;i++)
    {
        cin>>able[i];
    }
    for(int j=0;j<q;j++)
    {
        int l,r,k;
        cin>>l>>r>>k;
        sum=0;
        for(l;l<=r;l++)
        {
            sum+=abs(able[l-1]-k)+able[l-1]+k;
        }
        cout<<sum<<"\n";
    }
    
}
