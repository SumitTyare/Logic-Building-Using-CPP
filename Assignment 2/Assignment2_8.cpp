/* 8. Accept one character from user and convert case of that character. */

#include<iostream>

class CharOperations
{
public:

  char chChar;

public:

  CharOperations(char *);
  ~CharOperations();
  void AcceptChar();
  void ConvertCase();
  void DisplayChar();
  
};

CharOperations::CharOperations(char *chX)
{
  this->chChar = (*chX);
}

CharOperations::~CharOperations()
{
}

void CharOperations::AcceptChar()
{
  std::cout << "\nENTER CHARACTER : ";
  std::cin >> chChar;
}

void CharOperations::ConvertCase()
{
  if((chChar >= 'a') && (chChar <= 'z'))
    {
      chChar = chChar - 32;
    }
  else if((chChar >= 'A') && (chChar <= 'Z'))
    {
      chChar = chChar + 32;
    }
}

void CharOperations::DisplayChar()
{
  std::cout << "CHARACTER AFTER CONVERTING THE CASE IS : " << chChar << std::endl;
}


int main()
{
  char chChar = '\0';

  CharOperations CharOperationsOBJ(&chChar);

  CharOperationsOBJ.AcceptChar();
  CharOperationsOBJ.ConvertCase();
  CharOperationsOBJ.DisplayChar();
  
  return 0;
}
