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
class record{
    int key;
    string stringvalue;
    
public:
    record();
    record(int, string);//initializing a record with a key and a string.
};
record::record(){
    //default
    key=0;
    stringvalue = "nothing";
}

record::record(int key, string stringvalue){
    //proper construct
    this->key = key;
    this->stringvalue =stringvalue;
}




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
Node::Node()//default node constructor
{
    holder = 700;
    //implementation here
}

Node::Node(int maxkeyvalue, int y)
{
    keyarray = new int[maxkeyvalue]; // this is an array that is going to hold the key values.
    
    
    
}

int Node::someFunction(int parameters)
{
    //holder = parameters;
    printf("holder value is %d \n", holder);
    //implemenation here
    keyarray[1]=0;
    return 0;
}





int bptree::insert(int parameters)
{
    holder = parameters;
    printf("holder value is %d \n", holder);
    //implemenation here
    return 0;
}







int bptree::remove(int parameters){
    
    return 0;
    
}

int bptree::find(int parameters){
    
    return 0;
}

int bptree::printkeys(int parameters){
    
    return 0;
}

int bptree::printvalues(int parameters){
    
    return 0;
}

int selection(int parameters){ // this function is going to direct us to the function that we need to use, depending on what the user inputs
    switch (parameters){
        case 1:
            cout<<"hello";
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
    }
    return 0;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int maxkeys;
    cout << "Hello, please enter the number of keys per node: \n";
    cin>>maxkeys;
    
    bptree tree;
    int choice = 100;
    
    while (choice>0){
        cout<<"What would you like to do? ";
        cin>>choice;
        printf("you chose %d \n", choice);
        selection(choice);
        
    }
    return 0;
}

//might need an insert node into tree function?
