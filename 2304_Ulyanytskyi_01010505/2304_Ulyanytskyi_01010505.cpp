#include <iostream>

using namespace std;

static int get_user_value() {
	int value;
	cout << "Type number of month: ";
	cin >> value;
	return value;
}

static void print_result(const int num, const string msg) {
	cout << num << " is " << msg;
}

int main()
{
    const int user_value = get_user_value();
	const string error_msg = "the specified number it is not possible to match the month";
	const string months[12] = { 
		"January", "February", "March", "April", 
		"May", "June", "July", "August", "September", 
		"October", "November", "December"
	};

	switch (user_value) 
	{
	case 1:
		print_result(user_value, months[0]);
		break;
	case 2:
		print_result(user_value, months[1]);
		break;
	case 3:
		print_result(user_value, months[2]);
		break;
	case 4:
		print_result(user_value, months[3]);
		break;
	case 5:
		print_result(user_value, months[4]);
		break;
	case 6:
		print_result(user_value, months[5]);
		break;
	case 7:
		print_result(user_value, months[6]);
		break;
	case 8:
		print_result(user_value, months[7]);
		break;
	case 9:
		print_result(user_value, months[8]);
		break;
	case 10:
		print_result(user_value, months[9]);
		break;
	case 11:
		print_result(user_value, months[10]);
		break;
	case 12:
		print_result(user_value, months[11]);
		break;
	default:
		print_result(user_value, error_msg);
		break;
	}

    return 0;
}