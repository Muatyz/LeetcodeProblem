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
        // if(len % 2 == 1){
        //     return false;
        // }

        vector<char>bracket = {};
        for(int i = 0;i < len ;i++){
            if(s[i] == '[' || s[i] == '{' || s[i] == '('){
                bracket.push_back(s[i]);
            }

            if(s[i] == ']' || s[i] == '}' || s[i] == ')'){
                // if(i == 0){
                //     //右括号开头直接判处死刑
                //     return false;
                // }
                if(bracket.size() == 0){
                    //待匹配栈为空，无可匹配者
                    return false;
                }
                if(pair1[s[i]] != bracket.back()){
                    //栈顶元素和判定元素不匹配
                    return false;
                }
                //匹配成功者,对待匹配栈进行出栈操作
                bracket.pop_back();
            }
        }

        //最后再检查一遍待匹配栈是否为空
        return bracket.size() == 0;
    }
};
// @lc code=end

