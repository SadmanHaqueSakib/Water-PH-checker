#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <ctime>
using namespace std;
bool MenuLoop = true;
string name ("***");
string surname ("***");
string street ("***");
string area ("***");
string city ("***");
string postcode ("***");
string tel ("00");
string WaterName;
string WaterQuality;
int house (00);
int startDate(00);
int startMonth (00);
int startYear(00);
int endDate(00);
int endMonth(00);
int endYear(00);
int userNumber(00);
string Water ("***");
int WaterDate(00);
int WaterMonth(00);
int WaterYear(00);
double WaterPH(00.00);
void resetuserDetails()
{
	name =     "***";
     surname =  "***";
     house = 00;
     street = "***";
     area = "***";
     city = "***";
     postcode = "***";
     startDate  = 00;
     startMonth = 00;
     startYear  = 00;
     endDate  = 00;
     endMonth = 00;
     endYear  = 00;
     tel = "00";
     WaterQuality = "*****";
     userNumber = 00;
     Water = "***";
     WaterDate = 00;
     WaterMonth = 00;
     WaterYear = 00;
     WaterPH = 00;
};
void ChoiceForm()
{
	system ("cls");
	cout << "\t\t\t  Water Details\n";
	cout << "\t________________________________________________________________\n\n";
	cout << "\tWater Details Form   \t";
	cout << "\t  user: ";
	cout << name << " ";
	cout << surname << "\n";
	cout << "\n\t\t        Area name: ";
    	cout << WaterName;
	cout << "\n\t\t         Water PH: ";
    	cout << WaterPH;
    	cout << "\n\t\t    Water Quality: ";
    	cout << WaterQuality;
    	cout << "\n\t________________________________________________________________\n\n";
    	cout << "\n";
};
void ChoiceScript()
{
	int WaterChoice;
	char confirmationSave;
	ChoiceForm();
	cout << "Please select an country:\n\n";
	cout << "1 - Bangladesh\n";
	cout << "2 - USA\n";
	cout << "3 - UK\n";
	cout << "4 - Australia\n";
	cout << "5 - Japan\n";
	cout << "6 - India\n";
	cout << "7 - Pakistan\n";
	cout << "8 - Spain\n>";
	cin >> WaterChoice;
		if (WaterChoice == 1)
	{
		WaterName="Bangladesh";
	}
	if (WaterChoice == 2)
	{
		WaterName="USA";
	}
	if (WaterChoice == 3)
	{
		WaterName= "UK";
	}
	if (WaterChoice == 4)
	{
		WaterName ="Australia";
	}
	if (WaterChoice == 5)
	{
		WaterName = "Japan";
	}
	if (WaterChoice == 6)
	{
		WaterName = "India";
	}
	if (WaterChoice == 7)
	{
		Water = "Pakisthan";
	}
	if (WaterChoice == 8)
	{
		WaterName = "Spain";
	}
 	ChoiceForm();
 	cout << "\tPlease Enter the PH in your water:";
 	cin>> WaterPH;
	if (WaterPH < 7)
	{
		WaterQuality = "Acitic Water";
	}
	else if (WaterPH == 7)
	{
		WaterQuality = "Normal Water";
	}
    else
	{
		WaterQuality = "Basic Water";
	}
	while (cin.fail() || WaterPH>14 || WaterPH<=0)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid PH (1-14): ";
     	cin >> WaterPH;
	}
	ChoiceForm();
	cout << "\tPlease enter Choice Date(DD): ";
	cin >> WaterDate;
	while (cin.fail() ||   WaterDate > 31 || WaterDate < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid date (1-31): ";
     	cin >> WaterDate;
    	}
    	ChoiceForm();
    	cout << "\tPlease enter Choice Month(MM): ";
    	cin >> WaterMonth;
    	while (cin.fail() || WaterMonth > 12 || WaterMonth < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid month (1-12): ";
     	cin >> WaterMonth;
	}
    	ChoiceForm();
    	cout << "\tPlease enter Choice Year(YY): ";
    	cin >> WaterYear;
    	while (cin.fail() || WaterYear > 99 || WaterYear < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid Year (1-99): ";
     	cin >> WaterYear;
	}
    	ChoiceForm();
    	cout << "Is this information correct? <Y/N>";
    	cin >> confirmationSave;
    	if (confirmationSave == 'y' || confirmationSave == 'Y')
	{
    	string saveChoiceName;
    	stringstream out;
    	cout << name << " " << surname << ".Choice";
    	saveChoiceName = out.str();
    	ofstream myfile;
    	myfile.open (saveChoiceName.c_str(), ios::out);
    	myfile << name << "\n";
    	myfile << surname << "\n";
    	myfile << WaterPH << "\n";
    	myfile << WaterQuality << "\n";
    	myfile << WaterDate << "\n";
    	myfile << WaterMonth << "\n";
    	myfile << WaterYear << "\n";
    	myfile.close();
    	ChoiceForm();
    	cout << "\tChoice have been saved\n\n\t";
    	};
    	system ("pause");
};
void userForm()
{
	system ("cls");
	cout << "\t\t\t      user Details\n";
	cout << "\t	________________________________________________________________\n\n";
	cout << "\tuser Form  ";
	cout << "\t  user: ";
	cout << name << " ";
	cout << surname << "\n";
	cout << "\t\t\t";
	cout << "\t Address: ";
	cout << house << " ";
	cout << street << "\n";
	cout << "\t\t";
	cout << "\t\t          ";
	cout << area << "\n";
	cout << "\t\t\t\t          ";
	cout << city << "\n";
	cout << "\t\t\t\t          ";
	cout << postcode << "\n";
	cout << "\t\t\t   Telephone: ";
	cout << tel;
     cout << "\t\t\t      Start date: ";
	cout << startDate << "/";
	cout << startMonth << "/";
	cout << startYear;
	cout << "\tEnd date: ";
	cout << endDate << "/";
	cout << endMonth << "/";
	cout << endYear << "\n";
	cout << "\t________________________________________________________________\n\n";
	cout << "\t\t       user number: ";
	cout << userNumber;
	cout << "\n\t________________________________________________________________\n\n";
	cout << "\n";
};
void savefile()
{
	string saveFileName;
	stringstream out;
	out << name << " " << surname;
	saveFileName = out.str();
	ofstream myfile;
	myfile.open (saveFileName.c_str(), ios::out);
	myfile << name << "\n";
    myfile << surname << "\n";
    myfile << house << "\n";
    myfile << street << "\n";
    myfile << area << "\n";
    myfile << city << "\n";
    myfile << postcode << "\n";
    myfile << tel << "\n";
    myfile << startDate << "\n";
    myfile << startMonth << "\n";
    myfile << startYear << "\n";
    myfile << endDate << "\n";
    myfile << endMonth << "\n";
    myfile << endYear << "\n";
    myfile << userNumber << "\n";
    myfile.close();
    userForm();
    cout << "\tDetails have been saved\n\n\t";
    system ("pause");
    }

