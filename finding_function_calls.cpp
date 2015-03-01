#include<iostream>
#include<regex>
#include<string>
using namespace std;

int main()
{
	regex regex_call("[A-Za-z][0-9A-Za-z_]*\\(([A-Za-z][0-9A-Za-z_]*:[A-Za-z][0-9A-Za-z_]*)([,][A-Za-z][0-9A-Za-z_]*:[A-Za-z][0-9A-Za-z_]*)*\\)");
	smatch match;
	string input;
	cin>>input;
	if(regex_match(input,regex_call))
	{
		cout<<"MATCHED\n";
	}
	else
	{
		cout<<"NOT MATCHED\n";
	}
	return 0;
}
