#include<iostream>
using namespace std;

class Student{
    private:
        int studentID;
        string firstName;
        string lastName;
        string address;
        string address2;
        string city;
        string state;
        int zipcode;


    public:
        // Default constructors in C++ do not have a return type, nor parameters.
        // Default constructors must have the same name as the class in both Java
        // and C++.
       Student(){
            studentID = 0;
            firstName = "" ;
            lastName = "" ;
            address = "" ;
            address2 = "" ;
            city = "" ;
            state = "" ;
            zipcode= 0 ;
        }

        //Accessorts are used to return the values of each of the private attributes of a class
        int getStudentID(){
            return this->studentID;
        }
        string getFirstName(){
            return this->firstName;
        }
        string getLastName(){
            return this->lastName;
        }
        string getAddress(){
            return this->address;
        }
        string getAddress2(){
            return this->address2;
        }
        string getCity(){
            return this->city;
        }
        string getState(){
            return this->state;
        }
        int getZipcode(){
            return this->zipcode;
        }
      
        //Mutator of the class will change the value of a class or object.
        void setStudentID(int studentID)
        {
            this->studentID = studentID;
        }
        void setFirstName(string firstName)
        {
            this->firstName = firstName;
        }
        void setLastName(string lastname)
        {
            this->lastName = lastName;
        }
        void setAddress(string address)
        {
            this->address = address;
        }
        void setAddress2(string address2)
        {
            this->address2 = address2;
        }
        void setCity(string city)
        {
            this->city = city;
        }
        void setState(string state)
        {
            this->state = state;
        }
        void setZipcode(int zipcode)
        {
            this->zipcode = zipcode;
        }
};

int main()
{
    //Declaring a list of students into an array
    Student MyClass[10];

    //Local variables needed for each student
    int studentID= 0;
    string firstName="";
    string lastName="";
    string address="";
    string address2="";
    string city ="";
    string state ="";
    int zipcode =0;
    //Iterate through the array of students, and set the value of each student
    for (int i=0; i<10; i++){
        cout << "Please enter the student id for student number " << i+1 << " : ";
        cin >> studentID;
        MyClass[i].setStudentID(studentID);

        cout << "Please enter the first name for student number: " << i+1 << " : ";
        cin >> firstName;
        MyClass[i].setFirstName(firstName);

        cout << "Please enter the lastName for student number: " << i+1 << " : ";
        cin >> lastName;
        MyClass[i].setLastName(lastName);

        cout << "Please enter the address for student number " << i+1 << " : ";
        cin >> address;
        MyClass[i].setAddress(address);

        cout << "Please enter the address2 for student number: " << i+1 << " : ";
        cin >> address2;
        MyClass[i].setAddress2(address2);
  
        cout << "Please enter the city for student number: " << i+1 << " : ";
        cin >> city;
        MyClass[i].setCity(city);

        cout << "Please enter the state for student number: " << i+1 << " : ";
        cin >> state;
        MyClass[i].setState(state);

        cout << "Please enter the zipcode for student number: " << i+1 << " : ";
        cin >> zipcode;
        MyClass[i].setZipcode(zipcode);

        cout<<""<<endl;
    }

    
    
    //Iterate through the array of students and print the values that were set
    for (int i=0; i<10; i++){
        cout << "The student ID of this student is: "<< MyClass[i].getStudentID() << endl;
        cout <<"The first name of this student is: " << MyClass[i].getFirstName() << endl;
        cout << "The last name of this student is: "<< MyClass[i].getLastName() << endl;
        cout << "The address of this student is: "<< MyClass[i].getAddress() << endl;
        cout <<"The address2 of this student is: " << MyClass[i].getAddress2() << endl;
        cout << "The city of this student is: "<< MyClass[i].getCity() << endl;
        cout <<"The state of this student is: " << MyClass[i].getState() << endl;
        cout << "The zipcode of this student is: "<< MyClass[i].getZipcode() << endl;
        cout << "" << endl;
    }
}