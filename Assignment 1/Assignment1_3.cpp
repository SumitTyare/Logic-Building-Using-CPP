/* 3. Program to print 5 to 1 numbers on screen. */


#include<iostream>

class Display
{
public:

  int iNum;
  
  Display(int iX = 5)
  {
    this->iNum = iX;
  }

  ~Display()
  {
    
  }

  void DisplayReverseRange();
};


void Display::DisplayReverseRange()
{
  int iCnt = 0;

  std::cout << "Displaying 5 To 1 Number :" << std::endl;
  
  for(iCnt = iNum; iCnt >= 1; iCnt--)
    {
      std::cout << iCnt << "\t";
    }

  std::cout << std::endl;
}


int main()
{
  Display DisplayObj;

  DisplayObj.DisplayReverseRange();
  
  return 0;
}
