#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    string name;
    int cls;
    int subjectCount = 0;
    int daysTaught = 0;
    int earnings = 0;
    double totalMarks = 0;
    bool subjectTeach[3];

    void add_student(int s_id, string s_name, int s_cls, int s_totalDaysTaught, double avg_mark, int s_totalEarnings, int count,bool s_subjectTeach[])
    {
        id = s_id;
        name = s_name;
        cls = s_cls;
        daysTaught = s_totalDaysTaught;
        totalMarks=avg_mark;
        earnings = s_totalEarnings;
        subjectCount = count;
        for(int i=0;i<3;i++)
        {
        subjectTeach[i]=s_subjectTeach[i];
        }

    }

    void addDays(int days)
    {
        daysTaught = daysTaught + days;
        int extraEarnings = subjectCount * days;
        earnings = earnings + extraEarnings;
    }

    void addMarks(int marks)
    {
        totalMarks = totalMarks + marks;
    }

    int getcount()
    {
        return subjectCount;
    }
    int getId()
    {
        return id;
    }
    int getCls()
    {
        return cls;
    }
    string getName()
    {
        return name;
    }
    bool* getSubjects()
    {
        return subjectTeach;
    }
    int getTotalMarks()
    {
        return totalMarks;
    }
    int getDaysTaught()
    {
        return daysTaught;
    }
    int getEarnings()
    {
        return earnings;
    }
    void delete_last_element()
    {
       id=0;
       name="";
       totalMarks=0;
       daysTaught=0;
       earnings=0;
    }
};

class cls_eight : public student
{
public:
   void student_detail_cls_eight()
   {
       cout<<"Id: "<<id<<"   Name: "<<name<<"   Avg. Marks: "<<totalMarks<<"   Total Days Taught: "<<daysTaught<<"   Total Earnings: "<<earnings<<endl;
   }

};

class cls_nine : public student
{
public:
   void student_detail_cls_nine()
   {
       cout<<"Id: "<<id<<"   Name: "<<name<<"   Avg. Marks: "<<totalMarks<<"   Total Days Taught: "<<daysTaught<<"   Total Earnings: "<<earnings<<endl;
   }

};

class cls_ten : public student
{
public:
   void student_detail_cls_ten()
   {
       cout<<"Id: "<<id<<"   Name: "<<name<<"   Avg. Marks: "<<totalMarks<<"   Total Days Taught: "<<daysTaught<<"   Total Earnings: "<<earnings<<endl;
   }
};

