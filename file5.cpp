#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    
    float marks;

    public:
    int rollNo;
    void inputDetail(){
        cout<<"Enter student name:";
        getline(cin>>ws,name);
        cout<<"Enter roll number:";
        cin>>rollNo;
        cout<<"Enter Marks:";
        cin>>marks;
    }

    void displayDetail()const{
        cout<<"\n----Student Detail----\n";
        cout<<"Name :"<<name<<endl;
        cout<<"Roll No.:"<<rollNo<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};

int main(){
    student s;
    s.inputDetail();
    s.rollNo = 100;
    s.displayDetail();
    return 0;
}