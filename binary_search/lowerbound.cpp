#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> &nums , int n , int target){
    int low = 0 ; int high = n-1 ;
    int ans = n ;
    while (low <= high){
        int mid = (low +high) / 2;
        if( nums[mid] >= target){
            ans = mid ;
            high = mid -1 ;
        }
        else {
            low = mid + 1 ;
        }
    }

    return ans ;
}

int main(){
    int n ;
    cin >>  n;
    int target  = 5 ;
    vector<int> nums(n) ;
    cout << "enter the elements" << endl ;
    for(int i  = 0 ; i <n ; i++){
        cin >> nums[i] ;
    }
    cout << "result" << lowerbound(nums , n , target ) ;
    return 0 ;
}
