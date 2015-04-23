#include <gtest/gtest.h>
#include "Solution.h"
#include <string>
#include <unordered_set>
using namespace std;

TEST(KOT,TOH){
    Solution s;
    string s1="KOT",s2="TOH";
    unordered_set<string> dict2={"KOT","TOH","HOTA","KOTB","POT","POTA","TOT"};
    auto r = s.ladderLength(s1,s2,dict2);
    EXPECT_EQ(3,r);
}
TEST(HOT,DOG){
    Solution s;
    string s1="HOT",s2="DOG";
    unordered_set<string> dict2={"HOT","DOG","KOT","CAT","SAD","KAT","KOG","NOM","NAG"};
    auto r = s.ladderLength(s1,s2,dict2);
    EXPECT_EQ(4,r);
}
TEST(HEL,BYE){
    Solution s;
    string s1="HEL",s2="BYE";
    unordered_set<string> dict2={"HEL","BYE","JOB","BAD","BEL","JOL","BYL"};
    auto r = s.ladderLength(s1,s2,dict2);
    EXPECT_EQ(4,r);
}
TEST(GOOD,WOOD){
    Solution s;
    string s1="GOOD",s2="WOOD";
    unordered_set<string> dict2={"GOOD","WOOD","KOOP"};
    auto r = s.ladderLength(s1,s2,dict2);
    EXPECT_EQ(2,r);
}
TEST(ZERO,ELEM){
    Solution s;
    string s1="ZERO",s2="ELEM";
    unordered_set<string> dict2={};
    auto r = s.ladderLength(s1,s2,dict2);
    EXPECT_EQ(0,r);
}