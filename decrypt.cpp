#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
#define rep(Ii,Jj,Kk) for(int Ii=(Jj),Ii##_=(Kk);Ii<=Ii##_;Ii++)
#define per(Ii,Jj,Kk) for(int Ii=(Jj),Ii##_=(Kk);Ii>=Ii##_;Ii--)
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned uint;
typedef long double db;
#define fir first
#define sec second
#define pb push_back
#define eb emplace_back
#define siz(Aa) ((int)(Aa).size())
#define all(Aa) (Aa).begin(),(Aa).end()
#define ckmx(Aa,Bb) (Aa=max(Aa,Bb))
#define ckmn(Aa,Bb) (Aa=min(Aa,Bb))

signed main(){ios::sync_with_stdio(false),cin.tie(nullptr);
    cout<<"Input \"q=\" e.g. NI8S5evAnm...TlFU6gA= (long base64-like string)"<<endl;
    string x;
	cin>>x;
	ofstream f;
	f.open("de.in",ios::out);
    f<<x;
    f.close();
    system("node de.js");
    freopen("de.out","r",stdin);
    int y;
    cin>>y;
    cout<<y<<endl<<"Window closes in 3 secs."<<endl;
    Sleep(3000);
return 0;}
/*
*/
