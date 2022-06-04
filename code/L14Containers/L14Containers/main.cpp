//
//  main.cpp
//  L14Containers
//
//  Created by apple on 2022/6/4.
//

#include <iostream>
#include <list>
#include <string>
#include <map>

using namespace std;
int main(int argc, const char * argv[]) {

    
    std::list<std::string> l;
    l.push_back("Hello");
    l.push_back("Python");
    
    for (std::list<std::string>::iterator it =l.begin(); it!=l.end(); it++) {
        std::cout<<*it<<"\n";
        
    }
    
    std::map<std::string,std::string> m;
//    m.insert(std::pair<string,string>("hello","Hello CPP"));
//    m.insert(std::pair<string,string>("name","SpringBoot"));
    m["name"] = "Bayesian";
    
//    cout<<m.at("hello")<<"\n";
    cout<<m["name"]<<"\n";
    
    return 0;
}
