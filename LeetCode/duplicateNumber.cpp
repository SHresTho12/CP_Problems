#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
    int numsSize = nums.size();
int *count = (int *)calloc(numsSize-1,sizeof(int));
int i;
for(i=0;i<numsSize;i++)
{
count[nums[i]-1]+=1;
}

for(i=0;i<numsSize;i++)
{
    if(count[nums[i]-1]>=2)
        return (nums[i]);
    
}
return 0;
    }
int main(){
    vector<int> arr;
    int number;
    cin>>number;
    int temp;
    while(number--){
        cin>>temp;
        arr.push_back(temp);
    }
    findDuplicate(arr);
}