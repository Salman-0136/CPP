#include<iostream>
#include<string>
using namespace std;
class Gym
{
protected:
	string user_name;
	string password;
public:
	string name;
	Gym();
	Gym(string);
	~Gym();
	void setname();
	string getname();
	virtual void display();

};
class Admin :public Gym
{
protected:
	string admin_id;
	string admin_password;
	int membership;
public:
	Admin();
	Admin(string, int);
	~Admin();
	bool admin_login();
	void setusername();
	void setpassword();
	void setmembership();
	int getmembership();
	void display();
};


class Trainer :public Admin
{
protected:
	string phone_no;
	int id;
	int trainer_fees;
public:
	Trainer();
	Trainer(string, int, string, int);
	~Trainer();
	void settrainerfees();
	int gettrainerfees();
	void display();
};


class User :public Trainer
{
private:
	int gym_fees;
public:
	User();
	User(string, int, string, int, int);
	~User();
	void setphone_no();
	string getphone_no();
	void setgym_fees();
	int getgym_fees();
	void setid();
	int getid();
	void display();
	void show();
};