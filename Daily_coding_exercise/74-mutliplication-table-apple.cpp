#include <iostream>
#include <cstdlib>

/*
    Problem description :
    Suppose you have a multiplication table that is N by N. That is, a 2D array where the value at the i-th row and j-th column is (i + 1) * (j + 1) (if 0-indexed) or i * j (if 1-indexed).
    Given integers N and X, write a function that returns the number of times X appears as a value in an N by N multiplication table.
    
    2nd possible problem :
    Print 
*/

int main(int argc, char* argv[]){
    int count = 0;
    int N = atoi(argv[1]);
    int X = atoi(argv[2]);
    // for (int i=0;i<N;i++){
        // for (int j=0;j<N;j++){
            // std::cout << (i+1)*(j+1);
            // if (j<N-1)
                // std::cout << " ";
            // else
                // std::cout << std::endl;
        // }
    // }
    for (int i=0;i<N;i++){
        if(X%(i+1)==0)
            count++;
    }
    if (N<X)
        count--;
    std::cout << "Number of occurence : " << count << std::endl;
    return 0;
}