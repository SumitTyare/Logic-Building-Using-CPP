/* 10. Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not. */

#include<iostream>

class CharOperations
{
public:

  char chChar;

public:

  CharOperations(char *);
  ~CharOperations();
  void AcceptChar();
  void ChkVowel();
  
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

void CharOperations::ChkVowel()
{
  if((chChar == 'a') || (chChar == 'A') || (chChar == 'e') || (chChar == 'E') || (chChar == 'i') || (chChar == 'I') ||
     (chChar == 'o') || (chChar == 'O') || (chChar == 'u') || (chChar == 'U'))
    {
      std::cout << "\nCHARACTER " << chChar << " IS : VOWEL\n";
    }
  else
    {
      std::cout << "\nCHARACTER " << chChar << " IS : NOT VOWEL\n";
    }
}

int main()
{
  char chChar = '\0';

  CharOperations CharOperationsOBJ(&chChar);

  CharOperationsOBJ.AcceptChar();
  CharOperationsOBJ.ChkVowel();
  
  return 0;
}
