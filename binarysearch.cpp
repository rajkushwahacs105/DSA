#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;



int main(){

    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 150;

    int start =0 ; 
        int end = nums.size() - 1;
        while(start <= end){
            int mid = start + (end - start)/2;

            if(target == nums[mid]){return mid;}

            if(nums[0] <nums[mid] ){
                if(nums[0]<= target <=nums[mid]){
                    end = mid-1;
                }else{
                start = mid +1;
            }
            }else{
                start = mid + 1;
            }
        }


        return -1;
        
    }
   
   
