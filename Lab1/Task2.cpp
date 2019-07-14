#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the base"<<endl;
    int base;
    cin>>base;
    getchar();
    string s,a;
    getline(cin,s);
    stringstream ss(s);
    long long mod1=1000000+3,mod2=691871;
    vector<pair<long long,long long>> sura;
    while(ss>>a)
    {
        long long sum1=0,sum2=0;
        for(auto x:a)
        {
            sum1+=(sum1*base+x)%mod1;
            sum1%=mod1;
            sum2+=(sum2*base+x)%mod2;
            sum2%=mod2;
        }
        sura.push_back({sum1,sum2});
    }
    sort(sura.begin(),sura.end());
    int cnt=1;
    for(int i=1;i<sura.size();i++)
    {
        if(sura[i]!=sura[i-1])cnt++;
    }
    cout<<cnt<<endl;
}
