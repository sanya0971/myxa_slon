//
//  files.h
//  myxa_slon
//
//  Created by sanya on 21/04/15.
//  Copyright (c) 2015 MacBook Pro. All rights reserved.
//

#ifndef __myxa_slon__files__
#define __myxa_slon__files__

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class files{
private:
    string s1; //исходное слово
    string s2; //конечное слово
    string dict [1000]; //словарь
    bool f1 = true;
    bool f2 = true;
    int k = 0;
public:
    files(const string,const string);
    ~files();
    void print();
};

#endif /* defined(__myxa_slon__files__) */
