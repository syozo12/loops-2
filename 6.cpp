#include<iostream>
using namespace std;
int main(){
    int n,a,rev=0,sum;
    sum=0;
    cout<<"enter the number:";
    cin>>n;
    a=n;
    while(n>0){
        rev*=10;
        int ld=n%10;
        rev+=ld;
        n/=10;
    }
    cout<<"reverse of the number is"<<rev;
    cout<<"sum of the number and its reverse  is="<<a+rev;
}