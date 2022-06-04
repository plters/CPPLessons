//
//  main.cpp
//  L10PseudoFunction
//
//  Created by apple on 2022/6/4.
//

#include <iostream>

void hello(){
    printf("Hello\n");
}

class Hello {
    
public:
    void operator()(){
        printf("Hello CPP\n");
    }
};


int main(int argc, const char * argv[])
{
//    hello();
    
    Hello h;
    h();
    
    return 0;
}
