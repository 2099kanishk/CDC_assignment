#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "enter the size of the array"  << endl ;
    int n;
    cin >> n ; 
    vector<int> nums(n) ;
    cout <<"enter the elements of the array" << endl ;
    for(int i = 0 ; i< n  ; i++){
        cin >> nums[i] ;
    }
    int maxnum = nums[0] ;
    int minnum = nums[0] ;
    for(int i = 0 ; i < n ; i++){
      if(nums[i] > maxnum){
        maxnum = nums[i];
      }
      if(nums[i] < minnum) {
        minnum = nums[i] ;
      }
    }
    cout <<"maxnum is " << maxnum << endl ;
    cout << "minnum is " << minnum << endl ;


    return 0 ;



}