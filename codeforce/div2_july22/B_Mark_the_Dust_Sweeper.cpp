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
    

int n ;
 cin>>n;
 vector<int> dust(n);
//  for(int i=0;i < n; i++){
//      int tmep ;
//      cin>>tmep;
//      dust.push_back(tmep);

//  }

for(int i = 0 ; i < n ; i++){
 
cin>>dust[i];


}
// int ptr = 0 ;
// while(ptr < n && dust[ptr] == 0)
//         ptr++;




ll result = 0;
// for(int i =  ptr ; i < n-1 ; ++i){
//     result += dust[i];
//         if(dust[i] == 0) result++;
// }



// bool flag = false ;
// for(int i  = 0 ; i < n-1 ; i++){
// if( dust[i] != 0 ){ 
//     flag = true;
//     result = result + dust[i];


// }
// else{
//     if(flag){result++;
// }}
// }
int numZeros = 0 ;

for(int i = n-2 ; i>=0;i--){
if( dust[i] == 0)numZeros++;
else{
    result = result + dust[i] + numZeros;
    numZeros = 0;
}
}
cout<<result<<endl;
}


    }

