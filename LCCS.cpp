#include <iostream>
#include <vector>
#include <string>
using namespace std;

int LCCS(vector<vector<int>> dp,string s1,string s2){
  int max=0,i,j;
  for(i=1;i<dp.size();i++)
    for(j=1;j<dp[i].size();j++)
      if(s1[i-1]==s2[j-1]{
        dp[i][j]=dp[i-1][j-1]+1;
        if(max<dp[i][j])
          max=dp[i][j];
      }else
        dp[i][j]=dp[i-1][j];
  return max;
}

int main(){
  string s1,s2;
  cin>>s1>>s2;
  vector<vector<int>> dp(s2.size()+1,vector<int>(s1.size()+1,0));
  int l=LCCS(dp,s1,s2);
  cout<<s1.size()-l<<endl;
  return 0;
}
