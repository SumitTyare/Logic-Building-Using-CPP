/* 7. Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo". */

#include<iostream>

class Display
{

public:
  int iNum;

public:

  Display(int);
  ~Display();
  void DisplayMsg();
  
};


Display::Display(int iX)
{  
  this->iNum = iX;  
}

Display::~Display() {}

void Display::DisplayMsg()
{
  std::cout << "\nDISPLAYING MESSAGE : ";
  if(iNum < 10)
    {
      std::cout << "Hello";
    }
  else
    {
      std::cout << "Demo";
    }

  std::cout << std::endl;
  
}

  
int main()
{

  int iNo = 0;

  std::cout << "\nENTER NUMBER : ";
  std::cin >> iNo;
  
  Display DisplayOBJ(iNo);

  DisplayOBJ.DisplayMsg();
  
  return 0;
  
}
