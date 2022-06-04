//
//  main.cpp
//  L15String
//
//  Created by apple on 2022/6/4.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, const char * argv[])
{
    
    string str;
    str += "Hello ";
    str += "World";
    // insert code here...
    std::cout <<str<<"\n";
    
    stringstream ss;
    ss<<"Hello ";
    ss<<200;
    ss<<" ";
    ss<<2.5;
    ss<<"Hello "<<"Statistics"<<1000;
    
    cout<<ss.str()<<"\n";
   
    return 0;
}
