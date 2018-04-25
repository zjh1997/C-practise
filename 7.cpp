#include<iostream>
long long int chick_number(long long int zhishu);
int main()
{
  int numble;
  long long int zhishu=3;
  std::cout << "Please inter the numble you like: " << '\n';
  std::cin >> numble;
  for(;numble>0;zhishu++)
  {
    if(chick_number(zhishu))
    {
      numble--;
      //std::cout << zhishu << '\n';
    }
  }

}
long long int chick_number(long long int zhishu)
{
  long long int copy_zhishu=zhishu-1;
  while((zhishu%copy_zhishu)||(copy_zhishu>1))
  {
    copy_zhishu--;
    std::cout << copy_zhishu << '\n';
  }
  if(copy_zhishu==0)
  {
    std::cout << "this is a zhishu" << '\n';
    return 1;
  }
  else
  {
    std::cout << "this is not a zhishu" << '\n';
    return 0;
  }
}
