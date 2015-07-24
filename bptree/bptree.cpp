//
//  bptree.cpp
//  bptree
//
//  Created by Tyler Wong on 2015-07-24.
//  Copyright (c) 2015 Tyler Wong. All rights reserved.
//

#include "bptree.h"
#include <iostream>
//#include "Node.h"
using namespace std;


class Node {
    int keyvalue, holder;
    Node* parent; // pointer to a parent node
public:
    Node ();
    Node (int,int);
    int someFunction(int);
    };
Node::Node()
{
    holder = 700;
    //implementation here
}

Node::Node(int x, int y)
{
    holder = x;
    
    
}

int Node::someFunction(int parameters)
{
    //holder = parameters;
    printf("holder value is %d \n", holder);
    //implemenation here
    return 0;
}



bptree::bptree()
{
    //implementation here
}

int bptree::insert(int parameters)
{
   // holder = parameters;
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
