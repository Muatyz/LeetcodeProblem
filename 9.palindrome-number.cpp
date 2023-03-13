/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        if(x < 10 && x >= 0){
            return true;
        }
        vector<int>Num;
        int e = x % 10;
        if(e == 0){
            return false;
        }
        int num = x - e;
        int j = 0;
        Num.push_back(e);
        while(num != 0){
            num /= 10;
            e = num % 10;
            Num.push_back(e);
            j++;
            num -= e;
        }

        for(int i = 0;i < j / 2 + 1;i++){
            if(Num[i] != Num[j - i]){
                return false;
            }
        }

        return true;
    }
};
// @lc code=end

