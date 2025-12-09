//#include<iostream>
//#include<fstream>
//using namespace std;
//double calculateGPA()
//{
//	double Gpa = 0;
//	fstream record;
//	record.open("grade.txt", ios::in);
//	string grade;
//	float GPA = 0;
//	int credit_hours = 0,total = 0,i = 0;
//	record >> grade >> GPA >> credit_hours;
//	while (!record.eof())
//	{
//		cout << "--------------------------" << endl;
//		cout << "Subject " << ++i << " : " << endl;
//		cout << "Grade = " << grade << endl;
//		cout << "GPA = " << GPA << endl;
//		cout << "Credit Hours = " << credit_hours << endl;
//		total += credit_hours;
//		Gpa += (GPA * credit_hours);
//		record >> grade >> GPA >> credit_hours;
//	}
//	Gpa /= total;
//	record.close();
//	return Gpa;
//}
//int main()
//{
//	float GPA = calculateGPA();
//	cout << "--------------------------" << endl;
//	cout << "Total GPA : " << GPA << endl;
//}
