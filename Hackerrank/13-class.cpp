#include <iostream>
#include <sstream>
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/c-tutorial-class
class Student{
    private:
        int age, standard;
        std::string first_name, last_name;
    public:
        void set_age(int input){
            age = input;
        }
        void set_standard(int input){
            standard = input;
        }
        void set_first_name(std::string input){
            first_name = input;
        }
        void set_last_name(std::string input){
            last_name = input;
        }
        int get_age(){
            return age;
        }
        std::string get_last_name(){
            return last_name;
        }
        std::string get_first_name(){
            return first_name;
        }
        int get_standard(){
            return standard;
        }
        std::string to_string(){
            std::stringstream result;
            std::string result_str;
            result << age << "," << first_name << "," << last_name << "," << standard;
            result >> result_str;
            return result_str;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
