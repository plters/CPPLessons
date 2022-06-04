//
//  main.cpp
//  L13FriendClass
//
//  Created by apple on 2022/6/4.
//

#include <iostream>

class A{
    friend class B;
    
private:
    int num;
public:
    A(){
        num = 10;
    }
};

class B:public A {
    
public:
    B(){
        A a;
        printf("%d\n",a.num);
//        printf("%d\n",num);
    }
};

int main(int argc, const char * argv[]) {
  
    B b;
    
    return 0;
}
