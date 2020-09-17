#include <bits/c++config.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/attribute-parser
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;
    std::cin >> n >> q;
    std::cin.ignore();

    std::map<std::string,std::string> attributeDB;
    std::string inputstr,tag_preamble="";

    for(int i=0;i<n;i++){
        std::getline(std::cin,inputstr);

        std::stringstream ss(inputstr);
        std::string word, attribute, value;
        std::size_t pos;
        while(std::getline(ss,word,' ')){
            if(word[0]=='<'){
                std::string tag;
                if(word[1]=='/'){
                    tag=word.substr(2);
                    tag=tag.substr(0,tag.length()-1);
                    pos=tag_preamble.find("."+tag);
                    if(pos==std::string::npos) tag_preamble="";
                    else tag_preamble=tag_preamble.substr(0,pos);
                }
                else{
                    tag=word.substr(1);
                    if(tag.find(">")!=std::string::npos)
                    tag=tag.substr(0,tag.length()-1);
                    if(tag_preamble=="") tag_preamble=tag;
                    else tag_preamble=tag_preamble+"."+tag;
                }
            }
            else if(word[0]=='"'){
                if(word.back()=='>')
                value=word.substr(1,word.length()-3);
                else if (word.back()=='"')
                value = word.substr(1,word.length()-2);
                attributeDB[attribute]=value;
            }
            else if(word[0]!='='){
                attribute=tag_preamble+"~"+word;
            }
        }
    }

    for(int i=0;i<q;i++){
        std::getline(std::cin,inputstr);
        if(attributeDB.find(inputstr)==attributeDB.end())
        std::cout << "Not Found!" << std::endl;
    else
        std::cout << attributeDB[inputstr] << std::endl;
    }

    return 0;
}
