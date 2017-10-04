#include <iostream>
using namespace std;

int main()
{
  int n;
  int i;
  bool isPrime = true;
  char quit = n;

  cout << "Enter a positive integer: ";
  cin >> n;

  while(quit != 'Y' or quit != 'y'){
             
  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime) 
      cout << "This is a prime number" << endl;
  else
      cout << "This is not a prime number" << endl;
      
  
  system("pause");
}
  return 0;
  
}
