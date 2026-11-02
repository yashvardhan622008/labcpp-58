#include<iostream>
using namespace std;
class student
{
    int rollno;
    float marks;
    public:
    int getdata(int a,float b);
    int putdata()
    {
        cout<<"\nroll no = "<<rollno<<"\n";
        cout<<"cgpa = "<<marks<<"\n";
        return 0;
    }
};

int student ::getdata(int a,float b)
{
    rollno=a;
    marks=b;
    return 0;
}

int main()
{
    student x;
    cout<<"student name : harish chavan"<<"\n";
    x.getdata(55,6.7);
    x.putdata();
    student y;
    cout<<"\nstudent name : kushal bhatt"<<"\n";
    y.getdata(54,8.3);
    y.putdata();
    return 0;
}