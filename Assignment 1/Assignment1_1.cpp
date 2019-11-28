/* 1.Program to divide two numbers */

#include<iostream>


class Arithmetic
{
  
public:
  int iNo1, iNo2;
  float fResult;

  Arithmetic(int iX, int iY)
  {
    iNo1 = iX;
    iNo2 = iY;
    fResult = 0.0f;
  }

  ~Arithmetic()
  {
  }

  void DivideNums()
  {
    fResult = ((float)iNo1 / iNo2);
  }
  
};


int main()
{
  int iNum1 = 0, iNum2 = 0;

  std::cout<< "\nENTER NUMBER 1 : ";
  std::cin>> iNum1;

  std::cout<< "\nENTER NUMBER 2 : ";
  std::cin>> iNum2;

  Arithmetic ArithmeticObj(iNum1, iNum2);

  ArithmeticObj.DivideNums();
  
  std::cout<< "\nDIVISION OF "<< iNum1 << " & " << iNum2 << " IS " << ArithmeticObj.fResult << std::endl;
  
  return 0;
}
