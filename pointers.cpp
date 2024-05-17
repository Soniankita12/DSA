#include<bits/stdc++.h>
using namespace std;
struct person{
     
int age;
int level;
char div;
void print(){
     cout<<age<<"\n";
     cout<<level<<"\n";
     cout<<div<<"\n";
}
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    person ankita;
    ankita.age = 23;
    ankita.level=1;
    ankita.div ='A';
   ankita.print();
   person manoj;

   manoj.age = 25;
   manoj.level = 1;
   manoj.div = 'A';
   manoj.print();

   int x = 20;
   cout << "x :" << x << "\n";
   int *ptr;
   *ptr = x;
   cout << " ptr :" << ptr << "\n"
        << "*ptr :" << *ptr << "\n";
   x = 25;
   cout << " ptr :" << ptr << "\n"
        << "*ptr :" << *ptr << "\n";
}