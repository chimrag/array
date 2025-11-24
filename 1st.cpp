#include <iostream>
using namespace std;
int main(){
    int arr[5] = {2,3,1,5,0};
    int largest = arr[0];
    for(int i=0; i<5;i++){

     if(arr[i]>largest){
        largest =arr[i];
        }
    }
    cout<<largest;

}