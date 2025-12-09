//#include<iostream>
//using namespace std;
//int main ()
//{
//	int row;
//	cout << "Enter Number of Rows : ";
//	cin >> row;
// cout << endl;
//	for (int control_upper_shape = 1 ;row >= control_upper_shape;control_upper_shape++)//  control_upper_shape,star_control,space_control are counter for controlling rows and coulmns;
//	{
//		for (int star_control = row - control_upper_shape;star_control >= 0; star_control--)
//		{
//			cout << "*";
//		}
//		for (int space_control = 1;control_upper_shape > space_control;space_control++)
//		{
//			cout << "  ";
//		}
//		for (int star_control = row - control_upper_shape; star_control >= 0; star_control--)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	for (int control_lower_shape = 1; row >= control_lower_shape; control_lower_shape++) //  star_control,control_lower_shape,space_control are counter for controlling rows and coulmns;
//	{
//		for (int star_control = 1;control_lower_shape >= star_control;star_control++)
//		{
//			cout << "*";
//		}
//		for (int space_control = row - control_lower_shape; space_control > 0; space_control--)
//		{
//			cout << "  ";
//		}
//		for (int star_control = 1; control_lower_shape >= star_control; star_control++)
//		{
//			cout << "*";
//		}
//		 cout << endl;
//	}
//}