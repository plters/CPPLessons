//
//  People.hpp
//  L01OOP
//
//  Created by apple on 2022/6/3.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>

#endif /* People_hpp */


class People {
private:
    int age;
    int sex;
public:
    People();
    People(int age,int sex);
    int getAge();
    int getSex();
    void sayHello();
};
