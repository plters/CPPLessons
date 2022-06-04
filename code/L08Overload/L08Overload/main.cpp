//
//  main.cpp
//  L08Overload
//
//  Created by apple on 2022/6/4.
//

#include <iostream>


class Hello {
    
    
public:
    void sayHello(){
        printf("Hello CPP\n");
    }
//    void sayHello(char *name){
//        printf("Hello %s\n",name);
//    }
    void sayHello(std::string name){
        std::string str="Hello ";
        str+=name;
        std::cout<<str<<"\n";
    }
};

int main(int argc, const char * argv[]) {
    Hello *h = new Hello();
    h->sayHello();
    std::string name = "Calculus";
    //h->sayHello((char*)name.c_str());
    h->sayHello(name);
    
    return 0;
}
