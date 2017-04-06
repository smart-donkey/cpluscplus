#include<iostream>
using namespace std;

bool accept(){
  cout << "do you accept the terms. " << endl;
  char answer = 0;
  cin >> answer;

  if (answer == 'y'){
    return true;
  }else{
    return false;
  }

}

bool accept2(){
  cout << "would you like to accept the terms" << endl;
  char answer = 0;
  cin >> answer;
  switch (answer){
    case 'y':
       return true;
    case 'n':
       return false;
    default:
       cout << "I would take this as no" << endl;    
       return false;
    
 }
}

bool accept3(){
  cout << "would you like to accept the terms" << endl;
  char answer = 0;
  int retry = 0;
  while (retry < 4){
  cin >> answer;
  switch (answer){
    case 'y':
       return true;
    case 'n':
       return false;
    default:
       cout << "Please input 'y' or 'n'." << endl;
       retry++;
 }
}
 return false;

}

int main(){
  cout << accept3() << endl;
}
