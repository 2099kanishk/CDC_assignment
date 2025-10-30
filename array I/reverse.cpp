#include<bits/stdc++.h>
using namespace std ;
vector<int> reverse(vector<int> &arr){
    vector<int>result ;
    int n = arr.size();
    for(int i = n-1 ; i >=0 ; i--){
        result.push_back(arr[i]) ;
        

    }
     return result; 
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

    vector<int> reversed = reverse(nums) ;
     cout << "the reversed array is"  << endl ;
    for(int i = 0 ; i < reversed.size() ; i++){
            cout << reversed[i] << " " ;
    }
    cout << endl ;
}