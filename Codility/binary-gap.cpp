// you can use includes, for example:
// #include <algorithm>
#include <iostream>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int count_zeros = -1;
    int cur_max_gap = 0;
    
    while (N > 0) {
        if(N%2==1){
            count_zeros=0;
        }else if (count_zeros!=-1){
            count_zeros++;
            if(cur_max_gap < count_zeros){
                cur_max_gap = count_zeros;
            }
        }
        N = N >> 1;
    }
    
    return cur_max_gap;
}