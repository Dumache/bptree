//
//  bptree.cpp
//  bptree
//
//  Created by Tyler Wong on 2015-07-24.
//  Copyright (c) 2015 Tyler Wong. All rights reserved.
//

#include <iostream>
//#include "Node.h"
#include "bptree.h"
using namespace std;

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


string record::getstring(){
    return stringvalue;
}

int record::getkey(){
    
    return key;
}


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





int bptree::insert(int inputkey, string inputstring, bptree *tree)
{
    //holder = parameters;
    //printf("holder value is %d \n", holder);
    //implemenation here
    return 0;
}







int bptree::remove(int parameters){
    
    return 0;
    
}

string bptree::find(int parameters){
    
    return 0;
}

int bptree::printkeys(){
    
    return 0;
}

int bptree::printvalues(){
    
    return 0;
}




int selection(int parameters, bptree *tree){ // this function is going to direct us to the function that we need to use, depending on what the user inputs
    int inputkey;
    string inputstring;
    //the string and inputkey are variables used to store user input
    switch (parameters){
        
        case 1:{//insert
            cout<<"please enter the key value of your new node: ";
            cin>>inputkey;
            cout<<"please enter the string value associated with the key: ";
            cin>>inputstring;
            
            //create a new record for that pair
            record newrecord = record(inputkey, inputstring);
            //cout<<newrecord.getstring() + "\n";
            
            //NOW WE NEED A METHOD THAT INSERTS IT INTO THE TREE
            
            tree->insert(inputkey, inputstring, tree);
           
            
            break;
        }
        case 2://remove
            cout<<"please enter the key value of the node: ";
            cin>>inputkey;
            tree->remove(inputkey);
            break;
        case 3://find
            cout<<"please enter the key value of the node: ";
            cin>>inputkey;
            tree->find(inputkey);
            break;
        case 4://printkeys
            tree->printkeys();
            break;
        case 5://printvalues
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
        cout<<"What would you like to do? \n";
        cout<<"Enter 1 for insertion \n";
        cout<<"Enter 2 for deletion \n";
        cout<<"Enter 3 to find a key \n";
        cout<<"Enter 4 to print all keys \n";
        cout<<"Enter 5 to print all values \n";
        cout<<"And Enter 0 to exit \n";
        
        cin>>choice;
        printf("you chose %d \n", choice);
        selection(choice, &tree);
        
    }
    return 0;
}

//might need an insert node into tree function?
