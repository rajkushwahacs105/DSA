#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int a = 0;
    int b = 0;

    


    while(n>0){
        a = a + (n%10)*pow(2,b);
        b +=1;
        n /=10;
    }

    cout<<a;


    }
   
