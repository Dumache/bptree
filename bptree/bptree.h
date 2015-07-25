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

class bptree
{
public:
    bptree();
    
    int holder;
    int insert(int parameters);
    int remove(int parameters);
    int find(int parameters);
    int printkeys(int parameters);
    int printvalues(int parameters);
    
};


bptree::bptree()
{
    //implementation here
}



#endif /* defined(__bptree__bptree__) */
