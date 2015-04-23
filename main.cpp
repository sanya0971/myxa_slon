#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include "Solution.h"
#include <fstream>
using namespace std;

const string wordsFile = "data.txt";
const string dictFile = "dict.txt";

int main()
{
    unordered_set<string> dict2;
    
    string s1,s2;
    string dict [1000];
    
    int k =0;
    bool f1 = true, f2 = true;;
    
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
        d.close();
        
    }

    for (int i=0 ; i<k; i++)
        dict2.insert(dict[i]);

    for (const auto& elem: dict2) {
        cout<<elem<<" ";
    }
    string start{s1},end{s2};
    Solution s;
    int ret = 0; //количество слов в цепочке
    cout<<endl<<s1<<endl;
    ret = s.ladderLength(start,end,dict2);
    cout<<s2<<endl;
    return 0;
}