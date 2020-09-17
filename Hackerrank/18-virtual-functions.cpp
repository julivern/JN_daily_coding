#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    string name;
    int age;
    public:
        virtual void getdata(){
            std::cin >> name >> age;
        }
        virtual void putdata(){
            std::cout << name << " " << age << " ";
        }
};

class Professor:public Person{
    static int id;
    int cur_id;
    int publications;
    public:
        Professor(){
            cur_id=++id;
        }
        void getdata(){
            Person::getdata();
            std::cin >> publications;
        }
        void putdata(){
            Person::putdata();
            std::cout << publications << " " << cur_id << std::endl;
        }
};
int Professor::id=0;

class Student: public Person{
    static int id;
    int cur_id;
    int marks[6];
    int sum_marks=0;
    public:
        Student(){
            cur_id=++id;
        }
        void getdata(){
            Person::getdata();
            for(int i=0;i<6;i++){
                std::cin >> marks[i];
                sum_marks+=marks[i];
            }
        }
        void putdata(){
            Person::putdata();
            std::cout << sum_marks << " " << cur_id << std::endl;
        }
};
int Student::id=0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
