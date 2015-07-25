//
//  bptree.h
//  bptree
//
//  Created by Tyler Wong on 2015-07-24.
//  Copyright (c) 2015 Tyler Wong. All rights reserved.
//

#ifndef __bptree__bptree__
#define __bptree__bptree__

#include <stdio.h>
#include <iostream>
//#include "bptree.cpp"
using namespace std;

class record{
    int key;
    string stringvalue;
    
public:
    record();
    record(int, string);//initializing a record with a key and a string.
    string getstring();
    int getkey();
};

class Node {
    int holder;
    int* keyarray;
    Node* parent; // pointer to a parent node
    Node* next; //pointer to the next neighboring node (null if not a leaf node)
public:
    Node ();
    Node (int,int);
    int someFunction(int);
};
class bptree
{
public:
    bptree();
    
    int holder;
    Node x;
    int insert(int inputkey, string inputstring, bptree * bptree);
    int remove(int parameters);
    string find(int parameters);
    int printkeys();
    int printvalues();
    
};


bptree::bptree()
{
    //implementation here
}



#endif /* defined(__bptree__bptree__) */
