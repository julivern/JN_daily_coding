#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/vector-sort
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, input_num;
    std::vector<int> num;
    std::cin >> N;
    for(int i=0;i<N;i++){
        std::cin >> input_num;
        num.push_back(input_num);
    }
    std::sort(num.begin(),num.end());
    for(int i=0;i<N;i++){
        std::cout << num[i];
        if(i < N-1)
            std::cout << " ";
        else
            std::cout << std::endl;
    }
    return 0;
}
