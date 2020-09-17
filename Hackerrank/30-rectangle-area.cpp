#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

// Link to the problem : https://www.hackerrank.com/challenges/rectangle-area
class Rectangle{
    public:
        int width, height;
        void display(){
            std::cout << width << " " << height << std::endl;
        }
};

class RectangleArea: public Rectangle{
    public:
        void read_input(){
            int in_width, in_height;
            std::cin >> in_width >> in_height;
            width = in_width; height = in_height;
        }
        void display(){
            std::cout << width*height << std::endl;
        }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}