int main()
{
    int option;
    int clas;
    cls_eight clsEightObject[100];
    cls_nine clsNineObject[100];
    cls_ten clsTenObject[100];

    //Demo 10 inputs: Assigning random values
    /*bool arr[3]={1,1,1};
    bool arr1[3]={1,1,0};
    bool arr2[3]={1,0,1};
    bool arr3[3]={0,0,1};
    clsEightObject[0].add_student(1, "Fahad", 8, 4,50, 5, 3,arr);
    clsEightObject[1].add_student(2, "Fahim", 8, 4,60, 5, 3,arr);
    clsEightObject[2].add_student(3, "Farhan", 8, 5,70, 7, 2,arr2);
    clsEightObject[3].add_student(4, "Farhad", 8, 5,80, 4, 1,arr3);
    clsNineObject[0].add_student(5, "Rony", 9, 5,90, 5, 2,arr1);
    clsNineObject[1].add_student(6, "Rahat", 9, 5,60, 4, 1,arr3);
    clsNineObject[2].add_student(7, "Rashed", 9, 5,80, 4, 2,arr2);
    clsTenObject[0].add_student(8, "Sakib", 10, 5,80, 4, 2,arr2);
    clsTenObject[1].add_student(9, "Shohan", 10, 5,100, 4, 1,arr3);
    clsTenObject[2].add_student(10, "Shahed", 10, 5,87, 4, 3,arr);
    //for edit just press 2 and give id and other info
    */

    cout << "...............Student Tracking..................." << endl;
    cout << "Enter option:" << endl;
    cout<<"Press 1: For adding student"<<endl;
    cout<<"Press 2: For editing student"<<endl;
    cout<<"Press 3: For deleting student"<<endl;
    cout<<"Press 4: For displaying list of students"<<endl;
    cout<<"Press 5: For Overall info of all students"<<endl;
    while (scanf("%d",&option)!=EOF)
    {
        if (option == 1)
        {
            cout << "Which Class: Press 8 for class Eight , Press 9 for class Nine or Press 10 for class 10"<< endl;
            cin >> clas;
            if (clas == 8)
            {
                cout << "Adding Student-----Class Eight" << endl;
                cout << "Enter how many students you want to add: ";
                int num;
                cin >> num;

                if (num > 0)
                {

                    for(int i=0;i<num;i++)
                    {

                    int id, cls, totalDaysTaught, totalEarnings;
                    string name;
                    bool subjectTeach[3] = {0};

                    cout << "Enter Id: ";
                    cin >> id;
                    cout << "Enter name: ";
                    cin >> name;
                    cout << "Enter Subjects you teach:(only boolean values): 1 means teach the subject, 0 means not "<<endl;
                    cout<<"Input Sequence Mathematics, English, Bangla: ";
                    int count = 0;
                    for (int j = 0; j < 3; j++)
                    {
                        bool subject_;
                        cin >> subject_;
                        if (subject_ == true)
                        {
                            subjectTeach[j] = 1;
                            count++;
                        }
                    }

                    cout<<"Enter marks of student: "<<endl;
                    int mathematics=0,english=0,bangla=0;

                    if(subjectTeach[0]==1)
                    {
                        cout<<"Mathematics Score: "; cin>>mathematics;
                    }

                    if(subjectTeach[1]==1)
                    {
                        cout<<"English Score: "; cin>>english;
                    }

                    if(subjectTeach[2]==1)
                    {
                    cout<<"Bangla Score: "; cin>>bangla;
                    }

                    double avg_marks ;
                    avg_marks= (double) ((bangla+english+mathematics)/count);

                    cout << "Enter total days taught: ";
                    cin >> totalDaysTaught;
                    cout << "Enter total earning: ";
                    cin >> totalEarnings;

                    clsEightObject[i].add_student(id, name, cls, totalDaysTaught,avg_marks, totalEarnings, count,subjectTeach);
                    cout<<endl;
                    }

                }
                if(num<=0)
                {
                    cout<<"Invalid number pressed: "<<endl;
                }
            }

            if (clas == 9)
            {
                cout << "Adding Student-----Class Nine" << endl;
                cout << "Enter how many students you want to add: ";
                int num;
                cin >> num;

                if (num > 0)
                {

                    for(int i=0;i<num;i++)
                    {

                    int id, cls, totalDaysTaught, totalEarnings;
                    string name;
                    bool subjectTeach[3] = {0};

                    cout << "Enter Id: ";
                    cin >> id;
                    cout << "Enter name: ";
                    cin >> name;
                    cout << "Enter Subjects you teach:(only boolean values): 1 means teach the subject, 0 means not "<<endl;
                    cout<<"Input Sequence Mathematics, English, Bangla: ";
                    int count = 0;
                    for (int j = 0; j < 3; j++)
                    {
                        bool subject_;
                        cin >> subject_;
                        if (subject_ == true)
                        {
                            subjectTeach[j] = 1;
                            count++;
                        }
                    }

                    cout<<"Enter marks of student: "<<endl;
                    int mathematics=0,english=0,bangla=0;

                    if(subjectTeach[0]==1)
                    {
                        cout<<"Mathematics Score: "; cin>>mathematics;
                    }

                    if(subjectTeach[1]==1)
                    {
                        cout<<"English Score: "; cin>>english;
                    }

                    if(subjectTeach[2]==1)
                    {
                    cout<<"Bangla Score: "; cin>>bangla;
                    }

                    double avg_marks ;
                    avg_marks= (double) ((bangla+english+mathematics)/count);

                    cout << "Enter total days taught: ";
                    cin >> totalDaysTaught;
                    cout << "Enter total earning: ";
                    cin >> totalEarnings;

                    clsNineObject[i].add_student(id, name, cls, totalDaysTaught,avg_marks, totalEarnings, count,subjectTeach);
                    cout<<endl;
                    }

                }
                if(num<=0)
                {
                    cout<<"Invalid number pressed: "<<endl;
                }
            }

            if (clas == 10)
            {
                cout << "Adding Student-----Class Ten" << endl;
                cout << "Enter how many students you want to add: ";
                int num;
                cin >> num;

                if (num > 0)
                {

                    for(int i=0;i<num;i++)
                    {

                    int id, cls, totalDaysTaught, totalEarnings;
                    string name;
                    bool subjectTeach[3] = {0};

                    cout << "Enter Id: ";
                    cin >> id;
                    cout << "Enter name: ";
                    cin >> name;
                    cout << "Enter Subjects you teach:(only boolean values): 1 means teach the subject, 0 means not "<<endl;
                    cout<<"Input Sequence Mathematics, English, Bangla: ";
                    int count = 0;
                    for (int j = 0; j < 3; j++)
                    {
                        bool subject_;
                        cin >> subject_;
                        if (subject_ == true)
                        {
                            subjectTeach[j] = 1;
                            count++;
                        }
                    }

                    cout<<"Enter marks of student: "<<endl;
                    int mathematics=0,english=0,bangla=0;

                    if(subjectTeach[0]==1)
                    {
                        cout<<"Mathematics Score: "; cin>>mathematics;
                    }

                    if(subjectTeach[1]==1)
                    {
                        cout<<"English Score: "; cin>>english;
                    }

                    if(subjectTeach[2]==1)
                    {
                    cout<<"Bangla Score: "; cin>>bangla;
                    }

                    double avg_marks ;
                    avg_marks= (double) ((bangla+english+mathematics)/count);

                    cout << "Enter total days taught: ";
                    cin >> totalDaysTaught;
                    cout << "Enter total earning: ";
                    cin >> totalEarnings;

                    clsTenObject[i].add_student(id, name, cls, totalDaysTaught,avg_marks, totalEarnings, count,subjectTeach);
                    cout<<endl;
                    }

                }
                if(num<=0)
                {
                    cout<<"Invalid number pressed: "<<endl;
                }
            }
        }

        if(option == 2)
        {
           cout<<"Which Class: 8 , 9  or 10"<<endl;
           cin>>clas;
           if(clas==8)
           {
               cout<<"Which student you want to edit: Give id:"<<endl;
               int edit_id,edit_day;
               cin>>edit_id;
               edit_id-=1;
               cout<<"Enter new number of days you taught: "<<endl;
               cin>>edit_day;
               clsEightObject[edit_id].addDays(edit_day);

               cout<<"Enter new marks of the student:( values must range from (0 to 100) )"<<endl;
               int mathematics=0,bangla=0,english=0;
               bool* subjects=clsEightObject->getSubjects();
               if(subjects[0]==1)
               {
                   cout<<"mathematics new marks: "; cin>>mathematics;
               }
               if(subjects[1]==1)
               {
                   cout<<"English new marks: "; cin>>english;

               }
               if(subjects[2]==1)
               {
                   cout<<"Bangla new marks: "; cin>>bangla;
               }

               int sub_count=clsEightObject[edit_id].getcount();
               double edit_marks;
               edit_marks=(double) ((mathematics+english+bangla)/sub_count);

               clsEightObject[edit_id].addMarks(edit_marks);

           }

           if(clas==9)
           {
               cout<<"Which student you want to edit: Give id:"<<endl;
               int edit_id,edit_day;
               cin>>edit_id;
               edit_id-=1;
               cout<<"Enter new number of days you taught: "<<endl;
               cin>>edit_day;
               clsNineObject[edit_id].addDays(edit_day);

               cout<<"Enter new marks of the student:( values must range from (0 to 100) )"<<endl;
               int mathematics=0,bangla=0,english=0;
               bool* subjects=clsNineObject->getSubjects();
               if(subjects[0]==1)
               {
                   cout<<"mathematics new marks: "; cin>>mathematics;
               }
               if(subjects[1]==1)
               {
                   cout<<"English new marks: "; cin>>english;

               }
               if(subjects[2]==1)
               {
                   cout<<"Bangla new marks: "; cin>>bangla;
               }

               int sub_count=clsNineObject[edit_id].getcount();
               double edit_marks;
               edit_marks=(double) ((mathematics+english+bangla)/sub_count);

               clsNineObject[edit_id].addMarks(edit_marks);

           }

           if(clas==10)
           {
               cout<<"Which student you want to edit: Give id:"<<endl;
               int edit_id,edit_day;
               cin>>edit_id;
               edit_id-=1;
               cout<<"Enter new number of days you taught: "<<endl;
               cin>>edit_day;
               clsTenObject[edit_id].addDays(edit_day);

               cout<<"Enter new marks of the student:( values must range from (0 to 100) )"<<endl;
               int mathematics=0,bangla=0,english=0;
               bool* subjects=clsTenObject->getSubjects();
               if(subjects[0]==1)
               {
                   cout<<"mathematics new marks: "; cin>>mathematics;
               }
               if(subjects[1]==1)
               {
                   cout<<"English new marks: "; cin>>english;

               }
               if(subjects[2]==1)
               {
                   cout<<"Bangla new marks: "; cin>>bangla;
               }

               int sub_count=clsTenObject[edit_id].getcount();
               double edit_marks;
               edit_marks=(double) ((mathematics+english+bangla)/sub_count);

               clsTenObject[edit_id].addMarks(edit_marks);

           }

        }

        if(option == 3)
        {
            cout<<"Which Class: 8 , 9  or 10"<<endl;
            cin>>clas;
            if(clas==8)
            {
                cout<<"Which Student you want to delete: Give Id"<<endl;
                int st_id,st_num;
                cin>>st_id;
                st_id=st_id-1;
                cout<<"Enter total number of studnet in class eight"<<endl;
                cin>>st_num;
                if(st_num<=0)
                {
                    cout<<"No student to delete"<<endl;
                    break;
                }
                if(st_num>0  && st_id!=st_num-1)
                {
                    for(int i=st_id;i<st_num;i++)
                    {
                       clsEightObject[i]=clsEightObject[i+1];
                    }

                }
                if(st_id==st_num-1)
                {
                    clsEightObject[st_id].delete_last_element();
                }
                cout<<"Student Deletetion Succesfull."<<endl;
            }

            if(clas==9)
            {
                cout<<"Which Student you want to delete: Give Id"<<endl;
                int st_id,st_num;
                cin>>st_id;
                st_id=st_id-1;
                cout<<"Enter total number of studnet in class nine"<<endl;
                cin>>st_num;
                if(st_num<=0)
                {
                    cout<<"No student to delete"<<endl;
                    break;
                }
                if(st_num>0  && st_id!=st_num-1)
                {
                    for(int i=st_id;i<st_num;i++)
                    {
                       clsNineObject[i]=clsNineObject[i+1];
                    }

                }
                if(st_id==st_num-1)
                {
                    clsNineObject[st_id].delete_last_element();
                }
                cout<<"Student Deletetion Succesfull."<<endl;
            }

            if(clas==10)
            {
                cout<<"Which Student you want to delete: Give Id"<<endl;
                int st_id,st_num;
                cin>>st_id;
                st_id=st_id-1;
                cout<<"Enter total number of studnet in class Ten"<<endl;
                cin>>st_num;
                if(st_num<=0)
                {
                    cout<<"No student to delete"<<endl;
                    break;
                }
                if(st_num>0  && st_id!=st_num-1)
                {
                    for(int i=st_id;i<st_num;i++)
                    {
                       clsTenObject[i]=clsTenObject[i+1];
                    }

                }
                if(st_id==st_num-1)
                {
                    clsTenObject[st_id].delete_last_element();
                }
                cout<<"Student Deletetion Succesfull."<<endl;
            }
        }

        if (option== 4)
        {
            cout<<"Which Class: 8,9 or 10"<<endl;
            cin>>clas;
            if(clas==8)
            {
                cout<<"Press 1 for full detail of class, Press 2 for individual student"<<endl;
                int st_detail,st_num_cls_eight;
                cin>>st_detail;
                if( st_detail==1 )
                {
                    cout<<"Enter total student number: ";
                    cin>>st_num_cls_eight;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    cout<<"                         Student Details Table (Class Eight)                     "<<endl;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    for(int i=0; i<st_num_cls_eight;i++)
                    {
                        clsEightObject[i].student_detail_cls_eight();
                    }

                }

                if( st_detail == 2 )
                {
                    int st_id;
                    cout<<"Enter Individual student Id: ";
                    cin>>st_id;
                    st_id=st_id-1;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    cout<<"                           Student Detail (Class Eight)                          "<<endl;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    clsEightObject[st_id].student_detail_cls_eight();

                }

            }
            if(clas==9)
            {
                cout<<"Press 1 for full detail of class, Press 2 for individual student"<<endl;
                int st_detail,st_num_cls_nine;
                cin>>st_detail;
                if( st_detail==1 )
                {
                    cout<<"Enter total student number: ";
                    cin>>st_num_cls_nine;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    cout<<"                      Student Details Table (Class Nine)                         "<<endl;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    for(int i=0; i<st_num_cls_nine;i++)
                    {
                        clsNineObject[i].student_detail_cls_nine();
                    }

                }

                if( st_detail == 2 )
                {
                    int st_id;
                    cout<<"Enter Individual student Id: ";
                    cin>>st_id;
                    st_id=st_id-1;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    cout<<"                        Student Detail (Class Nine)                              "<<endl;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    clsNineObject[st_id].student_detail_cls_nine();

                }

            }

            if(clas==10)
            {
                cout<<"Press 1 for full detail of class, Press 2 for individual student"<<endl;
                int st_detail,st_num_cls_ten;
                cin>>st_detail;
                if( st_detail==1 )
                {
                    cout<<"Enter total student number: ";
                    cin>>st_num_cls_ten;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    cout<<"                      Student Details Table (Class 10)                           "<<endl;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    for(int i=0; i<st_num_cls_ten;i++)
                    {
                        clsTenObject[i].student_detail_cls_ten();
                    }

                }

                if( st_detail == 2 )
                {
                    int st_id;
                    cout<<"Enter Individual student Id: ";
                    cin>>st_id;
                    st_id=st_id-1;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    cout<<"                         Student Detail (Class 10)                               "<<endl;
                    cout<<"---------------------------------------------------------------------------------"<<endl;
                    clsTenObject[st_id].student_detail_cls_ten();

                }

            }
        }
        if(option==5)
        {
            int num_eight,num_nine,num_ten;
            int days_taught_cls_eight=0, days_taught_cls_nine=0, days_taught_cls_ten=0;
            int cls_eight_earnings=0, cls_nine_earnings=0, cls_ten_earnings=0;
            double avg_mark_cls_eight=0, avg_mark_cls_nine=0, avg_mark_cls_ten=0;
            cout<<"Enter total students of class eight: ";
            cin>>num_eight;
            for(int i=0;i<num_eight;i++)
            {
                days_taught_cls_eight+=clsEightObject[i].getDaysTaught();

            }

            for(int i=0;i<num_eight;i++)
            {
                cls_eight_earnings+=clsEightObject[i].getEarnings();
            }

             for(int i=0;i<num_eight;i++)
            {
                avg_mark_cls_eight+=clsEightObject[i].getTotalMarks();
            }


            cout<<"Enter total students of class nine: ";
            cin>>num_nine;
            for(int i=0;i<num_nine;i++)
            {
                days_taught_cls_nine+=clsNineObject[i].getDaysTaught();

            }

            for(int i=0;i<num_nine;i++)
            {
                cls_nine_earnings+=clsNineObject[i].getEarnings();
            }

            for(int i=0;i<num_nine;i++)
            {
                avg_mark_cls_nine+=clsNineObject[i].getTotalMarks();
            }

            cout<<"Enter total students of class ten: ";
            cin>>num_ten;
            for(int i=0;i<num_ten;i++)
            {
                days_taught_cls_ten+=clsTenObject[i].getDaysTaught();

            }

            for(int i=0;i<num_ten;i++)
            {
                cls_ten_earnings+=clsTenObject[i].getEarnings();
            }

            for(int i=0;i<num_ten;i++)
            {
                avg_mark_cls_ten+=clsTenObject[i].getTotalMarks();
            }

            int total_days_taught_all_cls =0,total_earning_all_cls=0;
            double total_avg_mark_all_cls=0.0;
            int total_students=num_eight+num_nine+num_ten;
            total_days_taught_all_cls= days_taught_cls_eight+ days_taught_cls_nine+days_taught_cls_ten;
            total_earning_all_cls= cls_eight_earnings +cls_nine_earnings+cls_ten_earnings;
            total_avg_mark_all_cls = (avg_mark_cls_eight+avg_mark_cls_nine+avg_mark_cls_ten)/total_students;



            cout<<"---------------------------------------------------------------------------------"<<endl;
            cout<<"                        Overall Student Detail (Class 8,9,10)                    "<<endl;
            cout<<"---------------------------------------------------------------------------------"<<endl;

            cout<<"Total days taught across all classes: "<<total_days_taught_all_cls<<endl;
            cout<<"Total earning across all classes: "<<total_earning_all_cls<<endl;
            cout<<"Average marks of all students: "<<total_avg_mark_all_cls<<endl;
            cout<<"Total days taught--( for class eight ) : "<<days_taught_cls_eight<<endl;
            cout<<"Total earnings--( for class eight ) : "<<cls_eight_earnings<<endl;
            cout<<"Total days taught--( for class nine ) : "<<days_taught_cls_nine<<endl;
            cout<<"Total earnings--( for class nine ) : "<<cls_nine_earnings<<endl;
            cout<<"Total days taught--( for class Ten ) : "<<days_taught_cls_ten<<endl;
            cout<<"Total earnings--( for class Ten ) : "<<cls_ten_earnings<<endl;

        }

       cout<<"enter option: ";

    }
}
