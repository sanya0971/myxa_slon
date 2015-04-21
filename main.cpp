//
//  main.cpp
//  myxa_slon
//
//  Created by sanya on 21/04/15.
//  Copyright (c) 2015 MacBook Pro. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "files.h"
using namespace std;

const string words="data.txt"; //файл с исходным и конечным словом
const string dict="dict.txt";  //файл словаря

int main(int argc, const char * argv[]) {
    files c(words,dict);
    c.print();
    
    return 0;
}
