#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    short t,n;
    cin>>t;
    for(short i=0;i<t;i++){
        cin>>n;
        short arr[n];
        for(short j=0;j<n;j++){
            cin>>arr[j];
        }
        int result=0;
        for(short j=0;j<n-1;j++){
            short min=120,index=-1;
            for(short k=j;k<n;k++){
                if(arr[k]<min){
                    min=arr[k];
                    index=k;
                }
            }
            reverse(arr+j,arr+index+1);
            result+=(index-j)+1;
        }
        cout<<"Case #"<<i+1<<": "<<result<<endl;
    }
}
