Problem link: https://codeforces.com/contest/44/problem/A
_________________________________________________________
/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define Fon(i,a,b) for(int i=1;i<=n;i++)
#define fon(i,n) for(int i=0;i<n;i++)
#define lcm(a,b) (a/__gcd(a,b)*b)
#define gcd(a,b)  __gcd(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define bye return 0
#define FASTER_CODE ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{ 
    FASTER_CODE;
    int n;
    cin>>n;
    vector<pair<string, string>>v;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        v.pb({a,b});
    } 
    sort(v.begin(),v.end());
    int sz= unique(v.begin(),v.end())-v.begin();
    cout<<sz<<endl;

bye;
}


