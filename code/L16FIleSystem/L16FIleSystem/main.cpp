//
//  main.cpp
//  L16FIleSystem
//
//  Created by apple on 2022/6/4.
//

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main(int argc, const char * argv[]) {
    
//    ofstream of("data.txt");
//    of<<"Hello CPP\n";
//    of.close();
    
    ifstream inf("data.txt");
    
    stringbuf sb;
    inf>>&sb;
//    char c;
//    inf>>c;
    
    // insert code here...
    std::cout << sb.str() <<"\n";
    return 0;
}
