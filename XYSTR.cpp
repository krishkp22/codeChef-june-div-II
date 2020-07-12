Problem statement:https://www.codechef.com/JUNE20B/problems/XYSTR




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
        string str;
        cin>>str;
        int num=str.length();
        int c=0;
        for(int i=1;i<num;i++)
        {
            if(((str[i-1]=='x')&&(str[i]=='y')) || ((str[i-1]=='y')&&(str[i]=='x')))
            {
                c=c+1;
                i++;
            }
            
        }
        cout<<c<<endl;
    }
    return 0;
}
