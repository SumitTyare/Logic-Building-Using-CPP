/* 2. Program to print 5 times "Hello" on screen. */

#include<iostream>

class DisplayContent
{
public:
  
  int iNum;
  
  DisplayContent(int iX)
  {
    iNum = iX;
  }

  ~DisplayContent()
  {
  }

  void DisplayString()
  {
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNum; iCnt++)
      {
	std::cout<< "HELLO" << std::endl;
      }
  }
};


int main()
{
  DisplayContent DisplayContentObj(5);

  DisplayContentObj.DisplayString();
  
  return 0;
}
