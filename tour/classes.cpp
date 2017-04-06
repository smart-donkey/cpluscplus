#include<iostream>
using namespace std;

class Vector{
public:
Vector(int s):elem{new double[s]},sz{s}{};
double& operator[](int i){return elem[i];};

private:
  int sz;
  double *elem;
};


double read_and_sum(int s){
  Vector v(s);
  for(auto i=0;i!=s;i++){
     cin >> v[i];
  }

  double sum = 0;
  for(auto i=0; i!=s;i++){
    sum += v[i];
  }
  return sum;
}

int main(){
  cout << read_and_sum(3) << endl;
}

