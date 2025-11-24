#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr,int n){
    int start=0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    reverse(arr, n);
cout<<"Reversed array : "<<endl;
for (int i=0; i<n; i++){
    cout<<arr[i]<<endl;
}
}
// two pointer approach time complexcity big of n and space complexcity big of of 1
