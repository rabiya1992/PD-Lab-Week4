#include <iostream>
using namespace std;

main()
{int Holidays;
 int sleep;
 int daysInYear;
 int playingTimeOnWorkingDays;
 int playingTimeOnHolidays;
 int gamingTimeOnWorkingDays;
 int gamingTimeOnHolidays;
 int totalGameTime; 
 int difference;
 int timeInHours;
 int timeInMin;
 
 cout << "No of Holidays: ";
 cin >> Holidays;
 playingTimeOnWorkingDays = 63;
 playingTimeOnHolidays = 127;
 daysInYear = 365;
 sleep = 30000;
 
 gamingTimeOnWorkingDays = (daysInYear - Holidays)*63;
 gamingTimeOnHolidays = Holidays * 127;
 totalGameTime = gamingTimeOnWorkingDays + gamingTimeOnHolidays;
 difference = 30000 - totalGameTime;

 timeInHours = difference/60;
 timeInMin = difference%60;
  
 cout << timeInHours << " hours and ";
 cout << timeInMin << " minutes " <<endl;
 
 
 if (totalGameTime > 30000)
  { 
   cout << "Tom will run away" ;
  }
  
 if (totalGameTime < 30000)
  { 
   cout << "Tom sleeps well"  ;
  }

 }






 
 
 

