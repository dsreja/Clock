#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
  int hr, min, sec, a = 0;
  cout << "Enter the hr: ";
  cin >> hr;
  cout << "Enter the min: ";
  cin >> min;
  cout << "Enter the sec: ";
  cin >> sec;
  while (a == 0)
  {
    system("cls");
    cout << "Time is: " << hr << ":" << min << ":" << sec << endl;
    sec++;
    Sleep(1000);
    if(sec>59)
    {
        min++;
        sec = 0;
    }
    if(min>59)
    {
         hr++;
         min=0;
    }
    if(hr>11)
    {
        hr = 0;
    }
  }
  getchar();
  getchar();
  return 0;
} 
