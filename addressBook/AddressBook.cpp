#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

//1. The Meun List
void showMenu()
{
	cout<<"*****************************"<<endl;
	cout << "***** 1. Add Contact    *****" << endl;
	cout << "***** 2. Show Contact   *****" << endl;
	cout << "***** 3. Delete Contact *****" << endl;
	cout << "***** 4. Search Contact ***** " << endl;
	cout << "***** 5. Modify Contact *****" << endl;
	cout << "***** 6. Clear Contact  *****" << endl;
	cout << "***** 0. Exit System    *****" << endl;
	cout << "*****************************" << endl;
}

// 2. Contact structure
struct Contact
{
	string m_Name; 
	int m_gender;
	int m_age;
	string m_phone;
	string m_address;
};
// 3. List structure
struct AddressList
{
	struct Contact contactArray[MAX];   // Array to save all the contacts
	int m_Size;                         // Contact number
};


// 4. Add a contact
void addPerson(AddressList* addlist) 
{
	if (addlist->m_Size == MAX)
	{
		cout << "The list is full!" << endl;
		return; 
	}
	else
	{
		//name
		string name;
		cout << "Input name: " << endl;
		cin >> name;
		addlist->contactArray[addlist->m_Size].m_Name = name;

		//gender
		cout << "Input gender: 1 for female; 0 for male. " << endl;
		int gender = 0;
		while (true)
		{
			cin >> gender;
			if (gender == 0 || gender == 1)
			{
				addlist->contactArray[addlist->m_Size].m_gender = gender;
				break;
			}
			else {
				cout << "Wrong. Please input again";
			}
		}

		//age
		cout << "Input age: " << endl;
		int age = 0;
		cin >> age;
		addlist->contactArray[addlist->m_Size].m_age = age;

		//phone
		cout << "Input phone number： " << endl;
		string phone = "";
		cin >> phone;
		addlist->contactArray[addlist->m_Size].m_phone = phone;

		//address
		cout << "Input address: " << endl;
		string address;
		cin >> address;
		addlist->contactArray[addlist->m_Size].m_address = address;

		addlist->m_Size++;

		cout << "Added!" << endl;

		//system("pause");
		//system("cls");
	}
}

//5. Show a contact
void showPerson(AddressList* addlist)
{
	if (addlist->m_Size == 0)
	{
		cout << "No records here." << endl;
	}
	else
	{
		for (int i = 0; i < addlist->m_Size; i++)
		{
			cout << "Name: " << addlist->contactArray[i].m_Name << "\t";
			cout << "Gender: " << (addlist->contactArray[i].m_gender == 1 ? "female" : "male") <<"\t";
			cout << "Age: " << addlist->contactArray[i].m_age << "\t";
			cout << "Phone: " << addlist->contactArray[i].m_phone << "\t";
			cout << "Address: " << addlist->contactArray[i].m_address << endl;
		}
	}
	//system("pause");
	//system("cls");
}

//6. Delete a contact
int isExist(AddressList* addlist, string name)
{
	for (int i = 0; i < addlist->m_Size; i++)
	{
		if (addlist->contactArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void deletePerson(AddressList* addlist)
{
	cout << "Input the one you want to delete: " << endl;
	string name;
	cin >> name;
	int ret = isExist(addlist, name);
	if (ret != -1)
	{
		for (int i = ret; i < addlist->m_Size; i++)
		{
			addlist->contactArray[i] = addlist->contactArray[i + 1];
		}

		addlist->m_Size--;
		cout << "Deleted!" << endl;
	}
	else
	{
		cout << "No this one." << endl;
	}
	//system("pause");
	//system("cls");
}


// 7. Search contact
void findPerson(AddressList* addlist)
{
	cout << "Input this one you want to search: " << endl;
	string name;
	cin >> name;
	int ret = isExist(addlist, name);
	if (ret != -1)
	{
		cout << "Name: " << addlist->contactArray[ret].m_Name << "\t";
		cout << "Gender: " << addlist->contactArray[ret].m_gender << "\t";
		cout << "Age: " << addlist->contactArray[ret].m_age << "\t";
		cout << "Phone: " << addlist->contactArray[ret].m_phone << "\t";
		cout << "Address: " << addlist->contactArray[ret].m_address << endl;
	}
	else
	{
		cout << "No this one. " << endl;
	}
	//system("pause");
	//system("cls");
}

// 8 . Modify contact
void modifyPerson(AddressList* addlist)
{
	cout << "input the one you want to modify: " << endl;
	string name;
	cin >> name;
	int ret = isExist(addlist, name);

	if (ret != -1)
	{
		//Name
		string name;
		cout << "Input name: " << endl;
		cin >> name;
		addlist->contactArray[ret].m_Name = name;

		cout << "Input gender: 1 for female; 0 for male. " << endl;
		//Gender
		int gender = 0;
		while (true)
		{
			cin >> gender;
			if (gender == 1 || gender == 0)
			{
				addlist->contactArray[ret].m_gender = gender;
				break;
			}
			cout << "Input again";
		}

		//Age
		cout << "Input age: " << endl;
		int age = 0;
		cin >> age;
		addlist->contactArray[ret].m_age = age;

		//phone
		cout << "Input phone number: " << endl;
		string phone = "";
		cin >> phone;
		addlist->contactArray[ret].m_phone = phone;

		//Address
		cout << "Input address: " << endl;
		string address;
		cin >> address;
		addlist->contactArray[ret].m_address = address;
		cout << "Modified" << endl;
	}
	else
	{
		cout << "No this one." << endl;
	}
	//system("pause");
	//system("cls");
}

//
void cleanPerson(AddressList* addlist)
{
	addlist->m_Size = 0;

	cout << "Cleared" << endl;

	//system("pause");
	//system("cls");
}

int main()
{
	//create and initialize a list
	struct AddressList addlist;
	addlist.m_Size = 0;

	int select = 0;
	while (true)
	{
		showMenu();

		cin >> select; 

		switch (select)
		{
		case 1: 
			addPerson(&addlist);   //Add
			break;
		case 2: 
			showPerson(&addlist);  //Show
			break;
		case 3:  
			deletePerson(&addlist);     //Delete
			break;
		case 4: 
			findPerson(&addlist);       //Search
			break;
		case 5: 
			modifyPerson(&addlist);    //Modify
			break; 
		case 6: 
			cleanPerson(&addlist);    //Clear
			break;
		case 0:   //Exit
			cout << "GoodBye!" << endl;
			system("pause");
			return 0;
			break;
		defaut:
			break;
		}
	}
	system("Pause");
	return 0;
}

