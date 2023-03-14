/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> pair1 = {
            {']','['},
            {')','('},
            {'}','{'},
        };

        int len = s.length();
        if(len % 2 == 1){
            return false;
        }

        vector<char>bracket = {};
        int flag = 0;
        for(int i = 0;i < len ;i++){
            if(s[i] == '[' || s[i] == '{' || s[i] == '('){
                bracket.push_back(s[i]);
            }

            if(s[i] == ']' || s[i] == '}' || s[i] == ')'){
                if(i == 0){
                    return false;
                }
                if(bracket.size() == 0){
                    return false;
                }
                if(pair1[s[i]] != bracket.back()){
                    return false;
                }
                bracket.pop_back();
            }
        }

        return bracket.size() == 0;
    }
};
// @lc code=end

