// Link to problem: https://www.spoj.com/problems/AGGRCOW/
// tags : Binary search



// coded by- mrNOBODY_

#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long
#define input(x) cin>>x;
#define print(x) cout<<x;
#define vec(x) vector<x>
#define fr(i,a,b) for(int i=a;i<b;i++)
using namespace std;

bool isPossible(ll arr[],ll n,ll c,ll mid)
{
    int curr = 0;
    c--;
    fr(i,0,n)
    {
        if(arr[i]-arr[curr]>=mid)
        {
            curr=i;
            c--;
        }   

        if(c==0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.sync();

    int t;
    input(t)
    while(t--)
    {
        ll n,c;
        input(n>>c)
        ll arr[n];
        fr(i,0,n)
        {
            input(arr[i])
        }
        sort(arr,arr+n);
        ll l=0;
        ll h=arr[n-1]-l;
        ll ans=-1;


        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(isPossible(arr,n,c,mid))
            {
                ans = mid;
                l = mid+1;
            }
            else
            {
                h=mid-1;
            }
            
        }
        print(ans<<endl)
    }

    return 0;
}
