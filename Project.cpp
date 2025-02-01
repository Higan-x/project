#include <bits/stdc++.h>

using namespace std;
string roll_no[30], firstname[30] ,surname[30], Major[30], courses[30][30] ;
float course_q[30][30],grade[30][30],sum[30],course_num[30];

int total = 0;

bool numcheck(string s)
{
	bool b = true;
	for (int i=0;i<s.length();i++)
		if( s[i] != 48 || s[i] != 49 ||s[i] != 50 ||s[i] != '3' ||s[i] != '4' ||s[i] != '5' ||s[i] != '6' ||s[i] != '7' || s[i] != '8' ||s[i] != '9')
			b = false;
	return b;
}

void enter()
{
	int st_num = 0;
	cout << "How many students do u want to enter??" << endl;
	cin >> st_num;
	if (total == 0) 
	{
		total = st_num + total;
		for (int i = 0; i < st_num; i++)
		{
			cout << "\nEnter the Data of student number " << i + 1 <<":"<< endl;
			for (int i=0;i<50;i++,cout<<"#");
			string roll_num;
			flag:
			cout<<endl;
			cout << "Enter Roll NO: " << endl;
			cin>>roll_no[i] ;
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
			cout << "Enter FirstName: " << endl;
			cin >> firstname[i];
			cout << "Enter SurName: " << endl;
			cin >> surname[i];
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
			cout << "Enter Major: " << endl;
			cin >> Major[i];
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
			cout << "Enter the number of courses u want to add: " << endl;
			cin >> course_num[i];
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
			for(int j=0;j<course_num[i];j++)
			{
				cout<<j+1<<" st course :"<<endl;
				cout<<"Enter the name of the course : ";
				cin>>courses[i][j];
				cout<<"Enter the quantity of this course : ";
				cin>>course_q[i][j];
				cout<<"Enter the grade : ";
				cin>>grade[i][j];
				for (int i=0;i<50;i++,cout<<"#");
				cout<<endl;
			}
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
		}
	}
	else
	{
		for (int i = total; i < st_num + total; i++)

		{
			cout << "\nEnter the Data of student number " << i + 1 <<":"<< endl;
			for (int i=0;i<50;i++,cout<<"#");
			flag2:
			cout<<endl;
			cout << "Enter Roll NO: " << endl;
			cin>>roll_no[i];
			cout<<endl;
			cout << "Enter FirstName: " << endl;
			cin >> firstname[i];
			cout << "Enter SurName: " << endl;
			cin >> surname[i];
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
			cout << "Enter Major: " << endl;
			cin >> Major[i];
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
			cout << "Enter the number of courses u want to add: " << endl;
			cin >> course_num[i];
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
			for(int j=0;j<course_num[i];j++)
			{
				cout<<j+1<<" st course :"<<endl;
				cout<<"Enter the name of the course : ";
				cin>>courses[i][j];
				cout<<"Enter the quantity of this course : ";
				cin>>course_q[i][j];
				cout<<"Enter the grade : ";
				cin>>grade[i][j];
				for (int i=0;i<50;i++,cout<<"#");
				cout<<endl;
			}
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
		}
		total = st_num + total;
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
			for(int k=0;k<50;k++,cout<<"-");
			cout<<endl;
			cout << "\nData of Student " << i + 1 <<":"<< endl<<endl;
			cout << "Roll Number :" << roll_no[i] << endl;
			cout << "Full Name :" << firstname[i] <<'\t'<<surname[i]<< endl;
			cout << "Major :" << Major[i] << endl;
			for(int j=0;j<course_num[i];j++)
			{
				cout<<j+1<<"st course"<<endl << "Name :"<<courses[i][j]<<'\t'<<"Quantity :"<<course_q[i][j]<<'\t'<<"Grade :"<<grade[i][j]<<endl;
			}
		}
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
	}
}
// void search()
// {
// 	if (total == 0)
// 	{
// 		cout << "No data is entered" << endl;
// 	}
// 	else
// 	{
// 		string rollno;
// 		cout << "Enter the roll no of student" << endl;
// 		cin >> rollno;
// 		for (int i = 0; i < total; i++)
// 		{
// 			if (rollno == roll_no[i])
// 			{
// 				cout << "Roll NO " << roll_no[i] << endl;
// 				cout << "Name " << name[i] << endl;
// 				cout << "Major " << Major[i] << endl;
// 				cout << "Course " << course[i] << endl;
// 			}
// 		}
// 	}
// }
// void update()
// {
// 	if (total == 0)
// 	{
// 		cout << "No data is entered" << endl;
// 	}
// 	else
// 	{
// 		string rollno;
// 		cout << "Enter the roll no of student which you want to update" << endl;
// 		cin >> rollno;
// 		for (int i = 0; i < total; i++)
// 		{
// 			if (rollno == roll_no[i])
// 			{
// 				cout << "\nPrevious data" << endl
// 					 << endl;
// 				cout << "Data of Student " << i + 1 << endl;
// 				cout << "Roll NO: " << roll_no[i] << endl;
// 				cout << "Name " << name[i] << endl;
// 				cout << "Major " << Major[i] << endl;
// 				cout << "Course " << course[i] << endl;
// 				cout << "\nEnter new data" << endl << endl;
// 				cout << "Enter Roll NO ";
// 				cin >> roll_no[i];
// 				cout << "Enter Name: ";
// 				cin >> name[i];
// 				cout << "Enter Major: ";
// 				cin >> Major[i];
// 				cout << "Enter Course: ";
// 				cin >> course[i];
// 				cout << "Enter Mobile NO: ";
// 			}
// 		}
// 	}
// }
// void Delete()
// {
// 	if (total == 0)
// 	{
// 		cout << "No data is entered yet" << endl;
// 	}
// 	else
// 	{
// 		int a;
// 		cout << "Are you Sure to Delete Data?" << endl;
// 		cout << "Press 1 to delete all record" << endl;
// 		cin >> a;
// 		if (a == 1)
// 		{
// 			total = 0;
// 			cout << "All record is deleted..!!" << endl;
// 		}
// 		else
// 		{
// 			cout << "Please Press 1 to Delete All Record" << endl;
// 		}
// 	}
// }
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
		// case 3:
		// 	search();
		// 	break;
		// case 4:
		// 	update();
		// 	break;
		// case 5:
		// 	Delete();
		// 	break;
		case 6:
			exit(0);
			break;
		default:
			cout << "Invalid input" << endl;
			break;
		}
	}
}
