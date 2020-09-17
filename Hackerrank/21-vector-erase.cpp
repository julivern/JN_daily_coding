#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/vector-erase
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size, input_num, pos_rem, range_begin, range_end;
    std::vector<int> num;
    std::cin >> size;
    for(int i=0;i<size;i++){
        std::cin >> input_num;
        num.push_back(input_num);
    }
    std::cin >> pos_rem;
    --pos_rem;
    num.erase(num.begin()+pos_rem);
    std::cin >> range_begin >> range_end;
    --range_end;
    --range_begin;
    num.erase(num.begin()+range_begin,num.begin()+range_end);
    std::cout << num.size() << std::endl;
    for(int i=0;i<num.size();i++){
        std::cout << num[i];
        if(i<num.size()-1)
            std::cout << " ";
        else
            std::cout << std::endl;
    }
    return 0;
}
