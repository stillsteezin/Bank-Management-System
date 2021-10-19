#include <iostream>
# include "Hashtable.h"
# include "BST_Tree.h"
# include "admin.h"
# include "staff.h"
# include "customer.h"
using namespace std;

void startProgram()
{
	Hashtable H;
	BST_Tree T;
	H.starthash();
	T.load_Server();
}
int main()
{
	void startProgram();

	int condition=0;
	while (condition != 4)
	{
		cout << "YOU want to login as:\t\t\t\t\t\t" << endl << endl;
		cout << "1-ADMIN" << endl;
		cout << "2-STAFF" << endl;
		cout << "3-CUSTOMER" << endl;
		cin >> condition;
		if (condition == 1)
		{
			admin();
		}
		if (condition == 2)
		{

		}
		if (condition == 3)
		{
			customer();
		}
		if (condition == 4)
		{
			exit(1);
		}
	}

	
	system("pause");
	return 0;
}
