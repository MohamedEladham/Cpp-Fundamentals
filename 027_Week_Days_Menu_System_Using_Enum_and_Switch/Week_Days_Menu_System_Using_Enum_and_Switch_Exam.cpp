#include <iostream>
using namespace std;

enum enWeekDays { Saturday = 1, Sunday = 2, Monday = 3, Tuesday = 4, Wednesday = 5, Thursday = 6, Friday = 7 };

void ShaowWeekDaysMenue()
{
	cout << "\n\n ** Week Days ** \n";
	cout << "---------------------------\n";
	cout << "(1) Saturday \n";
	cout << "(2) Sunday \n";
	cout << "(3) Monday \n";
	cout << "(4) Tuesday \n";
	cout << "(5) Wednesday \n";
	cout << "(6) Thursday \n";
	cout << "(7) Friday \n";
	cout << "---------------------------\n";
	cout << "Chooce A Day: ";
}

enWeekDays ReadADay()
{
	enWeekDays WeekDays;
	short D;
	cin >> D;
	WeekDays = enWeekDays(D);
	return WeekDays;
}

string DisplayADay(enWeekDays WeekDays)
{
	switch (WeekDays)
	{
	case enWeekDays::Friday:
		return "Friday";

	case enWeekDays::Monday:
		return "Monday";

	case enWeekDays::Saturday:
		return "SaturDay";

	case enWeekDays::Sunday:
		return "SunDay";

	case enWeekDays::Thursday:
		return "ThursDay";

	case enWeekDays::Tuesday:
		return "Tuesday";

	case enWeekDays::Wednesday:
		return "Wednesday";

	default:
		return "The Day Is Invalid";
	}
}

int main()
{
	ShaowWeekDaysMenue();
	cout << "\n The Day IS: " << DisplayADay(ReadADay()) << endl;
	return 0;
}