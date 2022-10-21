// question link: https://leetcode.com/problems/largest-perimeter-triangle/

// this is a pretty basic greedy question, perfect for quick revision of the algorithm

// the idea is to sort the sides and then start checking from the end
// we will act greedy and check the largest sides

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ind= nums.size()-1;
        while(ind>=2){
            if(nums[ind-1]+nums[ind-2]<=nums[ind]){
                --ind;
                continue;
            }
            return (nums[ind-1]+nums[ind-2]+nums[ind]);
        }
        return 0;
    }
};