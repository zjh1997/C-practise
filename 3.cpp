#include<iostream>
#include<string>
int main()
{
  char charr1[20];
  char charr2[20] = "jaguar";
  std::string str1;
  std::string str2 = "panther";

  std::cout << "Enter a kind of feline:" << '\n';
  std::cin >> charr1;
  //std::cin.get();
  std::cout << "Enter another kind of feline: " << '\n';
  std::cin >> str1;
  //std::cin.get();
  std::cout << "Here are some felines:" << '\n';
  std::cout << charr1 << " " << charr2 << " "
            << str1 << " " << str2 << " ";
  std::cout << "The third letter in " << charr1 << " is "
            << charr1[2] << '\n';
  std::cout << "The third letter in " << str1 << " is "
            << str1[2] << '\n';
  return 0;
}
