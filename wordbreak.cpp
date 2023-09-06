
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool solve(string A, vector<string>& B , int idx , int n,unordered_set<string>& hs)
{
    if(idx>=n)
        return true;
    // if(hs.find(A)!=hs.end())
    //     return true;
    for(int i=0;i<n;i++)
    {
        if( hs.find(A.substr(idx,i)) != hs.end() )
            if(solve(A,B,idx+i,n,hs))
                return true;
    }
    return false;
}


bool wordBreak(string s, vector<string>& wordDict) {
 
    int n = s.length();
        
    unordered_set<string> hs;
    for(int i=0;i<wordDict.size();i++)
    {
        hs.insert(wordDict[i]);
    }
  
    return solve(s,wordDict,0,n,hs);

}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
}

