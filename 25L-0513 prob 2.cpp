#include<iostream>
#include<fstream>
#include<time.h>
using namespace std;
const int Maxrooms = 20,Floors = 10,noise = 50;
const char filename1[12] = { "record.txt" }, filename2[12] = {"revenue.txt"};
void WriteRoomData(const char* filename, bool roomStatus[][Maxrooms], int roomCost[][Maxrooms], int& floors, int& rooms)
{
	ofstream record;
	record.open(filename);
	cout << "Enter Number of Floors : ";
	cin >> floors;
	while (floors > 10 || floors < 0)
	{
		cout << "Invalid Number of Floors " << endl;
		cout << "Enter Number of Floors : ";
		cin >> floors;
	}
	cout << "Enter Number of Rooms : ";
	cin >> rooms;
	while (floors > 20 || floors < 0)
	{
		cout << "Invalid Number of Rooms " << endl;
		cout << "Enter Number of Rooms : ";
		cin >> rooms;
	}
	record << floors << " " << rooms << endl;
	cout << "Enter Room Status :\n";
	for (int i = 0; i < floors; i++)
	{
		for (int j = 0; j < rooms; j++)
		{
			cin >> roomStatus[i][j];
			while (roomStatus[i][j] != 0 && roomStatus[i][j] != 1)
			{
				cout << "Entries in 0 or 1 only" << endl;
				cin >> roomStatus[i][j];
			}
			record << roomStatus[i][j] << " ";
		}
		record << endl;
	}
	cout << "Enter cost per day : \n";
	for (int i = 0; i < floors; i++)
	{
		for (int j = 0; j < rooms; j++)
		{
			cin >> roomCost[i][j];
			while (roomCost[i][j] <= 0 || roomCost[i][j] > 1000)
			{
				cout << "Entries only from 1 to 1000 " << endl;
				cin >> roomStatus[i][j];
			}
			record << roomCost[i][j] << " ";
		}
		record << endl;
	}
	record.close();
}
int EncryptRevenue(int actualRevenue, int noise)
{
	return actualRevenue + noise;
}
int DecryptRevenue(int encryptedRevenue, int noise)
{
	return encryptedRevenue - noise;
}
void WriteRevenueData(const char* filename, bool roomStatus[][Maxrooms], int roomCost[][Maxrooms],float newrevenue[], int floors, int rooms)
{
	ofstream revenues;
	revenues.open(filename);
	for (int i = 0; i < floors; i++)
	{
		float sum = 0;
		for (int j = 0; j < rooms; j++)
		{
			sum += roomStatus[i][j] * roomCost[i][j];
		}
		sum = EncryptRevenue(sum, noise);
		revenues << sum + newrevenue[i] << endl ;
	}
	revenues.close();
}
void ReadRevenueData(const char* filename, int floors, int noise, float newrevenue[Floors])
{
	ifstream revenue;
	revenue.open(filename);
	for (int i = 0; i < floors; i++)
	{
		revenue >> newrevenue[i];
		newrevenue[i] = DecryptRevenue(newrevenue[i], noise);
	}
	revenue.close();
}
void DisplayRevenueData(const char* filename , int floors,int noise)
{
	float newrevenue[Floors];
	ifstream revenue;
	revenue.open(filename);
	for (int i = 0; i < floors; i++)
	{
		int newrevenues = 0;
		revenue >> newrevenues;
		newrevenues = DecryptRevenue(newrevenues, noise);
		newrevenue[i] = newrevenues;
	}
	revenue.close();
	cout << "\n\n Revenue of Each Floor : \n\n";
	double total_revenue = 0;
	for (int i = 0; i < floors; i++)
	{
		cout << "Floor " << i << " : " << newrevenue[i] << endl;
		total_revenue += newrevenue[i];
	}
	cout << "\nTotal Revenue : " << total_revenue << endl;
	total_revenue -= 0.5 * total_revenue;
	cout << "\nProfit (50%) = " << total_revenue << endl;
}
void ReadRoomData(const char* filename, bool roomStatus[][Maxrooms], int roomCost[][Maxrooms], int& floors, int& rooms)
{
	ifstream record;
	record.open(filename);
	record >> floors >> rooms;
	for (int i = 0; i < floors; i++)
	{
		for (int j = 0; j < rooms; j++)
		{
			record >> roomStatus[i][j];
		}
	}
	for (int i = 0; i < floors; i++)
	{
		for (int j = 0; j < rooms; j++)
		{
			record >> roomCost[i][j];
		}
	}
}

