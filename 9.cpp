#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=500;i++){
        int x=i;
        int sum=0;
        while(x>0){
             int  ld=x%10;
            sum+=(ld*ld*ld);
            x/=10;
        }
        if(i==sum) cout<<i<<endl;
    }
    return 0;

}