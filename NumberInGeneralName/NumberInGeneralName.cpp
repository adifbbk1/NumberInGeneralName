// NumberInGeneralName.cpp
//Did this program in 45 mins

#include "stdafx.h"
#include<iostream>
using namespace std;

char hundred(long int v)
{
	//100-999
	if (v >= 100)
	{
		cout << hundred(v / 100) << "Hundred ";
	}
	
	//10-19
	if ((v / 10) % 10 == 1)
	{
		switch (v % 10)
		{
		case 1: cout << "Eleven";
			break;
		case 2: cout << "Twelve";
			break;
		case 3: cout << "Thirteen";
			break;
		case 4: cout << "Fourteen";
			break;
		case 5: cout << "Fifteen";
			break;
		case 6: cout << "Sixteen";
			break;
		case 7: cout << "Seventeen";
			break;
		case 8: cout << "Eighteen";
			break;
		case 9: cout << "Nineteen";
			break;
		case 0: cout << "Ten";
			break;
		}
		goto exitfun;
	}

	//20-99
	else if ((v / 10) % 10 < 10 && (v / 10) % 10 > 1)
	{
		switch ((v / 10) % 10)
		{
		case 2: cout << "Twenty";
			break;
		case 3: cout << "Thirty";
			break;
		case 4: cout << "Fourty";
			break;
		case 5: cout << "Fifty";
			break;
		case 6: cout << "Sixty";
			break;
		case 7: cout << "Seventy";
			break;
		case 8: cout << "Eighty";
			break;
		case 9: cout << "Ninety";
			break;
		}
		if (v % 10 != 0)
			cout << "-";//ex: Twenty-Five
	}

	//1-9
	switch (v % 10)
	{
	case 0: break;
	case 1: cout << "One";
		break;
	case 2: cout << "Two";
		break;
	case 3: cout << "Three";
		break;
	case 4: cout << "Four";
		break;
	case 5: cout << "Five";
		break;
	case 6: cout << "Six";
		break;
	case 7: cout << "Seven";
		break;
	case 8: cout << "Eight";
		break;
	case 9: cout << "Nine";
		break;
	}

	exitfun:
	return ' ';//No need to give spaces and error while calling cout<<hundred(v) is gone
}

int main()
{
	cout << "Enter a number below 100 cr: ";
	long int n, h, t, l, c;
	cin >> n;
	h = n % 1000;
	t = (n / 1000) % 100;
	l = (n / 100000) % 100;
	c = (n / 10000000) % 100;
	if (c)
		cout << hundred(c) << "Crore ";
	if (l)
		cout << hundred(l) << "Lakh ";
	if (t)
		cout << hundred(t) << "Thousand ";
	if (h)
		cout << hundred(h);
	else cout << "Zero";
	cout << endl;
	system("pause");
    return 0;
}

