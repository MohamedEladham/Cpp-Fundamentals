#include <iostream>
using namespace std;

enum enColor {
	Black = 0,
	Blue = 1,
	Green = 2,
	Aqua = 3,
	Red = 4,
	Purple = 5,
	Yellow = 6,
	White = 7,
	Gray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightAqua = 11,
	LightRed = 12,
	LightPurple = 13,
	LightYellow = 14,
	BrightWhite = 15
};


int main()
{
	cout << "\n\n************************\n";
	cout << "Choice Color.\n";

	cout << "(0) Black \n";
	cout << "(1) Blue \n";
	cout << "(2) Green \n";
	cout << "(3) Aqua \n";
	cout << "(4) Red \n";
	cout << "(5) Purple \n";
	cout << "(6) Yellow \n";
	cout << "(7) White \n";
	cout << "(8) Gray \n";
	cout << "(9) Light Blue \n";
	cout << "(10) Light Green \n";
	cout << "(11) Light Aqua \n";
	cout << "(12) Light Red \n";
	cout << "(13) Light Purple \n";
	cout << "(14) Light Yellow \n";
	cout << "(15) Bright White \n";
	cout << "Please Choice One Color: ";

	enColor Color;
	int C;
	cin >> C;
	Color = (enColor)C;

	switch (Color) {

	case enColor::Black:
		system("Color 0F");
		break;
	case enColor::Blue:
		system("Color 1F");
		break;
	case enColor::Green:
		system("Color 2F");
		break;
	case enColor::Aqua:
		system("Color 3F");
		break;
	case enColor::Red:
		system("Color 4F");
		break;
	case enColor::Purple:
		system("Color 5F");
		break;
	case enColor::Yellow:
		system("Color 6F");
		break;
	case enColor::White:
		system("Color 7F");
		break;
	case enColor::Gray:
		system("Color 8F");
		break;
	case enColor::LightBlue:
		system("Color 9F");
		break;
	case enColor::LightGreen:
		system("Color AF");
		break;
	case enColor::LightAqua:
		system("Color BF");
		break;
	case enColor::LightRed:
		system("Color CF");
		break;
	case enColor::LightPurple:
		system("Color DF");
		break;
	case enColor::LightYellow:
		system("Color EF");
		break;
	case enColor::BrightWhite:
		system("Color FF");
		break;
	default:
		system("Color 4F");
		break;
	}

	return 0;
}