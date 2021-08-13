Problem link:https://codeforces.com/problemset/problem/118/A
____________________________________________________________

/* Bismillahir Rahmanir Rahim
   Md. Parvej    13/8/2021
   ___________________________
*/
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
    return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='y');
}
int main()
{
    FASTER_CODE;
    string s,ans;
    cin>>s;
    for(auto u: s)
    {
        char c =tolower(u);
        if(isVowel(c)==0)
        {
            ans+='.';
            ans+=c;
        }
    }
    cout<<ans<<endl;

    bye;
}




