//
//  main.cpp
//  L06Super
//
//  Created by apple on 2022/6/4.
//

#include <iostream>
#include "Man.hpp"
int main(int argc, const char * argv[])
{
    
    Man * m = new Man(21);
//    m->sayHello();
    m->People::sayHello();
    return 0;
}
