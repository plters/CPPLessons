//
//  People.cpp
//  L01OOP
//
//  Created by apple on 2022/6/3.
//

#include "People.hpp"

People::People(){
    this->age = 10;
    this->sex = 1;
}

People::People(int age,int sex){
    this->age = age;
    this->sex = sex;
}

int People::getAge(){
    return this->age;
}

int People::getSex(){
    return this->sex;
}

void People::sayHello(){
    printf("Hello CPP\n");
}

