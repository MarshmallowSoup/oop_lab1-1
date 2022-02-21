////////////////////////////////////////
// lab1_1.cpp - main file
#include "Time.cpp"
#include <iostream>
using namespace std;

Time makeTime(int x, int y)
{
	Time k;
	if (!k.init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return k;
}
int main()
{
	Time z;
	z.read();
	z.display();
	cout << "Total minutes: " << z.minutes() << endl;
	int x, y;
	cout << " Hours = "; cin >> x;
	cout << " Minutes = "; cin >> y;
	Time k = makeTime(x, y);
	k.display();
	int result = k.minutes();
	cout << "Total minutes: " << result << endl;
	cin.get();
	return 0;
}