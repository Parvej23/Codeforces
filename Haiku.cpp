Problem link: https://codeforces.com/contest/78/problem/A
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
bool isVowel (char c)
{
    return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
}
int main()
{ 
    FASTER_CODE;
    vector<string>v;
    int cnt[]={5,7,5};
    for(int i=0;i<3;i++)
    {
        string s;
        char c;
        cin>>c;
        getline(cin, s);
        s=s+c;
        v.push_back(s);
    } 
    for(int i=0;i<3;i++)
    {
        int c=0;
        for(auto u: v[i])
        {
            if(isVowel(u)) c++;
        }  
        if(c!=cnt[i]) return cout<<"NO\n", 0;
    } 
    cout<<"YES\n";

bye;
}



