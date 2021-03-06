// NumberInGeneralName.cpp
//Done by SJ ADITYA
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
	long long int n;
	int h, t1, l, c, t2, m, b, a, k, t, q, neel, p, s;
	char ch;
	cin >> n;
	//From ones to quintillions assignment
	h = n % 1000;
	t1 = (n / 1000) % 100;
	t2 = (n / 1000) % 1000;
	l = (n / 100000) % 100;
	m = (n / 1000000) % 1000;
	c = (n / 10000000) % 100;
	b = (n / 1000000000) % 1000;
	a = (n / 1000000000) % 100;
	t = (n / 1000000000000) % 1000;
	k = (n / 100000000000) % 100;
	q = (n / 1000000000000000) % 1000;
	neel = (n / 10000000000000) % 100;
	p = (n / 1000000000000000) % 100;
	s = (n / 100000000000000000) % 100;

	{
		if (s)
			cout << hundred(s) << "Shankh ";
		if (p)
			cout << hundred(p) << "Padma ";
		if (neel)
			cout << hundred(neel) << "Neel ";
		if (k)
			cout << hundred(k) << "Kharab ";
		if (a)
			cout << hundred(a) << "Arab ";
		if (c)
			cout << hundred(c) << "Crore ";
		if (l)
			cout << hundred(l) << "Lakh ";
		if (t1)
			cout << hundred(t1) << "Thousand ";
		if (h)
			cout << hundred(h);
		if (n == 0) cout << "Zero";
		cout << "\n\n";

		if (q)
			cout << hundred(q) << "Quintillions ";
		if (t)
			cout << hundred(t) << "Trillions ";
		if (b)
			cout << hundred(b) << "Billions ";
		if (m)
			cout << hundred(m) << "Millions ";
		if (t2)
			cout << hundred(t2) << "Thousands ";
		if (h)
			cout << hundred(h);
		if (n == 0) cout << "Zero";
		cout << endl;
	}
	system("pause");
	return 0;
}

