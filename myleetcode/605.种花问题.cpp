/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for(int i = 1;i<flowerbed.size() - 1;i++) {

            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) 
             {
                   count++;
                   flowerbed[i] = 1;
             }
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0) count++;
        if(flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0)
        count++;
        return count >= n;
    }
};
// @lc code=end

