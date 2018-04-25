#include<iostream>
void pell();
void stre();
int main()
{
pell();
stre();
pell();
int place[80][24];
int new *whereisme[][]=place;
char bordinput;
for(;1;)
{
  std::cin.get(bordinput);
  switch (bordinput)
  {
    case "w":whereisme[+1][];
    case "s":whereisme[-1][];
    case "a":whereisme[][-1];
    case "d":whereisme[][+1];
  }
}
return 0;
}
void pell()
{
  for(int i=1;i<=80;i++)
  {
    std::cout << "-";
  }
  std::cout << '\n';
}
void stre()
{
  for(int i=1;i<=24;i++)
  {
    std::cout << "#";
    for(int n=1;n<=78;n++)
    {
      std::cout << " ";
    }
    std::cout << "#" << '\n';
  }
}
