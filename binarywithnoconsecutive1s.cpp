
void fun(vector<int>& arr,int idx,int n,vector<vector<int>>& ans)
{

    if(idx==n)
    {
        ans.push_back(arr);
        return;
    }

    if(idx==0)
    {
        arr[idx]=0;
        fun(arr,idx+1,n,ans);
        arr[idx]=1;
        fun(arr,idx+1,n,ans);
    }
    else
    {
        arr[idx]=0;
        fun(arr,idx+1,n,ans);
        if(arr[idx-1]!=1)
        {
            arr[idx]=1;
            fun(arr,idx+1,n,ans);
        }
    }

}

void convert_to_string(vector<int>& arr,vector<string>& res,int N)
{
    string temp="";
    for(int i=0;i<N;i++)
        temp+=(arr[i]+'0');
    res.push_back(temp);
}


vector<string> generateString(int N) {

    vector<int> arr(N,0);
    vector<vector<int>> ans;
    fun(arr,0,N,ans);
    vector<string> res;

    for(int i=0;i<ans.size();i++)
    {
        vector<int> temparr = ans[i];
        convert_to_string(temparr,res,N);
    }

    return res;

}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
}


