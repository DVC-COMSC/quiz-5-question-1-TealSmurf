#include  <iostream>
using namespace std;

int main()
{
   
   int M;
   cout << "Enter total number of rows = columns: ";
   cin >> M;

   for(int i = 0; i < M; i++)
   {
      for(int j = 0; j <= i; j++)
      {
         cout << static_cast<char>('A' + j) << " ";
      }
      cout << endl;
   }
  
}
