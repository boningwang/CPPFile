#include<iostream>

using namespace std;

void func(void);
static int count = 10;

int main()
{
   while(count--)
	 {func();}
  return 0;
}

void func(void)
{
  static int i = 5;
  i++;
  cout << "变量i为: "<< i;
	cout << " ,变量count为: " << count << endl;
}
