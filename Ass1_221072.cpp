#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class person
{
    private:
    char name[40],dob[15],bdg[15];
    char add[70],telephone[15],l_no[10];
    public:
    static int count;            //Static as it will be common for all instance
    friend class student;      //friend class to access it private members
    person()
    {
        char * name=new char[40];
        char *dob=new char[80];
        char *bdg=new char[15];
        strcpy(add,"");
        strcpy(telephone,"");
        strcpy(l_no,"");
    }
    static void recordcount()
    {
        cout<<"\n Total no of records : "<<count<<endl;
    }
};

class student
{
    private:
      char cls[70],div[15];

    public:
     student()
    {
        strcpy(cls,"");
        strcpy(div,"");
    }

    void getdata(person *obj);
    void displaydata(person *obj);
    friend class person;
};

int person::count=0;

void student::getdata(person *obj)
{
    cout<<"\n Name of the student : ";
    cin>>obj->name;
    cout<<"\n Enter date of birth (dd/mm/YYYY): ";
    cin>>obj->dob;
    cout<<"\n Enter blood group : ";
    cin>>obj->bdg;
    cout<<"\n Enter Branch: ";
    cin>>this->cls;
    cout<<"\n Enter Division: ";
    cin>>this->div;
    cout<<"\n Enter Contact number : ";
    cin>>obj->telephone;
    cout<<"\n Enter Address : ";
    cin>>obj->add;
    cout<<"\n Enter License number: ";
    cin>>obj->l_no;
    obj->count++;
}
inline void student::displaydata(person *obj)
{
    cout<<"Name: "<<obj->name<<endl;
    cout<<"Date of birth: "<<obj->dob<<endl;
    cout<<"Blood Group: "<<obj->bdg<<endl;
    cout<<"Branch: "<<this->cls<<endl;
    cout<<"Division: "<<this->div<<endl;
    cout<<"Contact Details: "<<obj->telephone<<endl;
    cout<<"Address: "<<obj->add<<endl;
    cout<<"License Numnber: "<<obj->l_no<<endl;
}
int main()
{
    student *p1[30];
    person *p2[30];
    int n=0, c, i;
    do
    {
        cout<<"\n 1.Insert Data:  \n 2.Display Data:\n 3.Exit";
        cout<<"\n Enter your choice: ";
        cin>>c;
        switch(c)
        {
        case 1:
             cout<<"\n Enter Data: ";
             cout<<"\n";
             p1[n]=new student;
             p2[n]=new person;
             p1[n]->getdata(p2[n]);
             n++;
             person::recordcount();
        break;
        case 2:
            for(i=0;i<n;i++)
            {
            p1[i]->displaydata(p2[i]);      //inline function will be copied here by the compiler
            }
            person::recordcount();
            break;
        case 3:
            break;
      default:
            cout<<"\n Enter Valid Option!!\n";
            break;
        }
        }while(c!=3);
    delete *p1;             //dynamic memory de-allocation
    delete *p2;
    return 0;
}

