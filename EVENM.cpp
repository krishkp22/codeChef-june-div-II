Problem statement:https://www.codechef.com/JUNE20B/problems/EVENM



Solution:

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false),cin.tie(NULL);
using namespace std;
int main()
{
    fio;
    int t,z,s=0;
    cin>>t;
    int n[t];
    while(t)
    {
        cin>>n[s++];
        t--;
    }
    while(s)
    {
        z=0;
        for(int i=0;i<*(n+t);i++)
        {
            if(!(i&1)||(*(n+t)& 1))
            {
                for(int j=0;j<*(n+t);j++)
                {
                    cout<<++z<<" ";
                }
            }
            else
            {
                for(int j=0;j<*(n+t);j++)
                {
                    if(j==0)
                    {
                        cout<<++(++z)<<" ";
                    }
                    else if(j&1)
                    {
                        cout<<--z<<" ";
                    }
                    else
                    {
                        cout<<++(++(++z))<<" ";
                    }
                }
                ++z;
            }
            cout<<endl;
        }
        s--;
        t++;
    }
    return 0;
}
