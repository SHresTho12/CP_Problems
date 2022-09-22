#include <iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<iomanip>
#define ll                      long long
#define min3(a,b,c)             min(a,min(b,c))
#define max3(a,b,c)             max(a,max(b,c))
#define min4(a,b,c,d)           min(min(a,b),min(c,d))
#define max4(a,b,c,d)           max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)         max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)         min(min3(a,b,c),min(d,e))
#define LCM(a,b)                (a/__gcd(a,b))*b
#define GCD(a,b)                __gcd(a,b)
#define INPUT(x)                freopen(x,"r",stdin)
#define OUTPUT(x)               freopen (x,"w",stdout)
#define PI                      acos(-1.0)
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
#define joldi               ios_base::sync_with_stdio(0);cin.tie(NULL);




#define MAX 32000
#define fl(i , t )              for(int i =0 ; i<t; i++)

using namespace std;



int main()
{
    joldi
int t ;
cin>>t;
while(t--){
    

int n,x; 
 cin>>n>>x;
 vector<int> heights;
 for(int i=0 ; i<2*n ; i++){
     int temp;
     cin>> temp;
     heights.push_back(temp);
 }
sort(heights.begin(),heights.end());
int flag=0;
for(int i = 0 , j = n ; i<n ; i++,j++){
    
if(heights[j]-heights[i]<x){
    flag = 1;

    break;
}
}


if(flag == 1)cout<<"NO"<<endl;
else cout<<"YES"<<endl;


}


    }

