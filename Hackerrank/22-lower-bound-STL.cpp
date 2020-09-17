#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/cpp-lower-bound
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size, input_num, size_q, search_num;
    std::vector<int>::iterator low;
    std::vector<int> num;

    std::cin >> size;
    for(int i=0;i<size;i++){
        std::cin >> input_num;
        num.push_back(input_num);
    }
    std::cin >> size_q;
    while(size_q>0){
        std::cin >> search_num;
        low = std::lower_bound(num.begin(), num.end(), search_num);
        if(num[(low-num.begin())]==search_num)
            std::cout << "Yes";
        else
            std::cout << "No";
        std::cout << " " << (low-num.begin()+1) << std::endl;
        --size_q;
    }
    return 0;
}
