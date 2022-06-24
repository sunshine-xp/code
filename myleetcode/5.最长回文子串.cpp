/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 *
 * https://leetcode.cn/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (36.79%)
 * Likes:    5363
 * Dislikes: 0
 * Total Accepted:    1.1M
 * Total Submissions: 2.9M
 * Testcase Example:  '"babad"'
 *
 * 给你一个字符串 s，找到 s 中最长的回文子串。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：s = "babad"
 * 输出："bab"
 * 解释："aba" 同样是符合题意的答案。
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：s = "cbbd"
 * 输出："bb"
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 <= s.length <= 1000
 * s 仅由数字和英文字母组成
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool isPal(string s,int i,int j) {
        string r = s.substr(i,j-i+1);
        r.reverse(r.begin(),r.end());
        if(r == s) return true;
        else return false;
    }
    string longestPalindrome(string s) {
        int ans = 1;
        for(int i = 0;i<s.size();i++)
        for(int j = 0;j<s.size();j++)
            if(isPal(s,i,j) && j-i>ans) return s.substr(i,j-i+1);
    }
    
};
// @lc code=end

