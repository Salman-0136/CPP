#include<iostream>
#include<string>
#include "Gym.h"
using namespace std;
int main()
{
	int size = 0;
	string key;
	Admin a1;
	Trainer t1;
	User u1, u2("Salman", 1, "0300-1119876", 1, 8200), u3("Nouman", 2, "0345-4032710", 2, 6200), u4("Eatizaz", 2, "0323-4057430", 3, 6200), u5("Faraz", 1, "0333-4558912", 4, 8200), u6, u7;
	Gym* g1;
	g1 = &t1;
	g1->display();

	int option;
	cout << "Welcome to the Gym Managment System" << endl;
	cout << endl;
	cout << "Please select the Mode: " << endl;
	cout << "Press-1 for Admin Mode" << endl;
	cout << "Press-2 for User Mode" << endl;
	cout << endl;
s:
	cout << "Enter your Option: ";
	cin >> option;
	if (option == 1)
	{
		cout << "You are in Admin Mode" << endl;
		if (u1.admin_login() == true)
		{
			g1 = &a1;
			g1->display();
			int admin_option = 0;;
			while (admin_option <= 5)
			{
			a:
				cout << "Enter the option from above: ";
				cin >> admin_option;
				if (admin_option == 1)
				{
					u1.setname();
					u1.setphone_no();
					u1.setid();
					u1.setmembership();
					u1.setgym_fees();
					cout << endl;
					cout << "Name of the person is: " << u1.getname() << endl;
					cout << "Phone Number of the person is: " << u1.getphone_no() << endl;
					cout << "Id of the person is: " << u1.getid() << endl;
					cout << "Membership of the person is: " << u1.getmembership() << endl;
					cout << "Fees of the person is: " << u1.getgym_fees() << endl;
					cout << endl;
					u6.setname();
					u6.setphone_no();
					u6.setid();
					u6.setmembership();
					u6.setgym_fees();
					cout << endl;
					cout << "Name of the person is: " << u6.getname() << endl;
					cout << "Phone Number of the person is: " << u6.getphone_no() << endl;
					cout << "Id of the person is: " << u6.getid() << endl;
					cout << "Membership of the person is: " << u6.getmembership() << endl;
					cout << "Fees of the person is: " << u6.getgym_fees() << endl;
					cout << endl;
					u7.setname();
					u7.setphone_no();
					u7.setid();
					u7.setmembership();
					u7.setgym_fees();
					cout << endl;
					cout << "Name of the person is: " << u7.getname() << endl;
					cout << "Phone Number of the person is: " << u7.getphone_no() << endl;
					cout << "Id of the person is: " << u7.getid() << endl;
					cout << "Membership of the person is: " << u7.getmembership() << endl;
					cout << "Fees of the person is: " << u7.getgym_fees() << endl;
					cout << endl;
				}
				else if (admin_option == 2)
				{
					cout << "Enter the name of the member to be found: ";
					cin >> key;
					for (int i = 0; i <= 10; i++)
					{
						if ((key == u1.name) || (key == u2.name) || (key == u3.name) || (key == u4.name) || (key == u5.name) || (key == u6.name) || (key == u7.name))
						{
							cout << "Member/User is founded" << endl;
							break;
						}
						else
						{
							cout << "Member/User is not Founded" << endl;
							break;
						}
						continue;
					}
				}
				else if (admin_option == 3)
				{
					int user;
				n:
					cout << "For which user you want to update information: ";
					cin >> user;
					if (user == 1)
					{
						int press;
					m:
						cout << "Select what you want to update" << endl;
						cout << "Press-1 to Update Name" << endl;
						cout << "Press-2 to Update Membership" << endl;
						cout << "Press-3 to Update Phone Number" << endl;
						cout << "Press-4 to Update Id" << endl;
						cout << "Press-5 to Update Gym Fees" << endl;
						cout << "Enter the option from above: ";
						cin >> press;
						cout << endl;
						if (press == 1)
						{
							u1.setname();
							cout << endl;
						}
						else if (press == 2)
						{
							u1.setmembership();
							cout << endl;
						}
						else if (press == 3)
						{
							u1.setphone_no();
							cout << endl;
						}
						else if (press == 4)
						{
							u1.setid();
							cout << endl;
						}
						else
						{
							cout << "Invalid Option" << endl;
							goto m;
						}
					}
					else if (user == 2)
					{
						int press;
					g:
						cout << "Select what you want to update" << endl;
						cout << "Press-1 to Update Name" << endl;
						cout << "Press-2 to Update Membership" << endl;
						cout << "Press-3 to Update Phone Number" << endl;
						cout << "Press-4 to Update Id" << endl;
						cout << "Press-5 to Update Gym Fees" << endl;
						cout << "Enter the option from above: ";
						cin >> press;
						if (press == 1)
						{
							u2.setname();
							cout << endl;
						}
						else if (press == 2)
						{
							u2.setmembership();
							cout << endl;
						}
						else if (press == 3)
						{
							u2.setphone_no();
							cout << endl;
						}
						else if (press == 4)
						{
							u2.setid();
							cout << endl;
						}
						else
						{
							cout << "Invalid Option" << endl;
							goto g;
						}
					}
					else if (user == 3)
					{
						int press;
					h:
						cout << "Select what you want to update" << endl;
						cout << "Press-1 to Update Name" << endl;
						cout << "Press-2 to Update Membership" << endl;
						cout << "Press-3 to Update Phone Number" << endl;
						cout << "Press-4 to Update Id" << endl;
						cout << "Press-5 to Update Gym Fees" << endl;
						cout << "Enter the option from above: ";
						cin >> press;
						if (press == 1)
						{
							u3.setname();
							cout << endl;
						}
						else if (press == 2)
						{
							u3.setmembership();
							cout << endl;
						}
						else if (press == 3)
						{
							u3.setphone_no();
							cout << endl;
						}
						else if (press == 4)
						{
							u3.setid();
							cout << endl;
						}
						else
						{
							cout << "Invalid Option" << endl;
							goto h;
						}
					}
					else if (user == 4)
					{
						int press;
					i:
						cout << "Select what you want to update" << endl;
						cout << "Press-1 to Update Name" << endl;
						cout << "Press-2 to Update Membership" << endl;
						cout << "Press-3 to Update Phone Number" << endl;
						cout << "Press-4 to Update Id" << endl;
						cout << "Press-5 to Update Gym Fees" << endl;
						cout << "Enter the option from above: ";
						cin >> press;
						if (press == 1)
						{
							u4.setname();
							cout << endl;
						}
						else if (press == 2)
						{
							u4.setmembership();
							cout << endl;
						}
						else if (press == 3)
						{
							u4.setphone_no();
							cout << endl;
						}
						else if (press == 4)
						{
							u4.setid();
							cout << endl;
						}
						else
						{
							cout << "Invalid Option" << endl;
							goto i;
						}
					}
					else if (user == 5)
					{
						int press;
					j:
						cout << "Select what you want to update" << endl;
						cout << "Press-1 to Update Name" << endl;
						cout << "Press-2 to Update Membership" << endl;
						cout << "Press-3 to Update Phone Number" << endl;
						cout << "Press-4 to Update Id" << endl;
						cout << "Press-5 to Update Gym Fees" << endl;
						cout << "Enter the option from above: ";
						cin >> press;
						if (press == 1)
						{
							u5.setname();
							cout << endl;
						}
						else if (press == 2)
						{
							u5.setmembership();
							cout << endl;
						}
						else if (press == 3)
						{
							u5.setphone_no();
							cout << endl;
						}
						else if (press == 4)
						{
							u5.setid();
							cout << endl;
						}
						else
						{
							cout << "Invalid Option" << endl;
							goto j;
						}
					}
					else if (user == 6)
					{
						int press;
					k:
						cout << "Select what you want to update" << endl;
						cout << "Press-1 to Update Name" << endl;
						cout << "Press-2 to Update Membership" << endl;
						cout << "Press-3 to Update Phone Number" << endl;
						cout << "Press-4 to Update Id" << endl;
						cout << "Press-5 to Update Gym Fees" << endl;
						cout << "Enter the option from above: ";
						cin >> press;
						if (press == 1)
						{
							u6.setname();
							cout << endl;
						}
						else if (press == 2)
						{
							u6.setmembership();
							cout << endl;
						}
						else if (press == 3)
						{
							u6.setphone_no();
							cout << endl;
						}
						else if (press == 4)
						{
							u6.setid();
							cout << endl;
						}
						else
						{
							cout << "Invalid Option" << endl;
							goto k;
						}
					}
					else if (user == 7)
					{
						int press;
					l:
						cout << "Select what you want to update" << endl;
						cout << "Press-1 to Update Name" << endl;
						cout << "Press-2 to Update Membership" << endl;
						cout << "Press-3 to Update Phone Number" << endl;
						cout << "Press-4 to Update Id" << endl;
						cout << "Press-5 to Update Gym Fees" << endl;
						cout << "Enter the option from above: ";
						cin >> press;
						if (press == 1)
						{
							u7.setname();
							cout << endl;
						}
						else if (press == 2)
						{
							u7.setmembership();
							cout << endl;
						}
						else if (press == 3)
						{
							u7.setphone_no();
							cout << endl;
						}
						else if (press == 4)
						{
							u7.setid();
							cout << endl;
						}
						else
						{
							cout << "Invalid Option" << endl;
							goto l;
						}
					}
					else
					{
						cout << "Invalid Option" << endl;
						goto n;
					}
				}
				else if (admin_option == 4)
				{
					u1.show();
					u2.show();
					u3.show();
					u4.show();
					u5.show();
					u6.show();
					u7.show();
				}
				else if (admin_option == 5)
				{
					return 0;
					break;
				}
				else
				{
					cout << "Invalid Choice" << endl;
					goto a;
				}
			}
		}
		cout << endl;
	}
	else if (option == 2)
	{
		cout << "You are in User Mode" << endl;
		g1 = &u1;
		g1->display();
		int user_option = 0;
		while (user_option <= 3)
		{
		b:
			cout << "Enter the option from above: ";
			cin >> user_option;
			if (user_option == 1)
			{
				u1.setname();
				u1.setphone_no();
				u1.setid();
				u1.setmembership();
				u1.setgym_fees();
				cout << endl;
				cout << "Name of the person is: " << u1.getname() << endl;
				cout << "Phone Number of the person is: " << u1.getphone_no() << endl;
				cout << "Id of the person is: " << u1.getid() << endl;
				cout << "Membership of the person is: " << u1.getmembership() << endl;
				cout << "Fees of the person is: " << u1.getgym_fees() << endl;
				cout << endl;
			}
			if (user_option == 2)
			{
				int press;
			o:
				cout << "Select what you want to update" << endl;
				cout << "Press-1 to Update Name" << endl;
				cout << "Press-2 to Update Membership" << endl;
				cout << "Press-3 to Update Phone Number" << endl;
				cout << "Press-4 to Update Id" << endl;
				cout << "Enter the option from above: ";
				cin >> press;
				cout << endl;
				if (press == 1)
				{
					u1.setname();
					u1.show();
					cout << endl;
				}
				else if (press == 2)
				{
					u1.setmembership();
					u1.show();
					cout << endl;
				}
				else if (press == 3)
				{
					u1.setphone_no();
					u1.show();
					cout << endl;
				}
				else if (press == 4)
				{
					u1.setid();
					u1.show();
					cout << endl;
				}
				else
				{
					cout << "Invalid Option" << endl;
					goto o;
				}
			}
			if (user_option == 3)
			{
				cout << "Thank You" << endl;
				cout << endl;
				break;
			}
			else if (user_option > 3)
			{
				cout << "Invalid Choice" << endl;
				goto b;
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Your option is incorrect" << endl;
		goto s;

	}

	return 0;
}
