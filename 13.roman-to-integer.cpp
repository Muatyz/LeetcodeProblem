/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int i;
        int Num = 0;
        unordered_map <char,int> rtoi = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        for(i = 0;i < s.length();i++){
            if(rtoi[s[i]] >= rtoi[s[(i+1)]]){
                Num += rtoi[s[i]];
            }
            else{
                Num -= rtoi[s[i]];
            }
        }

        return Num + rtoi[s[i]];
    }
};
// @lc code=end

