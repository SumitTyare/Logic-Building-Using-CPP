/* 4. Accept one number and check whether is is divisible by 5 or not. */

#include<iostream>

class CheckNum
{
  
public:

  int iNo;
  
  CheckNum(int iX)
  {
    this->iNo = iX;
  }

  ~CheckNum()
  {
    
  }

  bool ChkDivisibleBy5();
  
};


bool CheckNum::ChkDivisibleBy5()
{
  bool bAns = false;

  if((iNo % 5) == 0)
    {
      bAns = true;
    }

  return bAns;
}


int main()
{
  int iNum = 0;
  bool bAns = false;
  
  std::cout << "ENTER NUMBER : ";
  std::cin >> iNum;

  CheckNum CheckNumOBJ(iNum);

  bAns = CheckNumOBJ.ChkDivisibleBy5();

  if(bAns == true)
    {
      std::cout << "NUMBER " << iNum << " IS DIVISIBLE BY 5" << std::endl;
    }
  else
    {
      std::cout << "NUMBER " << iNum << " IS NOT DIVISIBLE BY 5" << std::endl;
    }
  
  return 0;
  
}
