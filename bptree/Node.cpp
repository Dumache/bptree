//
//  Node.cpp
//  bptree
//
//  Created by Tyler Wong on 2015-07-24.
//  Copyright (c) 2015 Tyler Wong. All rights reserved.
//

#include "Node.h"
#include <iostream>
Node::Node()
{
    //implementation here
}

Node::Node(int x)
{
    holder = x;
    
    
}

int Node::someFunction(int parameters)
{
    holder = parameters;
    printf("holder value is %d \n", holder);
    //implemenation here
    return 0;
}