void userDetails()
{

	char saveYN;
 	userForm();
	cout << "\tPlease enter customers first name: ";
	cin >> ws;
	getline (cin, name);
	userForm();
	cout << "\tPlease enter customers surname: ";
	cin >> surname;
	userForm();
	cout << "\tPlease enter customers house number: ";
	cin >> house;
     while (cin.fail()||  house < 1)
	{
		cin.clear();
		cin.ignore();
		cout << "\n\tPlease enter a valid house number: ";
		cin >> house;
	}
	userForm();
	cout << "\tPlease enter customers street: ";
	cin >> ws;
	getline (cin, street);
	userForm();
	cout << "\tPlease enter customer area: ";
	getline (cin, area);
	userForm();
	cout << "\tPlease enter customer city: ";
	getline (cin, city);
	userForm();
	cout << "\tPlease enter customer postcode: ";
	cin >> ws;
	getline (cin, postcode);
	userForm();
	cout << "\tPlease enter Telephone Number: ";
	getline (cin, tel);
	while (cin.fail())
	{
     	cin.clear();
     	cin.ignore();
     	cout << "\tPlease enter Telephone Number: ";
     	cin >> tel;
	}
	userForm();
	cout << "\tPlease enter user Start Date(DD): ";
	cin >> startDate;
	while (cin.fail() || startDate > 31 || startDate < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid date (1-31): ";
     	cin >> startDate;
	}
	userForm();
	cout << "\tPlease enter user Start Month(MM): ";
	cin >> startMonth;
	while (cin.fail() || startMonth > 12 || startMonth < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid month (1-12): ";
     	cin >> startMonth;
	}
	userForm();
	cout << "\tPlease enter user Start Year(YY): ";
	cin >> startYear;
	while (cin.fail() || startYear > 99 || startYear < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid Year (1-99): ";
     	cin >> startYear;
	}
	userForm();
	cout << "\tPlease enter user End Date(DD): ";
	cin >> endDate;
	while (cin.fail() || endDate > 31 || endDate < 1){
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid date (1-31): ";
     	cin >> endDate;
	}
	userForm();
	cout << "\tPlease enter user End Month(MM): ";
	cin >> endMonth;
	while (cin.fail() || endMonth > 12 || endMonth < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid month (1-12): ";
     	cin >> endMonth;
	}
	userForm();
	cout << "\tPlease enter user End Year(YY): ";
	cin >> endYear;
	while (cin.fail() || endYear > 99 || endYear < 1)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid year (1-99): ";
     	cin >> endYear;
	}
	userForm();
	cout << "\tEnter 6 Digit user card number: ";
	cin >> userNumber;
	while (cin.fail() || userNumber < 100000 || userNumber > 999999)
	{
     	cin.clear(); cin.ignore();
     	cout << "\n\tPlease enter a valid user card number (6 Digits): ";
     	cin >> userNumber;
	}
	userForm();
	cout << "\tSave these details to a file? <Y/N> ";
	cin >> saveYN;
	if (saveYN == 'y' || saveYN == 'Y')
	{
     	savefile();
	}
};
void createChoice()
{

    char confirm;
    system ("cls");
    char fileChoice [100];
    ifstream file_ptr;
    cout << "\n\t\t\t\tCreate a Choice\n\n";
    system ("dir/b *.");
    cout << "\n\n\tPlease type the name of the user OR ";
    cout << "type x to return to main menu: ";
    cin.ignore();
    gets (fileChoice);
    if (fileChoice[0]  != 'x')
    {
 		file_ptr.open(fileChoice,ios::in);
    		while(!file_ptr)
        	{
        		cout << "user does not exist\n";
        		gets (fileChoice);
        		file_ptr.open(fileChoice,ios::in);
        	}
        	getline(file_ptr, name);
        	getline(file_ptr, surname);
        	file_ptr >> house;
        	getline(file_ptr, street);
        	getline(file_ptr, street);
        	getline(file_ptr, area);
        	getline(file_ptr, city);
        	getline(file_ptr, postcode);
        	getline(file_ptr, tel);
        	file_ptr >> startDate>>startMonth>>startYear>>endDate>>endMonth>>endYear>>userNumber;
		userForm();
     	file_ptr.close();
		cout << "\n\tCreate Choice for this user? <Y/N>";
    		cin >> confirm;
    		if (confirm == 'y' || confirm == 'Y')
		{
 			ChoiceScript();
        	}
    	};
};

