#include <iostream>
using namespace std;



int print(int number) {
  if(number == 0) return 0;
  if(number == 1) return 1;
  
  return print(number - 1) * number;
}

int main()
{
  int number;
  cin>>number;
  cout<<print(number);
}
