#pragma once
#include "CMySmartPointer.h"
#include "constants.h"
#include "CTab.h"
#include "CTable.h"

void Test1() {
	std::cout << std::endl << "Test1 (op=) " << std::endl << std::endl;
	CTab c_tab;
	CTab c_other;
	/*initialize c_tab, c_other*/
	c_tab = std::move(c_other);
};

void Test2() {
	std::cout << std::endl << "Test2 (op=&&) " << std::endl << std::endl;
	CTab c_tab;
	CTab c_other;
	/*initialize c_tab, c_other*/
	c_tab = c_other;
};

void Test3() {
	std::cout << std::endl << "Test3 CTable copy" << std::endl << std::endl;
	CTable tab1("original", 5);
	CTable tab2;

	//filling tab1
	//tab1.bSetNewSize(5);
	//tab1.vSetName("original");
	for (int i = 0; i < tab1.getLength(); i++)
	{
		tab1.setContent(i, i + 1);
	};
	tab2 = tab1;
	
}

void Test4() {
	std::cout << std::endl << "Test4 CTable move" << std::endl << std::endl;
	CTable tab1("original", 5);
	CTable tab2;

	//filling tab1
	for (int i = 0; i < tab1.getLength(); i++)
	{
		tab1.setContent(i, i + 1);
	};
	tab2 = std::move(tab1);
}

void Test5() {
	CTab* tab1 = new CTab();
	CMySmartPointer<CTab> sm1(tab1);
	CMySmartPointer<CTab> sm2(sm1);

};