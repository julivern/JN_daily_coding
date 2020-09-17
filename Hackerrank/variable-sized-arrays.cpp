#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;
    std::cin >> n >> q;
    std::vector<std::vector<int>>a(n);
    for(int i=0;i<n;i++){
        int k;
        std::cin >> k;
        a[i].resize(k);
        for(int j=0;j<k;j++){
            std::cin >> a[i][j];
        }
    }
    for(int i=0;i<q;i++){
        int j,k;
        std::cin >> j >> k;
        std::cout << a[j][k] << std::endl;
    }
    return 0;
}