void openFile()
{

	char confirm;
	system ("cls");
	char fileChoice [100];
	ifstream file_ptr;
	cout << "\n\t\t\t\tCreate a Choice\n\n";
	system ("dir/b *.");
	cout << "\n\n\tPlease type the name of the user OR ";
	cout << "type x to return to main menu: ";
	cin.ignore();
	gets (fileChoice);
    if (fileChoice[0]  != 'x')
    {
 		file_ptr.open(fileChoice,ios::in);
    		while(!file_ptr)
        	{
        		cout << "user does not exist\n";
        		gets (fileChoice);
        		file_ptr.open(fileChoice,ios::in);
        	}
     	getline(file_ptr, name);
     	getline(file_ptr, surname);
     	getline(file_ptr, Water);
     	file_ptr >> WaterDate;
     	file_ptr >> WaterMonth;
     	file_ptr >> WaterYear;
     	ChoiceForm();
     	file_ptr.close();
     	system ("pause");
	}
}
void CountryList()
{
	system ("cls");
	cout << "\t\tDifferent country's Water Examples->\n\n";
	cout << "\t\t\t\tWater Quality\n\t";
	cout << "\t------->  |  Acitic Water  |  Normal Water |  Basic Water";
	cout << "\n\n\tBangladesh.......   \t->6.50    \t\t\t-->8.50";
	cout << "\n\n\tUSA..............   \t->6.50    \t\t\t-->8.50";
	cout << "\n\n\tUK...............   \t\t    ->7(Pure Water)";
	cout << "\n\n\tAustralia........   \t->6.30" ;
	cout << "\n\n\tJapan............   \t->3.90" ;
	cout << "\n\n\tIndia............   \t->6.50    \t\t\t-->7.50";
	cout << "\n\n\tPakistan.........   \t->5.80-6.2";
	cout << "\n\n\tSpain............   \t\t\t\t\t->7.2-8";
	cout << "\n\n\n\t";
system ("pause");
};
void exit()
{
	MenuLoop = false;
};
void mainMenu()
{
	int menuchoice;
	system ("cls");


	cout << "\n\n\n\t\t\t\t***************************\n";
	cout <<       "\t\t\t\t**Water Management System**\n";
	cout <<       "\t\t\t\t********************-Sadman\n";
	cout <<       "\n\n\t\t\t\n";
	cout << "\t\t\t\t1 - I want to register myself as a user\n\n";
	cout << "\t\t\t\t2 - I want to give info about my water example\n\n";
	cout << "\t\t\t\t3 - Show Choices\n\n";
	cout << "\t\t\t\t4 - I want to see some Country's water examples'\n\n";
	cout << "\t\t\t\t5 - Exit\n\n\n";
	cout << "\tPlease choose an option: ";
	cin >> menuchoice;
	while (cin.fail())
	{	cin.clear();
     	cin.ignore();
     	cout << "\n\t\tPlease enter a valid number:";
		cin >> menuchoice;
	};
	switch (menuchoice)
	{
     	case 1:
          	userDetails();
          	break;
     	case 2:
          	createChoice();
          	break;
     	case 3:
          	openFile();
          	break;
        case 4 :
          	CountryList();
          	break;
		case 5:
          	exit();
         	break;
     	default:
     	cout << "\n\tPlease enter a correct menu choice\n\n\t";
     	system ("pause");
	};
};
void password()
{
	system("color f1");
	string pass;
	int passCount = 0;
	cout << "\n\n\n\t\t\t\t******************\n";
	cout <<       "\t\t\t\t***Say My Name!***\n";
	cout <<       "\t\t\t\t******************\n";
	cout <<       "\n\n\t\t\t\t>";
	cin  >> pass;

    while (pass != "sadman")
    {
        passCount ++;
        cout << "\t\t\t\tYou're wrong!\n";
        if (passCount >= 3)
        {
                cout << "\n\t\t\t\tTimes up, kiddo!";
                exit(0);
        };
        cout << "\t\t\t\tSay Again:\n\t\t\t\t>";
        cin >> pass;

        };
    cout << "\n\t\t\t\tYou Goddam Right!\n\t\t\t\tPress any key to continue...";
    cin.ignore();
    cin.get();
};
int main()
{
	password();
	while (MenuLoop == true)
	{
		system("color f5");
		mainMenu();
	}
	return 0;
}
