#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool helper(vector<vector<char>>& board , int idx , int r, int c,int n , int m,string word,int l)
{
    if(idx==l)
        return true;
    if(r== n  || r<0 || c== m || c<0 || board[r][c]=='.' )
        return false;
    
    if(board[r][c]==word[idx])
    {
        board[r][c]='.';
        bool op1 , op2 ,op3 ,op4;

        op1 = helper(board,idx+1,r-1,c,n,m,word,l);
        op2 = helper(board,idx+1,r+1,c,n,m,word,l);
        op3 = helper(board,idx+1,r,c+1,n,m,word,l);
        op4 = helper(board,idx+1,r,c-1,n,m,word,l);
        board[r][c]=word[idx];
        return op1 || op2 || op3 || op4;
    }
    
    return false;
}


    
bool exist(vector<vector<char>>& board, string word) {
    
    int n = board.size();
    int m = board[0].size();
    int idx = 0;    
    int l  = word.size();
    for(int i=0;i<n;i++)    
    {
        for(int j=0;j<m;j++)
        {
            if(helper(board,0,i,j,n,m,word,l))
                return true;
        }
    }

    return false;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
}
