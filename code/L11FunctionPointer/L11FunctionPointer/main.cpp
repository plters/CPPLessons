//
//  main.cpp
//  L11FunctionPointer
//
//  Created by apple on 2022/6/4.
//

#include <iostream>
#include <thread>
#include <unistd.h>
class Object;

typedef void (Object::*SayHi)();
typedef void (Object::*CallatterHandler)();


void threadFunc(Object *target,CallatterHandler handler,int delay){
    sleep(delay);
    (target->*handler)();
}
void callater(Object *target,CallatterHandler handler,int delay){
    std::thread t(threadFunc,target,handler,delay);
    t.join();
}

#define CH(fp) (CallatterHandler)(&fp)

class Object {

public:
//    void (Object::*sayHi)();
    SayHi sayHi;
};




class Hello:public Object {
    
public:
    Hello(){
//        sayHi = (void(Object::*)())(&Hello::HelloSayHi);
//        sayHi = (SayHi)(&Hello::HelloSayHi);
//        (this->*sayHi)();
        
        callater(this,CH(Hello::HelloSayHi),3);
    }
    
    void HelloSayHi(){
        printf("Hello CPP\n");
    }
};




int main(int argc, const char * argv[])
{
    Hello *h = new Hello();
    
    delete h;
    return 0;
}
