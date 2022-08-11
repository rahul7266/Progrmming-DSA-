#include <bits/stdc++.h>
using namespace std;

// comparator function
bool compa(vector<float> &a,vector<float> &b)
{
    if(a[1]==b[1])
        return a[0]<b[0];
    return a[1]>b[1];
    
}


int main() {
	int c,n;
	cin>>c>>n;
// college vector
  vector<float> college(c);
	for(int i=0;i<c;i++)cin>>college[i];
	// student
  vector<vector<float>> stu(n,vector<float>(5));
	for(int i=0;i<n;i++)
	{
	    string s;
	    cin>>s;
	    stringstream ss(s);
	    vector<string> tokenszz;
	    string token;
	    while(getline(ss,token,','))
	    {
	        tokenszz.push_back(token);
	    }
	    stu[i][0]=stof(tokenszz[0].substr(8));
	    stu[i][1]=stof(tokenszz[1]);
	    stu[i][2]=stof(tokenszz[2].substr(2));
	    stu[i][3]=stof(tokenszz[3].substr(2));
	    stu[i][4]=stof(tokenszz[4].substr(2));
	    
	}
  // sorting 
	sort(stu.begin(),stu.end(),compa);
	// iterate
	for(int i=0;i<n;i++)
	{
	    if(college[stu[i][2]-1]!=0.0)
	    {
	        cout<<"Student-"<<stu[i][0]<<" C-"<<stu[i][2]<<endl;
	        college[stu[i][2]-1]--;
	    }
	    else  if(college[stu[i][3]-1]!=0.0)
	    {
	        cout<<"Student-"<<stu[i][0]<<" C-"<<stu[i][3]<<endl;
	        college[stu[i][3]-1]--;
	    }
	    else if(college[stu[i][4]-1]!=0.0)
	    {
	        cout<<"Student-"<<stu[i][0]<<" C-"<<stu[i][4]<<endl;
	        college[stu[i][4]-1]--;
	    }
	}
	
	return 0;
}