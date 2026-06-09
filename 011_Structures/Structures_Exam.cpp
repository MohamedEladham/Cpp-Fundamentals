#include <iostream>
using namespace std;

struct St_CutomerAddress
{
    string Country;
    string City;
    string street;
    string BuildingNumber;
};

struct St_CutomerAccounts
{
    string FacebookAccount;
    string GmailAccount;
    string InstagramAccount;
};

struct St_CutomerPhones
{
    string PhoneNumber1;
    string PhoneNumber2;
};

struct St_MaritalStatus
{
    string Religion;
    char Gender;
    bool Married;
};

struct St_CutomerInformations
{
    string FullName;
    short Age;
    float MonthlySalary;

    St_MaritalStatus MaritalStatus;
    St_CutomerPhones CutomerPhones;
    St_CutomerAccounts CutomerAccounts;
    St_CutomerAddress CutomerAddress;

};


int main()
{
    St_CutomerInformations CustmoerInformation1;

    CustmoerInformation1.FullName = "Mohamed Eladham";
    CustmoerInformation1.Age = 27;
    CustmoerInformation1.MaritalStatus.Gender = 'M';
    CustmoerInformation1.MaritalStatus.Married = true;
    CustmoerInformation1.MaritalStatus.Religion = "Muslem";
    CustmoerInformation1.CutomerAccounts.FacebookAccount = "Mohamed12255@Facebook";
    CustmoerInformation1.CutomerAccounts.GmailAccount = "Mohamed12255@gmail.com";
    CustmoerInformation1.CutomerAccounts.InstagramAccount = "Mohamed12255@Instagram";
    CustmoerInformation1.CutomerPhones.PhoneNumber1 = "5465465";
    CustmoerInformation1.CutomerPhones.PhoneNumber2 = "45645645";
    CustmoerInformation1.CutomerAddress.Country = "Egypt";
    CustmoerInformation1.CutomerAddress.City = "Mansoura";
    CustmoerInformation1.CutomerAddress.street = "KL 5411";
    CustmoerInformation1.CutomerAddress.BuildingNumber = "Building 512";
    CustmoerInformation1.MonthlySalary = 5000;


    cout << "\n\n****************************\n";
    cout << "Name: " << CustmoerInformation1.FullName << "\n";
    cout << "Age: " << CustmoerInformation1.Age << "\n";
    cout << "Gneder: " << CustmoerInformation1.MaritalStatus.Gender << "\n";
    cout << "Married: " << CustmoerInformation1.MaritalStatus.Married << "\n";
    cout << "Religion: " << CustmoerInformation1.MaritalStatus.Religion << "\n";
    cout << "Facebook Account: " << CustmoerInformation1.CutomerAccounts.FacebookAccount << "\n";
    cout << "Gmail Account: " << CustmoerInformation1.CutomerAccounts.GmailAccount << "\n";
    cout << "Instagram Account: " << CustmoerInformation1.CutomerAccounts.InstagramAccount << "\n";
    cout << "Phone Number1: " << CustmoerInformation1.CutomerPhones.PhoneNumber1 << "\n";
    cout << "Phone Number2: " << CustmoerInformation1.CutomerPhones.PhoneNumber2 << "\n";
    cout << "Country: " << CustmoerInformation1.CutomerAddress.Country << "\n";
    cout << "City: " << CustmoerInformation1.CutomerAddress.City << "\n";
    cout << "Street: " << CustmoerInformation1.CutomerAddress.street << "\n";
    cout << "Building Number: " << CustmoerInformation1.CutomerAddress.BuildingNumber << "\n";
    cout << "Monthly Salary: " << CustmoerInformation1.MonthlySalary << "\n";
    cout << "****************************\n\n";


    return 0;
}