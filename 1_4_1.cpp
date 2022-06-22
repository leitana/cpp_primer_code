#include <iostream>
using namespace std;
int main() {
  // int sum = 0, val = 1;
  // while (val <= 10)
  // {
  //     sum += val; //将sum + val 赋予 sum
  //     ++val;
  // }
  // std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

  // 50+到100
  //  int sum = 0, val = 50;
  //  while (val <= 100)
  //  {
  //      sum += val;
  //      ++val;
  //  }
  //  std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

  //递减打印10-0
  // int val = 10;
  // while (val >= 0)
  // {
  //     std::cout << val << std::endl;
  //     val--;
  // }1

  //打印两个整数，打印出两者之间的整数
  cout << "Enter two numbers" << endl;
  int val1 = 0, val2 = 0;
  cin >> val1 >> val2;
  if (val1 <= val2) {
    while (val1 <= val2) {
      cout << val1 << endl;
      ++val1;
    }
    cout << endl;
  } else {
    cout << "start can't larger than end";
  }
  return 0;
}