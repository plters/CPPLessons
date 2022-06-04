//
//  main.cpp
//  L05SuperC
//
//  Created by apple on 2022/6/4.
//

#include <iostream>
#include "Man.hpp"
int main(int argc, const char * argv[])
{
    Man *m = new Man(20);
    
    printf("age:%d\n",m->getAge());
    return 0;
}
