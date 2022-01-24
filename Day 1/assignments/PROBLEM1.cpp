#include<bits/stdc++.h>
using namespace std;
vector<int> reverseArray(vector<int> v)
{
    int n=v.size();
    int start=0,end=n-1;
    for(int i=0;i<n/2;i++)
    {
        swap(v[start],v[end]);
        end--;
        start++;
    }
    return v;
}
int main()
{
    int q;
    cin>>q;
    vector<int> p(q);
    for(int i=0;i<q;i++)
    {
        cin>>p[i];
    }
    vector<int> ans=reverseArray(p);
    for(auto x: ans)
    {
        cout<<x<<" ";
    }
}