/* 4. Write a program which accept two numbers from user and display its largest common factors. */

#include<iostream>

class Display
{
public:

  int iNum1, iNum2;

public:

  Display(int, int);
  ~Display();
  void AcceptNums();
  void DisplayLargestCommonFactor();
  int LargestCommonFactor();
  
};

Display::Display(int iX, int iY)
{
  this->iNum1 = iX;
  this->iNum2 = iY;
}

Display::~Display()
{
}

void Display::AcceptNums()
{
  std::cout << "\nENTER NUMBER 1 : ";
  std::cin >> iNum1;

  std::cout << "\nENTER NUMBER 2 : ";
  std::cin >> iNum2;
}

void Display::DisplayLargestCommonFactor()
{
  int iAns = 0;

  iAns = LargestCommonFactor();

  std::cout << "\nLARGEST COMMON FACTOR OF NUMBER " << iNum1 << " & " << iNum2 << " IS : " << iAns << std::endl;
}

int Display::LargestCommonFactor()
{
  int iLimiter = 0, iCnt = 0, iLargestFact = 0;

  if(iNum1 < iNum2)
    {
      iLimiter = iNum1;
    }
  else
    {
      iLimiter = iNum2;
    }
  
  for(iCnt = (iLimiter / 2), iLargestFact = 1; iCnt >= 2; iCnt--)
    {
      if(((iNum1 % iCnt) == 0) && ((iNum2 % iCnt) == 0))
	{
	  iLargestFact = iCnt;
	  break;
	}
    }

  return iLargestFact;
}

int main()
{
  int iNum1 = 0, iNum2 = 0;

  Display DisplayOBJ(iNum1, iNum2);

  DisplayOBJ.AcceptNums();
  DisplayOBJ.DisplayLargestCommonFactor();

  return 0;
}
