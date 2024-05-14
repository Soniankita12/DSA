#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x= 20;
    cout<<"x :"<<x<<"\n";
     int *ptr ;
     *ptr=x;
     cout << " ptr :" << ptr << "\n"
          << "*ptr :" << *ptr << "\n";
     x=25;
     cout<<" ptr :"<<ptr<<"\n"<< "*ptr :"<<*ptr<<"\n";
}