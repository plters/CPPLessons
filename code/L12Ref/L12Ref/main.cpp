//
//  main.cpp
//  L12Ref
//
//  Created by apple on 2022/6/4.
//

#include <iostream>

class Point{
private:
    int x,y;
    
public:
    Point(int x,int y){
        this->x = x;
        this->y = y;
    }
    
    void add(Point &p){
        this->x += p.x;
        this->y += p.y;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
}

int main(int argc, const char * argv[])
{
    Point p(1,1);
    Point p1(2,3)
    p.add(p1);
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
