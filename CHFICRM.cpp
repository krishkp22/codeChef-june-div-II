
Problem statement:https://www.codechef.com/JUNE20B/problems/CHFICRM






Solution:

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false),cin.tie(NULL);
using namespace std;
int main() 
{
    fio;
    int t, n, s, a, _5, _10;
    cin>>t;
    int flag[t];
    s = 0;
    while(t) {
        cin>>n;
        flag[s] = 1;
        _5 = 0;
        _10 = 0;
        while(n--) {
            cin>>a;
            switch(a) {
                case 5:
                    _5++;
                    break;
                case 10:
                    if(_5 - 1 < 0) {
                        flag[s] = 0;
                    }
                    else {
                        _10++;
                        _5--;
                    }
                    break;
                case 15:
                    if(_10 - 1 < 0) {
                        if(_5 - 2 < 0) {
                            flag[s] = 0;
                        }
                        else _5-=2;
                    }
                    else _10--;
                    break;
            }
        }
        t--;
        s++;
    }
    while(s) {
        if(flag[t++]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        s--;
    }
    return 0;
}
