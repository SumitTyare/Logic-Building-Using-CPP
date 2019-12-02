/* 3. Write a program which accept two numbers from user and display its common factors. */

#include<iostream>

class Display
{
public:

  int iNum1, iNum2;

public:

  Display(int, int);
  ~Display();
  void AcceptNum();
  void DisplayCommonFactors();
  
};

Display::Display(int iX, int iY)
{
  this->iNum1 = iX;
  this->iNum2 = iY;
}

Display::~Display()
{
}

void Display::AcceptNum()
{
  std::cout << "\nENTER NUMBER 1 : ";
  std::cin >> iNum1;
  std::cout << "\nENTER NUMBER 2 : ";
  std::cin >> iNum2;
}

void Display::DisplayCommonFactors()
{
  int iCnt = 0;

  std::cout << "\nDISPLAYING COMMON FACTORS OF NUMBER " << iNum1 << " & " << iNum2 << " :" << std::endl;
  
  for(iCnt = 2; (iCnt <= (iNum1 / 2)) && (iCnt <= (iNum2 / 2)); iCnt++)
    {
      if(((iNum1 % iCnt) == 0) && ((iNum2 % iCnt) == 0))
	{
	  std::cout << iCnt << "\t";
	}
    }

  std::cout << std::endl;
}

int main()
{
  int iNum1 = 0, iNum2 = 0;

  Display DisplayOBJ(iNum1, iNum2);

  DisplayOBJ.AcceptNum();
  DisplayOBJ.DisplayCommonFactors();
  
  return 0;
}
