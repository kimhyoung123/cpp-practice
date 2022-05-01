//산업경영공학과12210605김형중
#include <iostream>
#include <string>
using namespace std;

string a;

void first_funtion()
{
	
	
	
	if (isalpha(a[0]))
	{
		cout << "문자는 입력할 수 없음!\n";
	}
	else
	{
		cout << "1, 2, 0을 입력하시오\n";
	}

			
	
	
}

void second_funtion()
{
	string n;
	cout << "1. 홀짝판단을 선택했습니다\n";

	while (true)
	{
		cout << "정수를 입력하시오 > ";
		cin >> n;

		if (isalpha(n[0]))
		{
			cout << "문자는 입력할 수 없음!\n";
		}
		else
		{
			int i = stoi(n);
			if (i % 2 == 0)
				cout << "even value\n";
			else
				cout << "odd value\n";
			break;
		}
	}

	cout << "*************************\n";
	
}

void third_funtion()
{
	string n;
	cout << "2. 세제곱판단을 선택했습니다\n";

	while (true)
	{
		cout << "정수를 입력하시오 > ";
		cin >> n;

		if (isalpha(n[0]))
		{
			cout << "문자는 입력할 수 없음!\n";
		}
		else
		{
			int i = stoi(n);
			cout << "결과는 " << i * i * i << " 입니다\n";
			break;
		}
	}

	cout << "*************************\n";
	
}

void main() {
	
	
	while(a != "0")
	{
		
		cout << "***메뉴를 선택하시오***" << endl << endl << "1. 홀짝판단" << endl << "2. 세제곱계산" << endl << "0. 종료" << endl << endl;
		while (a != "0")
		{
			cout << "정수를 입력하시오 > ";
			cin >> a;

			if (a == "1")
			{
				second_funtion();
				break;
			}
			else if (a == "2")
			{
				third_funtion();
				break;
			}
			else if (a == "0")
			{
				cout << "0. 종료합니다\n";
			
				
			}
			else
			{
				first_funtion();

			}
		}
	}


}
