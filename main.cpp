#include <iostream>
#include <string.h>
using namespace std;
string divideByTwo(string number) {
  int i = 0;
  int remender = 0;
  string quotient;
  for (char digit = number[0]; digit != '\0'; digit = number[++i]) {
    string anotherDigit = to_string(remender) + digit;
    int recQuoicent = (stoi(anotherDigit)) / 2;
    if (!(quotient.length() == 0 && recQuoicent == 0)) {
      quotient = quotient + to_string(recQuoicent);
    }
    remender = (digit - '0') % 2;
  }
  return quotient;
}
int main() {
  string num = "152344653736";

  // cout << "Hello World!\n";
  string q = divideByTwo(num);
  cout << q;
}