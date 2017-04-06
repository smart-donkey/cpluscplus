#include<iostream>
using namespace std;


void print_array(int* x){
   for(auto i=0;i<5;i++){
    cout<<x[i]<<endl;
   }
}

void copy_array(){
    int a[5] =  {1,2,3,4,5};
    int b[5];
    print_array(b);
    for (auto i=0; i < 5; i++){
    b[i]=a[i];
    }
    print_array(b);
}

void print(){
  int v[] = {1,4,5,6,2,90};
  for(auto& x: v){
    ++x;
    cout << x << endl;
  }
}


int main(){
  print();
}
 
