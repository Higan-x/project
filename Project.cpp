#include <bits/stdc++.h>

using namespace std;
string roll_no[30], firstname[30] ,surname[30], Major[30], courses[30][30] ;
float course_q[30][30],grade[30][30],avg[30],q[30],course_num[30],sum[30];

int total = 0;
bool numcheck(string s)
{
	bool b=true;
	for (char ch : s) {
        if (!isdigit(ch)) {
            b=false;
        }
    }
    return b;
}
int stn(string s)
{
	int n=0;
	for (char ch:s)
	{
		if (ch =='0')
		{
			n*=10;
			n+=0;
		}
		if (ch =='1')
		{
			n*=10;
			n+=1;
		}
		if (ch =='2')
		{
			n*=10;
			n+=2;
		}
		if (ch =='3')
		{
			n*=10;
			n+=3;
		}
		if (ch =='4')
		{
			n*=10;
			n+=4;
		}
		if (ch =='5')
		{
			n*=10;
			n+=5;
		}
		if (ch =='6')
		{
			n*=10;
			n+=6;
		}
		if (ch =='7')
		{
			n*=10;
			n+=7;
		}
		if (ch =='8')
		{
			n*=10;
			n+=8;
		}if (ch =='9')
		{
			n*=10;
			n+=9;
		}
	}
	return n;
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
			string t;
			flag:
			cout<<endl;
			cout << "Enter StudentID: " << endl;
			cin>>roll_num;
			if (numcheck(roll_num))
			{
				for(int k=0;k<30;k++)
				{
					if (roll_no[k] != roll_num)
						roll_no[i] = roll_num;
					else{
						cout<<"This Student Id is already taken";
						goto flag;
					}
				}
			}
			else
			{
				cout<<"Please enter a number to continue"<<endl;
				goto flag;
			}
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
			f5:
			cout << "Enter the number of courses u want to add: " << endl;
			cin >> t;
			if(numcheck(t))
			{
				course_num[i] = stn(t);
			}
			else
			{
				cout<<"Please enter a number to continue"<<endl;
				goto f5;
			}
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
			for(int j=0;j<course_num[i];j++)
			{
				cout<<j+1<<" st course :"<<endl;
				cout<<"Enter the name of the course : ";
				cin>>courses[i][j];
				f6:
				cout<<"Enter the quantity of this course (number): ";
				cin>>t;
				if (numcheck(t))
				{
					course_q[i][j] = stn(t);
				}
				else
				{
					cout << "Please enter a number to continue" << endl;
					goto f6;
				}
				f7:
				cout<<"Enter the grade (more than 0 and less than 21): ";
				cin>>t;
				if (numcheck(t))
				{
					grade[i][j] = stn(t);
				}
				else
				{
					cout << "Please enter a number to continue" << endl;
					goto f7;
				}
				sum[i]+=course_q[i][j] * grade[i][j];
				q[i]+=course_q[i][j];
				for (int i=0;i<50;i++,cout<<"#");
				cout<<endl;
			}
			avg[i] = sum[i] / q[i];
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
			string roll_num;
			string t;
			cout<<endl;
			cout << "Enter StudentID: " << endl;
			cin>>roll_num;
			if (numcheck(roll_num))
				roll_no[i] = roll_num;
			else
			{
				cout<<"Please enter a number to continue"<<endl;
				goto flag2;
			}
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
			f8:
			cout << "Enter the number of courses u want to add: " << endl;
			cin >> t;
			if(numcheck(t))
			{
				course_num[i] = stn(t);
			}
			else
			{
				cout<<"Please enter a number to continue"<<endl;
				goto f8;
			}
			for (int i=0;i<50;i++,cout<<"#");
			cout<<endl;
			for(int j=0;j<course_num[i];j++)
			{
				cout<<j+1<<" st course :"<<endl;
				cout<<"Enter the name of the course : ";
				cin>>courses[i][j];
				f9:
				cout<<"Enter the quantity of this course (number): ";
				if (numcheck(t))
				{
					course_q[i][j] = stn(t);
				}
				else
				{
					cout << "Please enter a number to continue" << endl;
					goto f9;
				}
				f10:
				cout<<"Enter the grade (more than 0 and less than 21): ";
				if (numcheck(t))
				{
					grade[i][j] = stn(t);
				}
				else
				{
					cout << "Please enter a number to continue" << endl;
					goto f10;
				}
				sum[i]+=course_q[i][j] * grade[i][j];
				q[i]+=course_q[i][j];
				for (int i=0;i<50;i++,cout<<"#");
				cout<<endl;
			}
			avg[i] = sum[i] / q[i];
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
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
		cout << "No Data is Entered" << endl;
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
	}
	else
	{
		int list[30] = {-1};
		int count =0;
		string major;
		bool b=false;
		cout<<'(';
		for(int i=0;i<total;i++)
			cout<<Major[i]<<'\t';
		cout<<')';
		cout<<endl;
		cout<<"type which Major u want to list:"<<endl;
		cin>>major;
		for (int i = 0; i < total; i++)
		{
			for(int k=0;k<50;k++,cout<<"-");
			if(Major[i] == major)
			{
				b=true;
				list[count] = i;
				count++;
			}
			else
				cout<<endl<<"The major not found;"<<endl;
		}
		if (b)
		{
			int m, j, temp, t1, t2;
			for (m = 0; m < count; m++)
			{
				for (j = 0; j < count - m - 1; j++)
				{
					t1 = list[j];
					t2 = list[j + 1];
					if (avg[t1] < avg[t2])
					{
						temp = list[j];
						list[j] = list[j + 1];
						list[j + 1] = temp;
					}
				}
			}
		}
		for(int i=0;i<count;i++)
		{
			int temp=list[i];
			cout<<i+1<<"st student: "<<endl;
			cout<<"Full Name :"<<'\t'<<firstname[temp]<<'\t'<<surname[temp]<<endl;
			cout<<"StudentID :"<<'\t'<<roll_no[temp]<<endl;
			cout<<"Courses :"<<endl;
			for(int k=0;k<30;k++,cout<<"-");
			cout<<endl;
			for(int j=0;j<course_num[temp];j++)
			{
				cout<<j+1<<" course :"<<endl;
				cout<<"Name :"<<'\t'<<courses[temp][j]<<endl;
				cout<<"Unit :"<<'\t'<<course_q[temp][j]<<endl;
				cout<<"grade :"<<'\t'<<grade[temp][j]<<endl;
			}
			cout<<"GPA :"<<'\t'<<avg[temp]<<endl;
			for(int k=0;k<50;k++,cout<<"-");
			cout<<endl;
		}
		for(int k=0;k<50;k++,cout<<"#");
		cout<<endl;
	}
}
void search()
{
	if (total == 0)
	{
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
		cout << "No data is entered" << endl;
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
	}
	else
	{
		string rollno;
		flag3:
		cout << "Enter the StudentID of student :";
		cin >> rollno;
		if (numcheck(rollno))
		{
			for(int i=0;i<total;i++)
			{
				if(roll_no[i] == rollno)
				{
					cout<<"Student found :"<<endl;
					cout << "Full Name :" << firstname[i] <<'\t'<<surname[i]<< endl;
					cout << "StudentID :" << roll_no[i] << endl;
					cout << "Major :" << Major[i] << endl;
					cout << "GPA :" <<avg[i] <<endl;
				}
				else
					cout<<"Student not found" <<endl;
			}
		}
		else
		{
			cout<<"Please a number to continue";
			goto flag3;
		}
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
	}
}
void update()
{
	if (total == 0)
	{
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
		cout << "No data is entered" << endl;
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
	}
	else
	{
		string rollno;
		string s;
		f13:
		cout << "Enter the StudentID of student which you want to update : " << endl;
		cin >> rollno;
		if(numcheck(rollno))
		{
			for (int i = 0; i < total; i++)
			{
				if (rollno == roll_no[i])
				{
					int value;
					string t;
					cout << "Which part you want to update? (1 ---> Name , 2 ---> Major , 3 ---> Courses )" << endl;
					cin >> value;
					switch (value)
					{
					case 1:
						cout << "Enter the Name :" << endl
							 << "First Name :";
						cin >> firstname[i];
						cout << "SurName :";
						cin >> surname[i];
						cout << "Updated succesfully" << endl;
						break;
					case 2:
						cout << "Enter the Major :" << endl;
						cin >> Major[i];
						cout << "Updated succesfully" << endl;
						break;
					case 3:
						for (int j = 0; j < course_num[i]; j++)
							cout << courses[i][j] << '\t';
						cout << "Type the course u want to change: " << endl;
						cin >> s;
						sum[i] = 0;
						q[i] = 0;
						for (int k = 0; k < course_num[i]; k++)
						{
							if (s == courses[i][k])
							{
								cout << "Enter the name of the course : ";
								cin >> courses[i][k];
							f12:
								cout << "Enter the units: ";
								cin>>t;
								if (numcheck(t))
								{
									course_q[i][k] = stn(t);
								}
								else
								{
									cout << "Please enter a number to continue" << endl;
									goto f12;
								}
							f11:
								cout << "Enter the grade (more than 0 and less than 21): ";
								cin>>t;
								if (numcheck(t))
								{
									grade[i][k] = stn(t);
								}
								else
								{
									cout << "Please enter a number to continue" << endl;
									goto f11;
								}
							}
							else
								cout << "Course not found" << endl;
							sum[i] += course_q[i][k] * grade[i][k];
							q[i] += course_q[i][k];
						}
						avg[i] = sum[i] / q[i];
						cout << "Updated succesfully" << endl;
						break;
					default:
						for (int k = 0; k < 50; k++, cout << "-")
							;
						cout << endl;
						cout << "Invalid input" << endl;
						for (int k = 0; k < 50; k++, cout << "-")
							;
						cout << endl;
						break;
					}
				}
				else
				{
					cout << "Student not found" << endl;
				}
			}
		}
		else{
			cout << "Please enter a number to continue" << endl;
			goto f13;
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
void report()
{
	if (total == 0)
	{
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
		cout << "No Data is Entered" << endl;
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
	}
	else
	{
		string rollno;
		flag4:
		cout << "Enter the StudentID of student :";
		cin >> rollno;
		if (numcheck(rollno))
		{
			for(int i=0;i<total;i++)
			{
				if(roll_no[i] == rollno)
				{
					cout<<"Student found :"<<endl;
					cout << "Full Name :" << firstname[i] <<'\t'<<surname[i]<< endl;
					cout << "StudentID :" << roll_no[i] << endl;
					cout << "Major :" << Major[i] << endl <<"Courses :" <<endl;
					for(int j=0; j<course_num[i];j++)
						cout<<"Name :"<<courses[i][j]<<endl<<"Quantity :"<<course_q[i][j]<<endl<<"Grade :"<<grade[i][j]<<endl;
					cout << "GPA :" <<avg[i] <<endl;
				}
				else
					cout<<"Student not found" <<endl;
			}
		}
		else
		{
			cout<<"Please a number to continue";
			goto flag4;
		}
		for(int k=0;k<50;k++,cout<<"-");
		cout<<endl;
	}
}
int main()
{
	int value;
	while (true)
	{
		cout << "\nPress 1 to Enter data" << endl
			 << endl;
		cout << "Press 2 to Show and list data" << endl
			 << endl;
		cout << "Press 3 to Search data" << endl
			 << endl;
		cout << "Press 4 to Update data" << endl
			 << endl;
		cout << "Press 5 to Delete all the data" << endl
			 << endl;
		cout << "Press 6 to show the report" << endl
			 << endl;
		cout << "Press 7 to Quit" << endl
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
			report();
			break;
		case 7:
			exit(0);
			break;
		default:
			for(int k=0;k<50;k++,cout<<"-");
			cout<<endl;
			cout << "Invalid input" << endl;
			for(int k=0;k<50;k++,cout<<"-");
			cout<<endl;
			break;
		}
	}
}
