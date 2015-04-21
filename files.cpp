//
//  files.cpp
//  myxa_slon
//
//  Created by sanya on 21/04/15.
//  Copyright (c) 2015 MacBook Pro. All rights reserved.
//

#include "files.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

files::files(const string wordsFile,const string dictFile ){
    ifstream w(wordsFile);
    if (!w){
        cout<<"Невозможно получить доступ к файлу\n";
        f1 = false;
    }
    else{
        w>>s1;
        w>>s2;
        w.close();
    }
    ifstream d (dictFile);
    if (!d){
        cout<<"Невозможно получить доступ к файлу\n";
        f2 = false;
    }
    else{
        while (!d.eof()){
            d>>dict[k];
            k++;
        }
        
    }
}

files::~files(){
}

void files::print(){
    if (f1 && f2){
        cout<<"Исходное слово: "<<s1<<endl;
        cout<<"Конечное слово: "<<s2<<endl;
        cout<<"Словарь:\n";
        for (int i=0; i<k; i++)
            cout<<dict[i]<<endl;
    }
    else
        cout<<"Ошибка открытия одного из файлов\n";

}
