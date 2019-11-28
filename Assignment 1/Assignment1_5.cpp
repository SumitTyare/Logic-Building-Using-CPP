/* 5. Accept one number from user and print that number of * on screen. */

#include<iostream>

class Display
{

public:
  
  int iNum;

public:

  void AcceptNum();
  void DisplayStar();
  
};


void Display::AcceptNum()
{

  std::cout << "ENTER NUMBER : ";
  std::cin >> iNum;
  
}


void Display::DisplayStar()
{

  int iCnt = 0;

  std::cout << "DISPLAYING * ON SCREEN :" << std::endl;
  for(iCnt = 1; iCnt <= iNum; iCnt++)
    {
      std::cout << "*\t";
    }

  std::cout << std::endl;

}


int main()
{

  Display DisplayOBJ;

  DisplayOBJ.AcceptNum();
  DisplayOBJ.DisplayStar();
  
  return 0;
}
