/* 6. Accept one character from user and display that character on screen. */

#include<iostream>

class Display
{

public:
  
  char chChar;

public:
  
  Display(char chX)
  {
    this->chChar = chX;
  }

  ~Display()
  {
  }

  void DisplayChar();
    
};


void Display::DisplayChar()
{
  
  std::cout << "\nDISPLAYING USER ENTERED CHARACTER : " << chChar << std::endl; 

}


  

int main()
{
  char chLet = '\0';

  std::cout << "\nENTER THE CHARACTER : ";
  std::cin >> chLet;

  Display DisplayOBJ(chLet);

  DisplayOBJ.DisplayChar();
  
  return 0;
}
