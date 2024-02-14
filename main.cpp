#include<bits/stdc++.h>
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
    cout<<"Input song id (e.g. https://www.kuwo.cn/play_detail/359900 => 359900)"<<endl;
    string x;
	cin>>x;
    freopen("a.txt","w",stdout);
    cout<<x<<flush;
    system("node test.js");
    system("python test.py");
return 0;}
/*
*/
