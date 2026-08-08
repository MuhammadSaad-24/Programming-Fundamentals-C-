//#include<iostream>
//using namespace std;
//int main()
//{
//	int  row, upper_shape_controller, other, z; 
//	cout << "Enter Number of Rows : ";
//	cin >> row;
//	if (row > 0)
//	{
//		for (int space_row1 = 1; space_row1 <= row; space_row1++)
//			cout << "  ";
//		cout << " *" << endl;
//		for (upper_shape_controller = 2; row >= upper_shape_controller; upper_shape_controller++)
//		{
//			for (int space_controller = row - upper_shape_controller; space_controller >= 0; space_controller--)
//				cout << "  ";
//			cout << "*";
//			for (int space_controller = 1; space_controller < upper_shape_controller; space_controller++)
//				cout << "  ";
//			cout << "|";
//			for (int space_controller = 1; space_controller < upper_shape_controller; space_controller++)
//				cout << "  ";
//		    cout << "*";
//			cout << endl;
//		}
//		cout << "*";
//		for (int middle_row_controller = 1; row >= middle_row_controller; middle_row_controller++)
//			cout << "--";
//		cout << "|";
//		for (int middle_row_controller = 1; row >= middle_row_controller; middle_row_controller++)
//			cout << "--";
//		cout << "*" << endl;
//		for (int lower_shape_controller = 1; 2 * row >= lower_shape_controller; lower_shape_controller++)
//		{
//			for (int space_controller = 0; space_controller < lower_shape_controller; space_controller++)
//				cout << " ";
//			cout << "*";
//			for (int space_controller = 2 * row - lower_shape_controller; space_controller > 0; space_controller--)
//				cout << " ";
//			cout << "|";
//			for (int space_controller = 2 * row - lower_shape_controller; space_controller > 0; space_controller--)
//				cout << " ";
//			cout << "*";
//			cout << endl;
//		}
//		for (int space_row_last = 1; space_row_last <= row; space_row_last++)
//		{
//			cout << "  ";
//		}
//		cout << " *" << endl;
//	}
//	else
//		cout << "Enter Positive Integer : " << endl;
//}