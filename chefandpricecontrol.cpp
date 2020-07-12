

Problem statement: https://www.codechef.com/JUNE20B/problems/PRICECON



Solution:
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false),cin.tie(NULL);
using namespace std;
int main()
{
    fio;
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,v=0,tmp;
        cin>>n>>k;
        for(long long i=0;i<n;i++)
        {
            cin>>tmp;
            if(tmp>k)
            {
                v=v+tmp-k;
            }
        }
        cout<<v<<endl;
    }
    return 0;
}
