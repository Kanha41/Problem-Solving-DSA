
#include<iostream>
#include<vector>
#include<map>
#include <numeric>
using namespace std;

class Solution{
  public:
  bool check(vector<int> & nums, int k){
    map<int, int> mp;
    mp[0]=-1;
    int Prefix=0;
    for(int i=0; i<nums.size(); i++){
      Prefix += nums[i];
      int rem =Prefix%k;

      if(mp.find(rem)!=mp.end()){
        if(i-mp[rem]>1){
          return true;
        }
      }else{
      mp[rem]=i;
    }
  }     
  return false;
  }
};
int main(){
  vector<int> nums={23, 2, 4, 6, 7};
  int k=6;
  Solution s;
  if(s.check(nums,k)){
    cout<<"true";
  }else{
    cout<<"false";
  }
  return 0;
}