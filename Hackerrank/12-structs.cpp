#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

// Link to the problem : https://www.hackerrank.com/challenges/c-tutorial-struct
struct Student{
    std::string first_name;
    std::string last_name;
    int age;
    int standard;
};

int main() {
    Student st;
    Student *ptr;
    
    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    ptr = &st;
    std::cout << ptr->age << " " << ptr->first_name << " " << ptr->last_name << " " << ptr->standard;

    return 0;
}
