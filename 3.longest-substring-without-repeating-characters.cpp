/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    //find pos of recent next different letter
    int PosOfLastSameLetter(int pos,string s){
        while(s[pos]==s[pos+1]){
            pos++;
        }
        return pos;
        //pos不变：说明没有相邻的相同字符
        //pos变化：pos指向的是最后一个相同的字符
    }

    int Max(int a,int b){
        return a > b ? a : b;
    }

    int lengthOfLongestSubstring(string s,int pos = 0,int MaxNum = 1) {

        if(pos == s.size() - 1){
            return MaxNum;
        }

        string substr = "";
        int tmp = 0;                                                    //记录本轮的最大连续不同数

        pos = PosOfLastSameLetter(pos,s);                               //跳到最后一个相同的字符
        while(substr.find(s[pos]) == string::npos){
            substr = substr + s[pos];
            tmp++;
            pos++;
        }

        //将本轮的tmp和MaxNum比较，传递给下一轮的清点
        MaxNum = Max(MaxNum,tmp);

        return lengthOfLongestSubstring(s,pos,MaxNum);
    };
};
// @lc code=end

