//
//  main.cpp
//  L02NS
//
//  Created by apple on 2022/6/3.
//

#include <iostream>
#include  "People.hpp"
using namespace noggie;
int main(int argc, const char * argv[]) {
 
    
    People *p = new People();
    p->sayHello();
    
    delete p;
    return 0;
}
