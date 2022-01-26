#include<bits/stdc++.h>
using namespace std;
int getmax(stack<int> &s,int &maxele)
{
    if(s.empty()){return -1;}
    return maxele;
}
void push(int x,stack<int> &s,int &maxele)
{
    if(s.empty()){maxele=x;
    s.push(x);
    return; }
    if(x>maxele){s.push(2*x-maxele);maxele=x;}
    else{s.push(x);}
}
void pop(stack<int> &s,int &maxele)
{
    if(s.empty()){return;}
    int t=s.top();
    s.pop();
    if(t>maxele){maxele=2*maxele-t;}
}
int main()
{
    int n;cin>>n;
    vector<string> v(n+1);
    for(int i=0;i<=n;i++){getline(cin,v[i]);}
    stack<int> s;
    int maxele;
    for(int i=1;i<=n;i++)
    {
        if(v[i][0]=='1'){
            string st="";
            for(int j=2;j<v[i].length();j++){st+=v[i][j];}
            int k=stoi(st);
            push(k,s,maxele);
        }
        else if(v[i][0]=='2'){pop(s,maxele);}
        else{cout<<getmax(s,maxele)<<endl;}
    }
    
}