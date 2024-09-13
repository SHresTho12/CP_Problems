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
    int n;
    cin>>n;
    vector<int> numbers ;
    for(int i= 0 ; i< n;i++){
        int a;
        cin>>a;
        numbers.push_back(a);
    }
    vector<string>moves;
    for(int i=0; i<n;i++){
        int moves;
        cin>>moves;
        string s;
        cin>>s;
       for(int j = 0 ; j < moves; j++){
           if(s[j]=='U'){
               if(numbers[i] == 0){ 
                   numbers[i]  = 9;
               }
               else{
                   numbers[i]--;
               }
           }
           else{
               if(numbers[i] == 9){ 
                   numbers[i]  = 0;
               }
               else{
                   numbers[i]++;
               }
           }
       }


    }
    for(int i= 0 ; i< n;i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
}


    }

