//
//  lib.h
//  word
//
//  Created by sanya on 23/04/15.
//  Copyright (c) 2015 MacBook Pro. All rights reserved.
//

#ifndef __word__lib__
#define __word__lib__

#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
private:
    bool is_changeable(const string& lhs, const string& rhs);
    
public:
    using Level = vector<string>;
    int ladderLength(string start, string end, unordered_set<string> &dict);
};

#endif /* defined(__word__lib__) */
