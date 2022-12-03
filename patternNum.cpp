#include <iostream>
using namespace std;

int main()
{
 // program to print rectangular pattern of numbers

 int num;
 cout << "enter one number:" <<endl;
 cin >> num;
 cout << "The pattern is:" <<endl;
  for(int i=1; i<=num; i++){
    for(int j=i; j<=num; j++){
        cout <<j;
    }
    for(int m=1; m<=(i-1); m++){
        cout <<m;
    }
    cout <<endl;
  }
 return 0;
}
