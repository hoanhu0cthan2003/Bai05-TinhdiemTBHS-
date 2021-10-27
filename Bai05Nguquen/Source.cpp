#include <iostream>
#include <string>

using namespace std;

int main()
{
	short number{ 20 };
	cout << "So luong hs: ";
	cin.ignore(100, '\n');
	string name[20];
	short age[20];
	string klass[20];;
	for (int i = 1; i <= number; i++)
	{
		cout << "Nhap ten hoc sinh " << i << ": ";
		getline(cin, name[i]);
		cin.ignore(100, '\n');
		cout << "Nhap tuoi cua hoc sinh " << i << ": ";
		cin.ignore(100, '\n');
		cout << "Nhap lop cua hoc sinh " << i << ": ";
		getline(cin, klass[i]);

		int x, y, z{};
		cout << "Diem Toan: ";
		cin >> x;
		cout << "Diem Van: ";
		cin >> y;
		cout << "Diem Anh: ";
		cin >> z;

		cout << "Diem Trung Binh: ";
		cout << (x + y + z) / 3;
		cout << '\n';

		if ((x + y + z) / 3 <= 6) { cout << "Hoc Sinh yeu" << endl; }
		else {
			if ((x + y + z) / 3 <= 8) { cout << "Hoc sinh kha" << endl; }
			else { cout << "Hoc sinh gioi" << endl; }
		}
	}
	return 0;
}