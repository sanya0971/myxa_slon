//
//  lib.cpp
//  word
//
//  Created by sanya on 23/04/15.
//  Copyright (c) 2015 MacBook Pro. All rights reserved.
//

#include "Solution.h"


bool Solution::is_changeable(const string &lhs, const string &rhs){
    size_t count = 0;
    for(auto l = lhs.cbegin(), r = rhs.cbegin();    l != lhs.cend();    ++l,++r)
        if(*l != *r)    ++count;
    return count == 1;
}

int Solution::ladderLength(string start, string end, unordered_set<string> &dict){
    if(dict.empty())    return 0;
    
    auto d = dict;
    d.erase(start);
    d.erase(end);
    /*for (const auto& elem: d) {
        cout<<elem<<" ";
    }*/
    if(d.empty())       return 2;
    
    //! lambda to make next level
    auto next_level = [&](const Level& curr) -> Level
    {
        string s;
        Level ret;
        for(const auto& s : curr)
            for(const auto& attempt : d)
                if(is_changeable(s,attempt))    {
                    ret.push_back(attempt);
                }
            
        return ret;
    };
    
    //! lambda to check if end reached
    auto if_found = [&](const Level& lvl) -> bool
    {
        for(const auto& s : lvl)
            if(is_changeable(s,end)) {  cout<<s<<endl; return true;}
        return false;
    };
    
    /**
     * @brief top abstraction layer
     */
    size_t count = 0;
    for(auto curr = Level{start}; !if_found(curr);   curr = next_level(curr))
    {
        if(curr.empty())    return 0;
        for(const auto& s : curr) d.erase(s);
        ++count;
    }
    
    return count + 2;
}

