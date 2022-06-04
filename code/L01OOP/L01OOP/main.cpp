//
//  main.cpp
//  L01OOP
//
//  Created by apple on 2022/6/3.
//

#include <iostream>
#include "People.hpp"
//class People {  
//
//public:
//    void sayHello(){
//        printf("Hello CPP\n");
//    }
//};

int main(int argc, const char * argv[]) {
  
    People *p = new People();
    p->sayHello();
    delete p;
    
//    malloc()
//    free()
    
    return 0;
}
