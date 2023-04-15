/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
#include <string>
#include <algorithm>
using namespace std;

//抄的题解，清楚使用carry的思想，但是距离实现有一定的距离。


class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = a.length() - 1;int j = b.length() - 1;
        int carry = 0;

        while(i >= 0 || j >= 0){
            int sum = carry;
            if(i >= 0) sum += a[i--] - '0';
            if(j >= 0) sum += b[j--] - '0';
            carry = sum > 1 ? 1 : 0;
            res += to_string(sum % 2);
        }
        
        if(carry) res += to_string(carry);
        reverse(res.begin(),res.end());

        return res;
    }
};
// @lc code=end

