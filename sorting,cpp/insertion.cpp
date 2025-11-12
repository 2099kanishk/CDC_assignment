#include <bits/stdc++.h>
using namespace std;
vector<int> insertion_sort(vector<int> &nums , int n){
    for(int i =  0 ; i < n ; i++){
        for(int j = i+1 ; j< n ; j++){
            if(nums[i] > nums[j]) {
                swap( nums[i] , nums[j]) ;
            }
        }
    }
    return nums ;
}
int  main(){
     int n ;
    cin >>  n;
    int target  = 5 ;
    vector<int> nums(n) ;
    cout << "enter the elements" << endl ;
    for(int i  = 0 ; i <n ; i++){
        cin >> nums[i] ;
    }
    vector<int> arr = insertion_sort( nums , n) ;
    for(int i = 0 ; i< n ; i++){
        cout << arr[i] ;
    }

    return 0 ;

}