Problem statement:



Solution:

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false),cin.tie(NULL);
using namespace std;
int main()
{
    fio;
    int t;
    unsigned long long int i=0,c;
    cin>>t;
    unsigned long long int ts[t];
    while(t)
    {
        cin>>ts[i++];
        t--;
    }
    while(i)
    {
        while(!(*(ts+t)& 1)) *(ts+t)= *(ts+t)>>1;
        c= *(ts+t)/2;
        t++;
        i--;
        cout<<c<<endl;
    }
    return 0;
}
