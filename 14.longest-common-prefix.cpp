/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j;                                        //j represents the jth letter to compare with;
        string common;

        string str = strs[0];
        int len = str.length();
        int num = strs.size();
        for(j = 0;j < len;j++){
            vector<string>::iterator it = strs.begin();
            for(i = 0;i < num - 1;i++){
                if((*it)[j] != (*(it + 1))[j]){
                    return common;
                }
                it++;
            }
            common.push_back((*it)[j]);
        }

        return common;
    }
};
// @lc code=end