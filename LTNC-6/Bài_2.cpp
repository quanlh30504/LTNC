#include <iostream>
#include <sstream>
#include<string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.

*/
string change(int x)
{
    return to_string(x);
}
class Student
{
  public:
        void set_age(int age)
        {
            Age = age;
        }
        void set_standard(int standard)
        {
            Standard = standard;
        }
        void set_first_name(string first_name)
        {
            First_name = first_name;
        }
        void set_last_name(string last_name)
        {
            Last_name = last_name;
        }
        int get_age()
        {
            return Age;
        }
        string get_last_name(){ return Last_name;}
        string get_first_name() {return First_name;}
        int get_standard() {return Standard;}
        string to_string()
        {
            string s = change(Age)+","+First_name+","+Last_name+","+change(Standard);
            return s;
        }
  
    private:
        int Age;
        int Standard;
        string First_name, Last_name;
        
};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
