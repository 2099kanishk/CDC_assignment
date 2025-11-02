#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> runsum(n) ; 
        runsum[0] = nums[0] ;
        for(int i = 1 ; i < n ;i ++){
            runsum[i] = nums[i] + runsum[i-1] ;
        }
        return runsum ;
        
    }
int main(){
    cout << "enter the size of the array"  << endl ;
    int n;
    cin >> n ; 
    vector<int> nums(n) ;
    cout <<"enter the elements of the array" << endl ;
    for(int i = 0 ; i< n  ; i++){
        cin >> nums[i] ;
    }

    vector<int>result = runningSum(nums) ;

    cout << "running sum" << endl ;
    for(int i = 0 ; i < n ; i++){
        cout << result[i] << endl ;
    }

    cout << endl ;
    return 0 ;

}