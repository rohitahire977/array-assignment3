#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter size of array :";
    cin>>n;
    cout<<"enter array elements :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int count=0;
    int x;
    cout<<"enter element x:";
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(x==(v[i]+v[j]+v[k])){
                    count++;
                }
            }
        }
    }
    cout<<"the number of triplets whose sum is"<<x<<"are :"<<count;
}