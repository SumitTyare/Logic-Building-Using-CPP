/* 1.Write a program which accept one number from user and print that number of even numbers on screen */

#include<iostream>

class Display
{

public:
  
  int iNum;

public:

  Display(int);
  ~Display();
  void AcceptNum();
  void DisplayEvenNums();
};

Display::Display(int iX)
{
  this->iNum = iX;
}

Display::~Display()
{
}

void Display::AcceptNum()
{
  std::cout << "\nENTER NUMBER : ";
  std::cin >> iNum;
}

void Display::DisplayEvenNums()
{
  int iCnt = 0;

  std::cout << "\nDISPLAYING FIRST " << iNum << " EVEN NUMBERS :" << std::endl;
  for(iCnt = 1; iCnt <= iNum; iCnt++)
    {
      std::cout << (iCnt * 2) << "\t";
    }

  std::cout << std::endl;
}

int main()
{
  int iNum = 0;

  Display DisplayOBJ(iNum);

  DisplayOBJ.AcceptNum();
  DisplayOBJ.DisplayEvenNums();
  
  return 0;
}
