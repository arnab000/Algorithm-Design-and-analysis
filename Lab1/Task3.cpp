#include<bits/stdc++.h>
using namespace std;

int loground(long long k)
{
    int c=0;
    while(k)k>>=1,c++;
    return c;
}

int main()
{
    srand(time(NULL));

    long long k;
    cin>>k;
    int w=loground(k);
    int m=1000000;
    m=8;
    int p=loground(m);
    int s=rand()%((1<<w)-2);
    s+=1;
    k*=s;
    k&=((1<<w)-1);
    if(w>p)k>>=(w-p);
    else k<<=(p-w);
    cout<<k<<endl;
}
