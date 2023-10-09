 vector<int> searchRange(vector<int>& nums, int target) {
        
        auto it=find(nums.begin(),nums.end(),target);
         auto t=count(nums.begin(),nums.end(),target);
         vector<int>ans;
        if(it==nums.end())
        {
            return {-1,-1};
        }
        t--;
        ans.push_back((it-nums.begin()));
        ans.push_back((it-nums.begin()+t));
        return ans;
        
    }
};
