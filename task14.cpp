#include <iostream>
using namespace std;

void printMenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2);

main()
{string name;
 float matricMarks;
 float interMarks;
 float ecatMarks;
 string nameStd1;
 float ecatMarksStd1;
 string nameStd2;
 float ecatMarksStd2;
 cout << "Enter your name: ";
 cin >> name;
 cout << "Enter your matric marks: ";
 cin >> matricMarks; 
 cout << "Enter your fsc marks: ";
 cin >> interMarks;
 cout << "Enter your ecat marks: ";
 cin >> ecatMarks;
 cout << "Enter name of the first student: ";
 cin >>  nameStd1;
 cout << "Enter ecat marks of first student: ";
 cin >> ecatMarksStd1;
 cout << "Enter name of the second student: ";
 cin >> nameStd2;
 cout << "Enter ecat marks of second student: ";
 cin >> ecatMarksStd2;
 
 printMenu();
 calculateAggregate(name, matricMarks, interMarks, ecatMarks);
 compareMarks( nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);

}

void printMenu()
{
 cout << " * * * * * * * * * * * * * * * * * * * * * * " <<endl;
 cout << " *                                         * " <<endl;
 cout << " *                                         * " <<endl;
 cout << " *                                         * " <<endl;
 cout << " *                                         * " <<endl;
 cout << " *       UNIVERSITY ADMISSION              * " <<endl;
 cout << " *       MANAGEMENT SYSTEM                 * " <<endl;
 cout << " *                                         * " <<endl;
 cout << " *                                         * " <<endl;
 cout << " *                                         * " <<endl;
 cout << " *                                         * " <<endl;
 cout << " *                                         * " <<endl;
 cout << " *                                         * " <<endl;
 cout << " * * * * * * * * * * * * * * * * * * * * * * " <<endl;
}

void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
 float matric;
 float inter;
 float ecat;
 float aggregate;
 matric = (matricMarks/1100) * (100*0.30);
 inter = (interMarks/1100) * (100*0.30);
 ecat = (ecatMarks/400) * (100*0.40);
 aggregate = matric + inter + ecat;
 cout << "Aggregate is: ";
 cout << aggregate <<endl;
}


void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2)
{
 if (ecatMarksStd1 > ecatMarksStd2)
 {
  cout << "The Roll no of first student is 1 " <<endl; 
 }
 
 if (ecatMarksStd1 < ecatMarksStd2)
 { 
  cout << "The Roll no of second student is 1 " <<endl;
 }
}



