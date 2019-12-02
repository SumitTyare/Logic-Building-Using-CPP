/* 5. Accept two characters from user and swap contents of that two characters. */

#include<iostream>

class CharacterOperations
{
public:

  char chChar1, chChar2;

public:

  CharacterOperations(char *, char *);
  ~CharacterOperations();
  void AcceptChars();
  void SwapChar();
  void DisplaySwappedChar();
  
};


CharacterOperations::CharacterOperations(char *chX, char *chY)
{
  this->chChar1 = (*chX);
  this->chChar2 = (*chY);
}

CharacterOperations::~CharacterOperations()
{
}

void CharacterOperations::AcceptChars()
{
  std::cout << "\nENTER CHARACTER 1 : ";
  std::cin >> chChar1;

  std::cout << "\nENTER CHARACTER 2 : ";
  std::cin >> chChar2;
}

void CharacterOperations::SwapChar()
{
  char chTemp = '\0';

  chTemp = chChar1;
  chChar1 = chChar2;
  chChar2 = chTemp;
}


void CharacterOperations::DisplaySwappedChar()
{
  std::cout << "\nCHARACTERS AFTER SWAPPING :" << std::endl;
  std::cout << "CHARACTER 1 : " << chChar1 << "\n" << "CHARACTER 2 : " << chChar2 << std::endl;
}

  
int main()
{
  char chChar1 = '\0', chChar2 = '\0';

  CharacterOperations CharacterOperationsOBJ(&chChar1, &chChar2);

  CharacterOperationsOBJ.AcceptChars();
  CharacterOperationsOBJ.SwapChar();
  CharacterOperationsOBJ.DisplaySwappedChar();
  
  return 0;
}
