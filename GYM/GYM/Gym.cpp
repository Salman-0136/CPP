#include "Gym.h"
Gym::Gym()
{
	name = " ";
	user_name = " ";
	password = " ";
}
Gym::Gym(string name)
{
	this->name = name;
}
Gym::~Gym()
{
	
}
void Gym::setname()
{
	cout << "Enter the name: ";
	cin >> name;
}
string Gym::getname()
{
	return name;
}
void Gym::display()
{
	cout << "Gym Class is called" << endl;
	cout << endl;
}


Admin::Admin()
{
	admin_id = "admin123";
	admin_password = "12345";
	membership = 0;
}
Admin::Admin(string name, int membership) :Gym(name)
{
	this->membership = membership;
}
Admin::~Admin()
{
	
}
bool Admin::admin_login()
{
a:
	cout << "Enter the ID to login as Admin: ";
	cin >> user_name;
	if (user_name == admin_id)
	{
		cout << "Enter the password to login as Admin: ";
		cin >> password;
		if (password == admin_password)
		{
			cout << "Login Succesful" << endl;
			return true;
		}
		else
		{
			int i = 0;
			while (i <= 10)
			{
				cout << "Entered password is incorrect" << endl;
				cout << "Re-entre the password: ";
				cin >> password;
				if (password == admin_password)
				{
					cout << "Password is correct" << endl;
					return true;
					break;
				}
			}
		}
	}
	else
	{
		cout << "ID is not founded" << endl;
		goto a;
	}
}
void Admin::setusername()
{
	admin_id = user_name;
}
void Admin::setpassword()
{
	admin_password = password;
}
void Admin::setmembership()
{
	int fee;
	int input;
	cout << "Press-1 for Gold Membership(Rs-4000)" << endl;
	cout << "Press-2 for Silver Membership(Rs-2000)" << endl;
	cout << "Enter the option for Membership: ";
	cin >> input;
	if (input == 1)
	{
		fee = 4000;
		membership = fee;
	}
	else if (input == 2)
	{
		fee = 2000;
		membership = fee;
	}
	else
	{
		cout << "Invalid Option" << endl;
	}
}
int Admin::getmembership()
{
	return membership;
}
void Admin::display()
{
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@                                                 @@" << endl;
	cout << "@@      Press-1 to Add Member                      @@" << endl;
	cout << "@@      Press-2 to Search for Particular Data      @@" << endl;
	cout << "@@      Press-3 to Update Data of Member           @@" << endl;
	cout << "@@      Press-4 to Display all the Data            @@" << endl;
	cout << "@@      Press-5 to Exit                            @@" << endl;
	cout << "@@                                                 @@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << endl;
}


Trainer::Trainer()
{
	phone_no = " ";
	id = 0;
	trainer_fees = 1200;
}
Trainer::Trainer(string name, int membership, string phone_no, int id) :Admin(name, membership)
{
	this->phone_no = phone_no;
	this->id = id;
}
Trainer::~Trainer()
{
	
}
void Trainer::settrainerfees()
{
	trainer_fees = 1200;
}
int Trainer::gettrainerfees()
{
	return trainer_fees;
}
void Trainer::display()
{
	cout << "Trainer Class is called" << endl;
	cout << endl;
}


User::User()
{
	gym_fees = 0;
}
User::User(string name, int membership, string phone_no, int id, int gym_fees) :Trainer(name, membership, phone_no, id)
{
	this->gym_fees = gym_fees;
}
User::~User()
{
	
}
void User::setphone_no()
{
	cout << "Enter the phone_no: ";
	cin >> phone_no;
}
string User::getphone_no()
{
	return phone_no;
}
void User::setgym_fees()
{
	gym_fees = 0;
	trainer_fees = 1200;
	gym_fees = 3000 + trainer_fees + getmembership();
}
int User::getgym_fees()
{
	return gym_fees;
}
void User::setid()
{
	cout << "Enter the id: ";
	cin >> id;
}
int User::getid()
{
	return id;
}
void User::display()
{
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@                                        @@" << endl;
	cout << "@@      Press-1 to Join Gym               @@" << endl;
	cout << "@@      Press-2 to Edit your Profile      @@" << endl;;
	cout << "@@      Press-3 to Quit Gym               @@" << endl;
	cout << "@@                                        @@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << endl;
}
void User::show()
{
	cout << "Name of the person is: " << getname() << endl;
	cout << "Membership of the person is: " << getmembership() << endl;
	cout << "Phone Number of the person is: " << getphone_no() << endl;
	cout << "Id of the person is: " << getid() << endl;
	cout << "Fees of the person is: " << getgym_fees() << endl;
	cout << endl;
}
