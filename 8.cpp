#include<iostream>
using namespace std;
int main(){
    int n1=1,n2=1,n3,n;
    cout<<"enter the number";
    cin>>n;
    cout<<n1<<endl<<n2<<endl;
    for(int i=1;i<=n;i++){
        n3=n2+n1;
        cout<<n3<<endl;
        n1=n2;
        n2=n3;
    }
    
}