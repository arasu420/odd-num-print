#include <iostream>
using namespace std;
int main()
{
  int n,m,r;
   cout << "Enter the number: ";
  cin >> n;
  do 
  {
      m=n/10;
      r=n%10;
      if(r%2!=0)
      {
          cout<<r;
      }
      n=m;
  }while(n!=0);
  return 0;
}
