#include<iostream>
using namespace std;

struct Vector{

  int sz;
  double *elem;
};

void Vector_init(Vector& v, int sz){
  v.sz = sz;
  v.elem = new double[sz];
}

double read_and_sum(int s){
  Vector v;
  Vector_init(v, s);
  for (auto i=0; i!=s;i++){
    cin >> v.elem[i];
 }
  double sum = 0;
  for (auto i=0;i!=s;i++){
    sum += v.elem[i];
  }
  return sum;
}

int main(){
  cout << read_and_sum(3) << endl;
}

