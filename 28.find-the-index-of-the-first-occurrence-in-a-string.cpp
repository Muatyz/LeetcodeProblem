/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        //最容易想到的，使用string的原生方法；
        int pos = haystack.find(needle);
        return pos;
        
        //这个方法会比直接调用find还要慢...
        // int N = haystack.size();
        // int n = needle.size();
        // int i = 0;
        // while(i <= N - n){
        //     if(haystack.substr(i,n) == needle){
        //         return i;
        //     }
        //     else{
        //         i++;
        //     }
        // }

        // return -1;
    }
};
// @lc code=end

