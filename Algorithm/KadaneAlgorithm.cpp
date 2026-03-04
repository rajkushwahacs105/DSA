#include<iostream>
#include<vector>
#include<climits>
using namespace std;




int main(){
    vector<int>nums = {1,-2,3,5,-8};

    int maxsum = INT_MIN;
    int curr = 0;
    

    for(int i  = 0 ; i < nums.size() ; i ++){
        curr +=nums[i];
        
            maxsum = max(maxsum , curr);

            if(curr<0){
                curr = 0;

            }

            

        }
    


    cout<<maxsum;

    


    return 0;
}