//
//  bptree.cpp
//  bptree
//
//  Created by Tyler Wong on 2015-07-24.
//  Copyright (c) 2015 Tyler Wong. All rights reserved.
//

#include "bptree.h"
#include <iostream>
#include "Node.h"
using namespace std;
bptree::bptree()
{
    //implementation here
}

int bptree::insert(int parameters)
{
    holder = parameters;
    printf("holder value is %d \n", holder);
    //implemenation here
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    Node haha;
    haha.someFunction(5);
    
    cout << "Hell o, World!\n";
    return 0;
}
