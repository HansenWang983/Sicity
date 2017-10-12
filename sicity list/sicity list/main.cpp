//
//  main.cpp
//  sicity list
//
//  Created by on 2017/10/11.
//  Copyright © 2017年 hansen. All rights reserved.
//

#include <iostream>
#include "remove.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    List list;
    list.insert(2,1);
    list.insert(3,1);
    list.insert(4,1);
    list.insert(5,1);
    list.insert(1,1);
    list.remove(2);
    list.print();
    cout << "sabsckj";
    return 0;
}
