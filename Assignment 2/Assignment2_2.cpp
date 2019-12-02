/* 2. Write a program which accept number from user and print even factors of that number. */

#include<iostream>

class Display
{
public:

  int iNum;

public:

  Display(int);
  ~Display();
  void AcceptNum();
  void DisplayEvenFactors();
  
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

void Display::DisplayEvenFactors()
{
  int iCnt = 0;

  std::cout << "\nDISPLAYING EVEN FACTORS OF NUM " << iNum << " :" << std::endl;
  for(iCnt = 2; iCnt <= (iNum / 2); iCnt = iCnt + 2)
    {
      if((iNum % iCnt) == 0)
	{
	  std::cout << iCnt << "\t";
	}
    }

  std::cout << std::endl;
}

int main()
{
  int iNum = 0;

  Display DisplayOBJ(iNum);

  DisplayOBJ.AcceptNum();
  DisplayOBJ.DisplayEvenFactors();
  
  return 0;
}
