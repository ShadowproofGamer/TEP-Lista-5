#pragma once
#define DEF_TAB_SIZE 10
#include <iostream>
class CTab
{
public:
	CTab() {
		pi_tab = new int[DEF_TAB_SIZE]; 
		i_size = DEF_TAB_SIZE; 
		std::cout << "DEF " << std::endl;
	}
	CTab(const CTab& cOther);
	CTab(CTab&& cOther);
	CTab operator=(const CTab& cOther);
	~CTab();
	bool bSetSize(int iNewSize);
	int iGetSize() { return(i_size); }
	CTab operator=(CTab&& cOther);
private:
	void v_copy(const CTab& cOther);
	int* pi_tab;
	int i_size;

	//
	CTab cCreateTab()
	{
		CTab c_result;
		c_result.bSetSize(5);
		return(std::move(c_result));
	}//CTab cCreateTab()
	int i_ms_test()
	{
		CTab c_tab = cCreateTab();
		/*DO STH WITH c_tab*/
	}//int i_ms_test() 
	int i_ignore_result()
	{
		cCreateTab();
		/*DO STH WITH */
	}//int i_ignore_result() 
	//


};//class CTab