double CalculateFloorOccupancy(bool roomStatus[][Maxrooms], int& floor, int totalRooms, bool& suggestion, int totalfloors)
{
	float floor_occupancy[Floors] = { 0 };
	float pfloor;
	int pfn;
	for (int i = 0; i < totalfloors; i++)
	{
		for (int j = 0; j < totalRooms; j++)
		{
			if (roomStatus[i][j])
				floor_occupancy[i]++;
		}
		if (i == floor)
		{
			pfloor = floor_occupancy[i];
			pfn = i;
		}
	}
	bool flag = 0;
	for (int i = 0; i < totalfloors; i++)
	{
		if (floor_occupancy[i] != totalRooms)
		{
			flag = 1;
		}
	}
	if (flag == 0)
		return 1;
	if (((pfloor / totalRooms) * 100) <= 50)
	{
		return ((pfloor / totalRooms) * 100);//return floor given
	}
	else
	{
		cout << "Floor " << pfn << " Occupancy is : " << ((pfloor / totalRooms) * 100) << endl;
		cout << "Floor " << pfn << " Not Avalible : \n";
	}
	for (int i = 0; i < totalfloors; i++)
	{
		if ((floor_occupancy[i] / totalRooms) * 100 <= 50)
		{
			floor = i;
			suggestion = 1;
			return (floor_occupancy[i] / totalRooms) * 100;//return suggested floor
		}
	}
	if (pfloor == totalRooms && !suggestion)
	{
		cout << "No Room Avalible at Floor " << pfloor << endl;
		cout << "No Floor With 50% or less Occupancy " << endl;
		for (int i = 0; i < totalfloors; i++)
		{
			if (floor_occupancy[i] != totalRooms)
			{
				floor = i;
				suggestion = 1;
				return(floor_occupancy[i] / totalRooms) * 100;
			}
		}
	}
	if (!suggestion && pfloor != totalRooms)
	{
		cout << "No Floor wih 50% or less Occupancy  " << endl;
		return (pfloor / totalRooms) * 100;//return floor given if all are > 50
	}
}
bool dealing(bool roomstatus[][Maxrooms],int roomcost[][Maxrooms],float newrevenue[],int floors,int rooms)
{
	int UserID;
	int pfloor, proom, days;
	float final_cost,base_cost;
	bool suggestion = 0;
	cout << "------------------------------" << endl;
	cout << "Hotel Room booking : \n" << endl;
	cout << "User ID : ";
	cin >> UserID;
	while (UserID <= 0)
	{
		cout << "Enter Valid User ID : ";
		cin >> UserID;
	}
	cout << "Enter Prefered Floor (0-" <<floors - 1<<") : ";//floors start from zero
	cin >> pfloor;
	while (pfloor >= floors)
	{
		cout << "Not Avalible\n";
		cout << "Enter Prefered Floor (0-" << floors - 1 << ") : ";
		cin >> pfloor;
	}
	int pocc = CalculateFloorOccupancy(roomstatus, pfloor, rooms, suggestion, floors);
	if (pocc == 1)
	{
		cout << "No Room Avalible : " << endl;
		return 0;
	}
	if (suggestion)
	{
		cout << "Prefered Floor : " << pfloor << endl;
		cout << "Percentage Occupency : " << pocc << "%" << "  Avalibe for Booking" << endl;
	}
	else
		cout << "Percentage Occupency : " << pocc << "%"  << "  Avalibe for Booking" << endl;
	cout << "Enetr Prefered Room : ";
	cin >> proom;
	proom--;
	while (roomstatus[pfloor][proom] || proom > rooms || proom < 0)
	{
		cout << "Room is Occupied : \n";
		cout << "Enter Another Room : ";
		cin >> proom;
		proom--;
	}
	cout << "Room Status : Avalible" << endl;
	roomstatus[pfloor][proom] = 1;
	cout << "Enter Days to Stay : ";
	cin >> days;
	while (days <= 0 || days > 30)
	{
		cout << "Enter days > 0 and days <= 30\n";
		cout << "Enter Days to Stay : ";
		cin >> days;
	}
	cout << "Room Cost : " << roomcost[pfloor][proom] << endl;
	if (days > 3)
	{
		cout << "30% Disscount :" << endl;
		final_cost = days * (roomcost[pfloor][proom] - roomcost[pfloor][proom] * 0.3);
		cout << "Base Cost  = " << days << " * (" << roomcost[pfloor][proom] << " - " << roomcost[pfloor][proom] << " * 0.3 )" << endl;
	}
	else
	{
		final_cost = days * roomcost[pfloor][proom];
		cout << "Base Cost  = " << days << " * " << roomcost[pfloor][proom] << endl;
	}
	base_cost = final_cost - roomcost[pfloor][proom];
	cout << "Final cost : " << final_cost << endl;
	cout << "------------------------------" << endl;
	cout << "Hotel Room booking : \n" << endl;
	cout << "User ID : " << UserID <<endl;
	cout << "Floor : " << pfloor << endl;
	cout << "Room : " << ++proom << endl;
	cout << "Final Cost : " << final_cost << endl;
	cout << "\nUpdating Revenue......." << endl;
	ReadRevenueData(filename2, floors, noise, newrevenue);
	newrevenue[pfloor] = EncryptRevenue(newrevenue[pfloor], noise);
	cout << "Encrypted Revenue : " << newrevenue[pfloor] << endl;
	newrevenue[pfloor] = DecryptRevenue(newrevenue[pfloor], noise);
	cout << "Decrypted Revenue : " << newrevenue[pfloor] << endl;
	newrevenue[pfloor] += final_cost;
	cout << "\nNew Revenue of floor " << pfloor << " : " << newrevenue[pfloor] << endl;
	for (int i = 0; i < floors; i++)
	{
		newrevenue[i] = 0 ;
	}
	newrevenue[pfloor] = base_cost;
	WriteRevenueData(filename2, roomstatus, roomcost, newrevenue,floors,rooms );
	cout << "\nBooking Sucessful .....\n";
}
int main()
{
	int roomcost[Floors][Maxrooms];
	bool roomstatus[Floors][Maxrooms];
	int rooms, floors;
	float newrevenue[Floors] = { 0 };
	//WriteRoomData(filename1, roomstatus, roomcost, floors, rooms);//if want to update file
	ReadRoomData(filename1, roomstatus, roomcost, floors, rooms);
	WriteRevenueData(filename2, roomstatus, roomcost, newrevenue, floors, rooms);
	int choise;
	do
	{
		cout << "------------------------------" << endl;
		cout << "Welcome to Hotel : " << endl;
		cout << "\n1 : Book Room \n";
		cout << "2 : Display Revenue Report \n";
		cout << "3 : Exit \n";
		cout << "Enter your Choise : ";
		cin >> choise;
		switch (choise)
		{
		case 1:
			dealing(roomstatus, roomcost, newrevenue, floors, rooms);
			break;
		case 2:
			DisplayRevenueData(filename2, floors, noise);
			break;
		case 3:
			return 0;
		}
	} while (true);
}