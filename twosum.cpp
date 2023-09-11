class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    out.push_back(i);
                    out.push_back(j);
                    break;

                }
            }
        
        }


        return out;
        
    }
};

/*explanation:-
Iterate through two nested loops, using the outer loop's 
iterator 'i' to select each element one by one. For each selected element,
add it to every element in the 'a' array using the inner loop's iterator 'j'.
If the sum of the elements equals a desired target sum, record the indices of these elements in an 
array and return this array as the first pair found*/