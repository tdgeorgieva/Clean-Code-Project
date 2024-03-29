#include "stdafx.h"
#include <iostream>
#include "Tables.h"
#include "String.h"
using namespace std;


int main()
{
	Tables t;
	t.load("people.txt");
	t.showTables(std::cout);
	t.addColumn(String("people"),String("lastname"), String("String"));
	t.describe(String("people"));
	t.save(String("people"));
	t.print(String("people"), std::cout);
	t.rename(String("people"), String("people2"));
	t.print(String("people2"), std::cout);
	t.count(String("people2"), 0, String("gosho"));
	t.select(0, String("gosho"), String("people2"));
	return 0;
}
