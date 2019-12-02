/* 6. Accept two integers from user and swap contents of that two integers without using temporary variable. */

#include<iostream>

class IntegerOperations
{
public:

  int iNum1, iNum2;

public:

  IntegerOperations(int *, int *);
  ~IntegerOperations();
  void AcceptNums();
  void SwapNums();
  void DisplaySwappedNums();
  
};

IntegerOperations::IntegerOperations(int *iX, int *iY)
{
  this->iNum1 = (*iX);
  this->iNum2 = (*iY);
}

IntegerOperations::~IntegerOperations()
{
}

void IntegerOperations::AcceptNums()
{
  std::cout << "\nENTER NUMBER 1 : ";
  std::cin >> iNum1;

  std::cout << "\nENTER NUMBER 2 : ";
  std::cin >> iNum2;
}

void IntegerOperations::SwapNums()
{
  iNum1 = iNum1 + iNum2;
  iNum2 = iNum1 - iNum2;
  iNum1 = iNum1 - iNum2;
}

void IntegerOperations::DisplaySwappedNums()
{
  std::cout << "\nNUMBERS AFTER SWAPPING :\n";
  std::cout << "NUMBER 1 : " << iNum1 << "\n" << "NUMBER 2 : " << iNum2 << std::endl;
}


int main()
{
  int iNum1 = 0, iNum2 = 0;

  IntegerOperations IntegerOperationsOBJ(&iNum1, &iNum2);

  IntegerOperationsOBJ.AcceptNums();
  IntegerOperationsOBJ.SwapNums();
  IntegerOperationsOBJ.DisplaySwappedNums();
  
  return 0;
}
