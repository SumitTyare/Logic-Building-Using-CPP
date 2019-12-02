/* 7. Accept one number from user and print that number of * on screen. */

#include<iostream>

class Display
{
public:

  int iNum;

public:

  Display(int);
  ~Display();
  void AcceptNum();
  void DisplayStar();
  
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

void Display::DisplayStar()
{
  int iCnt = 0;

  std::cout << "\nDISPLAYING " << iNum << " NUMBER OF * :" << std::endl;
  
  for(iCnt = 1; iCnt <= iNum; iCnt++)
    {
      std::cout << "*\t";
    }

  std::cout << std::endl;
}

int main()
{
  int iNum = 0;

  Display DisplayOBJ(iNum);

  DisplayOBJ.AcceptNum();
  DisplayOBJ.DisplayStar();
  
  return 0;
}
