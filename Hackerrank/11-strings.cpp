#include <iostream>
#include <string>
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/c-tutorial-strings
int main() {
    // Complete the program
    std::string input1, input2, concan_str;
    std::cin >> input1 >> input2;

    std::cout << input1.size() << " " << input2.size() << std::endl;

    concan_str = input1 + input2;
    std::cout << concan_str << std::endl;

    char temp;
    temp = input1[0];
    input1[0] = input2[0];
    input2[0] = temp;

    // Print the result of swapping
    std::cout << input1 << " " << input2 << std::endl;

    return 0;
}
