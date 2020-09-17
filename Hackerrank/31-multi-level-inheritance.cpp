#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/multi-level-inheritance-cpp
class Triangle{
    public:
        void triangle(){
            cout<<"I am a triangle\n";
        }
};

class Isosceles : public Triangle{
    public:
        void isosceles(){
            cout<<"I am an isosceles triangle\n";
        }
};

//Write your code here.
class Equilateral: public Isosceles{
    public:
        void equilateral(){
            std::cout << "I am an equilateral triangle\n";
        }
};

int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
