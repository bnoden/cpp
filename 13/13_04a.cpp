/*
4. Personal Information Class 
Design  a  class  that  holds  the  following  personal  data:  name,  address,  age,  and  phone  
number.  Write  appropriate  accessor  and  mutator  functions.  Demonstrate  the  class  by  
writing a program that creates three instances of it. One instance should hold your infor-
mation, and the other two should hold your friends’ or family members’ information. 
*/

#include <iostream>
#include <string>

using namespace std;

class Contact {
private:
	static int count;
	string Name;
	string Address;
	int Age;
	string Phone;

public:
	static int Count();
	void setName(string name) {Name = name;}
	void setAddress(string address) {Address = address;}
	void setAge(int age) {Age = age;}
	void setPhone(string phone) {Phone = phone;}

	string getName() const {return Name;}
	string getAddress() const {return Address;}
	int getAge() const {return Age;}
	string getPhone() const {return Phone;}

	void showContactInfo();

	Contact() {count++;}
	Contact(string, string, string, int);
};

int Contact::count = 0;

int Contact::Count() {return count;}

Contact::Contact(string name, string phone, string address, int age) {
	Name = name;
	Phone = phone;
	Address = address;
	Age = age;
	count++;
}

void Contact::showContactInfo() {
	cout << "Name: " << getName() << '\t' << "#: " << getPhone() << endl;
	cout << "Address: " << getAddress() << '\t' << "Age: " << getAge() << endl;
}

void main() {
	Contact bnoden("bnoden", "9728444444", "1111 Oak St", 74);
	Contact gf("Christine", "2145554679", "12345 Love Dr", 27);
	Contact d;

	d.setAddress("1234 Oak St");
	d.setPhone("9725554613");
	d.setAge(45);
	d.setName("Don");

	bnoden.showContactInfo();
	bnoden.setAge(33);
	cout << endl;
	bnoden.showContactInfo();
	cout << endl;
	gf.showContactInfo();
	cout << endl;
	d.showContactInfo();
	cout << endl;

	cout << "Number of contacts: " << Contact::Count() << endl;

	return; 
}

