#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/operator-overloading
class Matrix{
    public:
        vector<vector<int>> a;
        Matrix operator+(const Matrix& Mat2){
            Matrix result;
            for(int i=0;i<a.size();++i){
                vector<int> col_res;
                for(int j=0;j<a[i].size();++j){
                    col_res.push_back(a[i][j] + Mat2.a[i][j]);
                }
                result.a.push_back(col_res);
            }
            return result;
        }
};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x,y,result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
