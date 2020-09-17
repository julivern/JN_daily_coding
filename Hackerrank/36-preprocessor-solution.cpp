#define foreach(v,i) for(int i=0;i<v.size();++i)
#define INF 10000000
#define FUNCTION(name, op) void name(int& cur, int comp) {!(cur op comp) ? cur = comp : false;}
#define toStr(x) #x
#define io(v) std::cin >> v

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

// Link to the problem : https://www.hackerrank.com/challenges/preprocessor-solution
int main(){
    int n; cin >> n;
    vector<int> v(n);
    foreach(v, i) {
        io(v)[i];
    }
    std::cout<<v[0];
    int mn = INF;
    int mx = -INF;
    foreach(v, i) {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) <<' '<< ans;
    return 0;

}