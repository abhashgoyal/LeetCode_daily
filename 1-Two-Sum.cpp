class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        /////////////////O(n*N)
        // int a=0;
        // int b=0;
        // for(int i = 0 ; i < nums.size();i++){
        //     for(int j = i+1; j< nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             a=i;
        //             b=j;
        //         }
        //     }
        // }
        // return {a,b};
        
        //// Two pointer
        
        unordered_map<int,int> mp;
        vector<int>ans;

        for(int i = 0;i<nums.size();i++){
            int a = target-nums[i];
            if(mp.count(a)){
                ans.push_back(i);
                ans.push_back(mp[a]);
                return ans;
            }
            mp[nums[i]]=i;
        }
        return ans;



        
    }
};