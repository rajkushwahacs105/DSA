#include<iostream>
#include<vector>
#include<climits>
#include<cmath>

using namespace std;

int fun(){
    
    vector<int> digits  =  {9,9};


        int n = digits.size();



    

    
        int sum =0;
        int power = pow(10,n-1);


        


        

        for(int val : digits){
            sum += val*power;
            power /=10;
        }

        if(sum>INT_MAX) return 0;

        sum  += 1;

        cout<<sum<<endl;


        vector<int> arr;

        while(sum>0){
            if (!arr.empty()) {
         arr.insert(arr.begin(), sum%10);
    
        } else {
         arr.push_back(sum%10); 
        }       

            sum /= 10; 

        }

       
        for(int val : arr){
            cout<<val<<endl;
        }


    
        
    }

    int main(){
        fun();
    }

