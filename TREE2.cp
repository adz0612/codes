#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya

const int mxn=1e5+5;
ll arr[mxn];

void solve()
{
    set<ll> counter;
    ll n;
    cin>>n;
    f(i,0,n)
    {cin>>arr[i];counter.insert(arr[i]);}
    int z=0;
    for(auto x: counter)
    {
     if(x==0)
         z++;
    }
    cout<<counter.size()-z<<endl;
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    return 0;
}
