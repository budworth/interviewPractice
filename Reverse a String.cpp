#include <iostream>
#include <string>


using namespace std;

string reverse(string str)
{

	for (int i = 0,  j = str.length() - 1; i < j; i++, j--)
	{
		char temp;

		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	return str;
}

int main()
{
	string str = "abcde";

	str = reverse(str);

	cout << str << endl;

}