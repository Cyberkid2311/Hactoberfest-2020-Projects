Himanshu is now a spy. He has to send a package at a specified time. So his boss sends him two codes one of 4 bit and another 6 bit. The first one represents the hour ( 0 to 11) and the second one represents the minutes (0 to 59). Now, unfortunately, Himanshu could not get the codes but he got the number of set bits in those two codes combined. You have to find all the time that can be represented by those number of set bits.  

Input format
The first line contains a single integer N, the number of bits. 

Output format
Print all the space-separated time values in this format hh: mm.

Constraints:
1<=n<=10

Example
Input
1

Output
0:32 0:16 0:08 0:04 0:02 0:01 8:00 4:00 2:00 1:00



#include <bits/stdc++.h>
  using namespace std;
vector<pair<int,int>> m1;
bool comp(const pair<int,int> &a, const pair<int,int> &b)
  {
   /* if(a.first==b.first&&a.first!=0)
    return a.second>b.second;*/
    if(a.second==b.second)
    return a.first>b.first;
    else
  //  if(a.first==b.first)
    return a.second>b.second;
    
  }

 void display(string s)
  {
    int j=0,sum=0,sum1=0;
    for(int i=3;i>=0;i--)
    {
      sum+=(s[i]-'0')*pow(2,j);
      j++;
    }
    j=0;
    for(int i=9;i>=4;i--)
    {
      sum1+=(s[i]-'0')*pow(2,j);
      j++;
    } 
    if(sum<=11&&sum1<=59){
    m1.push_back(make_pair(sum,sum1));
    }
  }
  void solve(string s)
  {
    sort(s.begin(),s.end());
    do
    {
      display(s);
    }while(next_permutation(s.begin(),s.end()));
  }
  int main()
  {
    //write your code here
    string s="0000000000";
    int n;
    cin>>n;
    int ip=0;
  while(n--)
  {
    s[ip]='1';
    ip++;
  }
  solve(s);
  sort(m1.begin(),m1.end(),comp);
  vector<pair<int,int>>::iterator i;
  for(i=m1.begin();i!=m1.end();i++)
  {
   if(i->second<10)
    cout<<i->first<<":0"<<i->second<<" ";
    else if(i->second>=10)
     cout<<i->first<<":"<<i->second<<" ";
  }
    return 0;
  }
