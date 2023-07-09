#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

      vector<int> twoSum(vector<int>& nums, int target) {
                std::vector< int > arr;
        int diff, i, j;
        for (i=0; i < nums.size()-1; i++){
        diff = target - nums[i];

        for(j=i+1; j<nums.size(); j++)
        {
         if(diff == nums[j]){
            arr.push_back(i);
            arr.push_back(j);
         };
        }
    }

    return arr;
}
};


int main(){
    Solution s ;
    vector<int> v;
     v={1,6,3,2,5};
     vector<int> result= s.twoSum (v, 11);
     for(int i: result)
     {
          cout<<i<<endl;
     }
     return 0;

}
