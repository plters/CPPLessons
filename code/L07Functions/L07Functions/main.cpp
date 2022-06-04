//
//  main.cpp
//  L07Functions
//
//  Created by apple on 2022/6/4.
//

#include <iostream>
#include "Man.hpp"
int main(int argc, const char * argv[])
{
    People *p = new Man(20);
    p->sayHello();
    p->eat();
    return 0;
}
