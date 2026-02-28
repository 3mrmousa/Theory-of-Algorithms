#include <iostream>
using namespace std;

int vowel(char c){
  return c == 'a' || c =='e' || c =='i' || c =='o' || c =='u'
      || c == 'A' || c =='E' || c =='I' || c =='O' || c =='U';
}

int check(string value, int size) {
  if(size == 0) return 0;
  return vowel(value[size - 1]) + check(value, size - 1);
}

int main()
{
  string value;
  cin >> value;

  cout << check(value, value.size());
}
