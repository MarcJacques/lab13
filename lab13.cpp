#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
  const int SIZE = 7;
  int date[SIZE];
  double snowHeight[SIZE];
  string month;
  int peakSnowDay = 0;
  double totalSnow = 0;
  double average;

  cout << "Enter the name of the month: " << endl;
  cin >> month;

  for(int i=0; i < SIZE; i++)
     {
       cout << "Enter the date " <<i+1<<endl;
       cin >> date[i];

       cout << "Enter number of inches of snow for day" <<i+1<<endl;
       cin >> snowHeight[i];
     }
  
  cout << "Snow report "<<month<<" "<< date[0]<<" - "<< date[SIZE - 1]<< endl;
  cout << "Date      Snow Fall" << endl;
  
  for(int i=0; i < SIZE; i++)
    {
      if(i > 0)
      {
        if(snowHeight[peakSnowDay] < snowHeight[i])
        peakSnowDay = i;
      }

      totalSnow += snowHeight[i];
      
      cout << date[i]<<"        "<<snowHeight[i]<< endl;
      
    }
  average = totalSnow/SIZE;
  cout << fixed << showpoint << setprecision(2);

  cout <<"Height snow fall is " <<snowHeight[peakSnowDay]<<" on "<<date[peakSnowDay]<<" and the average snow fall is "<<average<<endl;
  
  return 0;
}