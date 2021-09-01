#include <iostream>
using namespace std;

int main() {
  
  char answer1;
  cout << "Is the number higher than 50? \n" << "Type y(Yes) or n(No) \n";
  cin >> answer1;

  if(answer1=='y'){
    char answer2;
      cout << "Is the number higher than 75? \n" << "Type y(Yes) or n(No) \n";
      cin >> answer2;

      if(answer2=='y'){
          char answer3;
      cout << "Is the number even? \n" << "Type y(Yes) or n(No) \n";
      cin >> answer3;

      if(answer3=='y'){
          cout<<"The number is higher than 75 and even. \n";
      
      } else {
            cout<<"The number is higher than 75 and odd. \n";
      }
      }
  }else{
      char answer2;
      cout << "Is the number lower than 25? \n" << "Type y(Yes) or n(No) \n";
      cin >> answer2;
      
      if(answer2=='y'){
          char answer3;
            cout << "Is the number even? \n" << "Type y(Yes) or n(No) \n";
            cin >> answer3;

      if(answer3=='y'){
          cout<<"The number is lower than 25 and even. \n";
      }
       else {
            cout<<"The number is lower than 25 and odd. \n";
      }
      }
  }
  return 0;
}
