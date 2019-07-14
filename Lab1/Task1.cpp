#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<long long>sura;
    long long v=0,c,i;
    cout<<"Enter the number"<<endl;

    cin>>c;
    cout<<"Enter the string"<<endl;
    getchar();
    getline(cin,s);
    //cout<<s<<endl;
    for(i=0;i<s.size();i++){
    if(s[i]==' ' || i==s.size()-1)
    {
       if(i==s.size()-1)
          v+=int(s[i])*c;
        sura.push_back(v);
        v=0;
        continue;
    }
        v+=int(s[i])*c;
        //cout<<v<<endl;

    }
    sort(sura.begin(),sura.end());
    long long d=1;
    for(i=1;i<sura.size();i++){
        if(sura[i]!=sura[i-1])
            d++;

    }
    cout<<d<<endl;

}


