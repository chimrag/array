#include<iostream>
#include<vector>
using namespace std;
bool sorted(vector<int> &a,int n){
    for (int i=1;i<n;i++){
        if (a[i]>=a[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> arr={1,2,2,3,5};
    cout<<(sorted(arr,arr.size()));
}