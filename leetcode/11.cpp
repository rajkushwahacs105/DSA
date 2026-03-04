#include<iostream>
#include<vector>
#include<climits>
using namespace std;




int main(){
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    //   app1
    //   int n = height.size();
        
       
    //     // int len = end-start - 1;

    //     int maxvol = 0;
    //     for(int i = 0 ; i<n ; i++){
    //         for(int j = i; j < n ; j++){
    //             int curvol = min(height[i],height[j])*(j-i);
    //             maxvol = max(maxvol,curvol);
    //         }
    //     }
    //     cout<<maxvol<<endl;




    // app2


     int n = height.size();
        
        int start = 0;
        int end = n-1;
        

        int maxvol = 0;

        while (start<end){
            int curvol = min(height[start],height[end])*(end- start);
            maxvol = max(maxvol,curvol);
            if(height[start]<height[end]){
                start++;
            }else{
                end--;
            }
        
        }

        cout<<maxvol<<endl;

        return maxvol;

    


    return 0;
}