#include<iostream>
using namespace std;
void displayset(int set[], int noe)
{
	cout << "Set Elements are : {";
	for (int i = 0; noe > i; i++)
	{
		cout << set[i] << ",";
	}
	cout << "}" << endl;
}
void sorting(int set[], int noe)
{
	for (int i = 0; i < noe; i++)
	{
		int min = set[i];
		int minind = i;
		int j;
		for (j = i + 1; j < noe; j++)
		{
			if (min > set[j])
			{
				min = set[j];
				minind = j;
			}
		}
		int temp = set[i];
		set[i] = set[minind];
		set[minind] = temp;
	}
}
bool searchelement(int arr[], int element, int noe);
bool addelemnt(int set[], int& noe, int capacity, int element)
{
	if (capacity == noe)
		return 0;
	else
	{
		bool flag = searchelement(set, element, noe);
		if (flag == 0)
		{
			set[noe] = element;
			noe++;
			return 1;
		}
		else
			return 0;
	}
}
bool searchelement(int arr[], int element, int noe)
{
	sorting(arr, noe);
	int start = 0, end = noe - 1, mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (arr[mid] == element)
			return 1;
		else if (arr[mid] > element)
			end = mid - 1;
		else if (arr[mid] < element)
			start = mid + 1;
	}
	return 0;
}
int elementposition(int set[], int& noe, int capacity, int element)
{
	sorting(set, noe);
	int start = 0, end = noe - 1, mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (set[mid] == element)
			return mid;
		else if (set[mid] > element)
			end = mid - 1;
		else if (set[mid] < element)
			start = mid + 1;
	}
	return -1;
}
bool removeelement(int set[], int& noe, int capacity, int element)
{
	int eleindex = elementposition(set, noe, capacity, element);
	if (eleindex == -1)
		return 0;
	else
	{
		for (eleindex; eleindex < noe; eleindex++)
		{
			set[eleindex] = set[eleindex + 1];
		}
		noe--;
		return 1;
	}
}
bool isEmpty(int noe)
{
	if (noe == 0)
		return 1;
	else
		return 0;
}
bool isFull(int noe, int capacity)
{
	if (noe == capacity)
		return 1;
	else
		return 0;
}
void intersection(int setA[], int setB[], int setAnoe, int setBnoe, int newset[], int& newnoe)
{
	for (int i = 0; setAnoe > i; i++)
	{
		bool flag1 = searchelement(setB, setA[i], setBnoe);
		if (flag1 == 1)
		{
			newset[newnoe] = setA[i];
			newnoe++;
		}
	}
	displayset(newset, newnoe);
}
void unions(int setA[], int setB[], int setAnoe, int setBnoe, int newset[], int& newnoe)
{
	newnoe = 0;
	for (int noe = 0; noe < setAnoe; noe++)
	{
		addelemnt(newset, newnoe, 100, setA[noe]);
	}
	for (int noe = 0; noe < setBnoe; noe++)
	{
		addelemnt(newset, newnoe, 100, setB[noe]);
	}
	sorting(newset, newnoe);
	displayset(newset, newnoe);
}
void difference(int setA[], int setB[], int setAnoe, int setBnoe, int newset[], int& newnoe)
{
	newnoe = 0;
	for (int i = 0; setAnoe > i; i++)
	{
		bool flag = searchelement(setB, setA[i], setBnoe);
		if (!flag)
			addelemnt(newset, newnoe, 100, setA[i]);
	}
	displayset(newset, newnoe);
}
int issubset(int setA[], int setB[], int setAnoe, int setBnoe)
{
	int flag1 = 1, flag2 = 1;
	for (int i = 0; setAnoe > i; i++)
	{
		if (!searchelement(setB, setA[i], setBnoe))
			flag1 = 0;
	}
	for (int i = 0; setBnoe > i; i++)
	{
		if (!searchelement(setA, setB[i], setAnoe))
			flag2 = 0;
	}
	if (!flag1 && !flag2)
		return 0;
	if (setAnoe == setBnoe)
		return 2;
	else
		return 1;
}
void crosspooduct(int setA[], int setB[], int setAnoe, int setBnoe)
{
	cout << "{ ";
	for (int i = 0; setAnoe > i; i++)
	{
		for (int j = 0; j < setBnoe; j++)
		{
			cout << "(" << setA[i] << "," << setB[j] << ")" << " ";
		}
	}
	cout << "}" << endl;
}
void clone(int sourceSet[], int sourceNoe, int sourceCapacity, int targetSet[], int targetNoe, int& targetCapacity)
{
	targetNoe = sourceNoe;
	for (int i = 0; targetNoe > i; i++)
	{
		targetSet[i] = sourceSet[i];
	}
	displayset(targetSet, targetNoe);
}
int main()
{
	int capacity = 100, element = 0;
	int setA[100], noe = 0, setB[100], setAnoe = 0, setBnoe = 0, newset[10], newnoe = 0, newsetcapacity = 100;
	cout << "Enter Number of Elements of set A : ";
	cin >> noe;
	for (int i = 0; noe > i; i++)
	{
		cout << "Enter Element " << i + 1 << " : ";
		cin >> element;
		int flag = addelemnt(setA, setAnoe, capacity, element);
		while (flag == 0 && setAnoe != capacity)
		{
			cout << "Enter Element " << i + 1 << " : ";
			cin >> element;
			flag = addelemnt(setA, setAnoe, capacity, element);
		}
	}
	displayset(setA, setAnoe);
	cout << "Enter Number of Elements of set B : ";
	cin >> noe;
	for (int i = 0; noe > i; i++)
	{
		cout << "Enter Element " << i + 1 << " : ";
		cin >> element;
		int flag = addelemnt(setB, setBnoe, capacity, element);
		while (flag == 0 && setBnoe != capacity)
		{
			cout << "Enter Element " << i + 1 << " : ";
			cin >> element;
			flag = addelemnt(setB, setBnoe, capacity, element);
		}
	}
	displayset(setB, setBnoe);
	/*cout << "Search Element : " << searchelement(setA, element, setAnoe) << endl;
	cout << "Element Position : " << elementposition(setA, setAnoe, capacity, element) << endl;
	cout << "Remove Element : " << endl;
	removeelement(setA, setAnoe, capacity, element);
	cout << "Is Empty : " << isEmpty(setAnoe) << endl;
	cout << "Is Full : " << isFull(setAnoe, capacity) << endl;
	cout << "Intersection :" << endl;
	intersection(setA, setB, setAnoe, setBnoe, newset, newnoe);
	cout << "Union :" << endl;
	unions(setA, setB, setAnoe, setBnoe, newset, newnoe);
	cout << "Difference : " << endl;
	difference(setA, setB, setAnoe, setBnoe, newset, newnoe);
	cout << "Is Subset : " << issubset(setA, setB, setAnoe, setBnoe) << endl;
	cout << "Cross Product : " << endl;
	crosspooduct(setA, setB, setAnoe, setBnoe);*/
	cout << "Power Set : " << endl;
	powerset(setA, setAnoe);
	cout << "Clone : " << endl;
	clone(setA, setAnoe, capacity, newset, newnoe, newsetcapacity);
}