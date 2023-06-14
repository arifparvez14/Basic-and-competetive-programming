#include <bits/stdc++.h>
#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define FOR(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define vll vector<ll>v
#define pb push_back
int arr[]={1,5,6,8,10,20,20,20,21,50,60};
using namespace std;
int main()
{
    ll n=11,pos=-1,num=20;
    sort(arr,arr+n);
    ll lo=0,hi=n-1;
    while(lo<=hi){
        ll mid = (lo+hi)/2;
        if(arr[mid] < num){
            pos=mid;
            lo = mid+1;
        }
        else if(arr[mid] >= num){
            hi = mid-1;
        }
    }
    if(pos!=1) printf("Found at %lld position",pos);
    else cout<<"Not Found";
    return 0;
}


