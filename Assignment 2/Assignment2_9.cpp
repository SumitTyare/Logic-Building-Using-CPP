/* 9. Accept one number and print that number of elements from Fibonacci series. */

#include<iostream>

class Display
{
public:

  int iNum;

public:

  Display(int);
  ~Display();
  void AcceptNum();
  void DisplayFibonacci();
  
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

void Display::DisplayFibonacci()
{
  int iCnt = 0, iFirst = 0, iSecond = 0, iNext = 0;
  
  std::cout << "\nDISPLAYING FIBONACCI SERIES :\n";
  
  for(iCnt = 1, iFirst = 0, iSecond = 1, iNext = (iFirst + iSecond); iCnt <= iNum; iCnt++)
    {
      std::cout << iNext << "\t";

      iNext = iFirst + iSecond;
      iFirst = iSecond;
      iSecond = iNext;
    }

  std::cout << std::endl;
}


int main()
{
  int iNum = 0;

  Display DisplayOBJ(iNum);

  DisplayOBJ.AcceptNum();
  DisplayOBJ.DisplayFibonacci();
  
  return 0;
}
