Problem link: https://codeforces.com/contest/112/problem/A
__________________________________________________________
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
    string s1, s2,r;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++) s1[i]=tolower(s1[i]);
    for(int i=0;i<s2.size();i++) s2[i]=tolower(s2[i]);
    if(s1>s2) cout<<1<<endl;
    else if(s1==s2) cout<<0<<endl;
    else cout<<-1<<endl;

bye;
}




