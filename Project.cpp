#include <bits/stdc++.h>

using namespace std;
string roll_no[30], name[30], Major[30], course[30];


int total = 0;
void enter()
{
	int ch = 0;
	cout << "How many students do u want to enter??" << endl;
	cin >> ch;
	if (total == 0) 
	{
		total = ch + total;
		string roll_num;
		for (int i = 0; i < ch; i++)
		{
			cout << "\nEnter the Data of student " << i + 1 << endl
				 << endl;  
			for (int i=0;i<50;i++,cout<<"-");
			cout<<endl;
			cout << "Enter Roll NO: " << endl;
			cin >> roll_no[i];
			cout << "Enter Name: " << endl;
			cin >> name[i];
			cout << "Enter Major: " << endl;
			cin >> Major[i];
			cout << "Enter Course: " << endl;
			cin >> course[i];
		}
	}
	else
	{
		for (int i = total; i < ch + total; i++)

		{
			cout << "\nEnter the Data of student " << i + 1 << endl
				 << endl;
			cout << "Enter Roll NO ";
			cin >> roll_no[i];
			cout << "Enter Name: ";
			cin >> name[i];
			cout << "Enter Major: ";
			cin >> Major[i];
			cout << "Enter Course: ";
			cin >> course[i];
		}
		total = ch + total;
	}
}
void show()
{
	if (total == 0)
	{
		cout << "No Data is Entered" << endl;
	}
	else
	{
		for (int i = 0; i < total; i++)
		{
			cout << "\nData of Student " << i + 1 << endl
				 << endl;
			cout << "Roll NO " << roll_no[i] << endl;
			cout << "Name " << name[i] << endl;
			cout << "Major " << Major[i] << endl;
			cout << "Course " << course[i] << endl;
		}
	}
}
void search()
{
	if (total == 0)
	{
		cout << "No data is entered" << endl;
	}
	else
	{
		string rollno;
		cout << "Enter the roll no of student" << endl;
		cin >> rollno;
		for (int i = 0; i < total; i++)
		{
			if (rollno == roll_no[i])
			{
				cout << "Roll NO " << roll_no[i] << endl;
				cout << "Name " << name[i] << endl;
				cout << "Major " << Major[i] << endl;
				cout << "Course " << course[i] << endl;
			}
		}
	}
}
void update()
{
	if (total == 0)
	{
		cout << "No data is entered" << endl;
	}
	else
	{
		string rollno;
		cout << "Enter the roll no of student which you want to update" << endl;
		cin >> rollno;
		for (int i = 0; i < total; i++)
		{
			if (rollno == roll_no[i])
			{
				cout << "\nPrevious data" << endl
					 << endl;
				cout << "Data of Student " << i + 1 << endl;
				cout << "Roll NO: " << roll_no[i] << endl;
				cout << "Name " << name[i] << endl;
				cout << "Major " << Major[i] << endl;
				cout << "Course " << course[i] << endl;
				cout << "\nEnter new data" << endl << endl;
				cout << "Enter Roll NO ";
				cin >> roll_no[i];
				cout << "Enter Name: ";
				cin >> name[i];
				cout << "Enter Major: ";
				cin >> Major[i];
				cout << "Enter Course: ";
				cin >> course[i];
				cout << "Enter Mobile NO: ";
			}
		}
	}
}
void Delete()
{
	if (total == 0)
	{
		cout << "No data is entered yet" << endl;
	}
	else
	{
		int a;
		cout << "Are you Sure to Delete Data?" << endl;
		cout << "Press 1 to delete all record" << endl;
		cin >> a;
		if (a == 1)
		{
			total = 0;
			cout << "All record is deleted..!!" << endl;
		}
		else
		{
			cout << "Please Press 1 to Delete All Record" << endl;
		}
	}
}
int main()
{
	int value;
	while (true)
	{
		cout << "\nPress 1 to Enter data" << endl
			 << endl;
		cout << "Press 2 to Show data" << endl
			 << endl;
		cout << "Press 3 to Search data" << endl
			 << endl;
		cout << "Press 4 to Update data" << endl
			 << endl;
		cout << "Press 5 to Delete data" << endl
			 << endl;
		cout << "Press 6 to Quit" << endl
			 << endl;
		cin >> value;
		switch (value)
		{
		case 1:
			enter();
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			Delete();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout << "Invalid input" << endl;
			break;
		}
	}
}
