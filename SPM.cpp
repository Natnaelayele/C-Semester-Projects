#include<iostream>
#include<conio.h>
using namespace std;

struct Items       //Structure
{
	string name;
	double code;
	double price;
	double discount;
	string shelf_no;
};
void menu();  // Declearing Menu Function
/*all items at below decleared sd scope variable
so we can use in all functions
*/
typedef struct Items Items;

int total=15;

Items shelf[33];

Items shelf_store[]={{"Ketchup",1001,14.6,10,"B45"},{"Milk",1002,24,20,"A14"},
					 {"Sandwitch",1003,21,7.10,"B78"},{"Dinner Rolls",1004,14.6,10,"B10"},
					 {"Egg",1005,8.9,0,"C88"},{"Tortillas",1006,40,2,"B36"},
					 {"Cheese",1007,19.6,0,"C44"},{"Yogurt",1008,22,5,"B00"},
					 {"Beff",1009,110,0,"B77"},{"Lunch Meat",1010,78.6,10,"A33"},
					 {"Soap",1011,10.6,5,"A01"},{"Bagels",1012,89.45,10,"C87"},
					 {"Poultry",1013,29,15,"C03"},{"Spaghetti Sauce",1014,140.6,10,"B63"},{"vegetables",1015,40,5,"A50"}};

Items *shelf_store_ptr=&shelf_store[total];
Items *shelf_ptr=shelf;
int ch;
void add(Items shelf[])
{
	system("cls");
	cout<<"\n\n\t\t Add New Product\n";
	cout<<"\n How Many Product You Want to Add ?\n\n";
	cin>>ch;
	for(int i;i<ch;i++)
	{
	cout<<"\n\n Name : ";
	cin>>shelf[i].name;
	cout<<"\n\n Product Code : ";
	cin>>shelf[i].code;
	cout<<"\n\n Price : ";
	cin>>shelf[i].price;
	cout<<"\n\n Discount in % : ";
	cin>>shelf[i].discount;
	cout<<"\n\n Shelf Number: ";
	cin>>shelf[i].shelf_no;
	}
	cout<<"\n\n\t\t Recorde Inserted Successfully....";
}
void update()
{
	system("cls");
	int choice;
	int code;
	cout<<"\n\n\t\t\tUpdate Record";
	cout<<"\n\n Product Code : ";
	cin>>code;
	for(int i=0;i<total;i++)
	{
		if(code == shelf_store[i].code)
		{
			cout<<"\n Which Data Do You Want Update\n";
			cout<<"\n 1.Name\n";
			cout<<"\n 2.Product Code\n";
			cout<<"\n 3.Product price\n";
			cout<<"\n 4.Product Discount\n";
			cout<<"\n 5. Shelf No\n";
			cout<<"\n 6. Update All\n";
			cout<<"\n Enter Your Choice : ";
			cin>>choice;
			switch(choice)
			{
			case 1:
				cout<<"\n Previous Name :"<<shelf_store[i].name<<endl;
				cout<<"\n\n Name : ";
				cin>>shelf_store[i].name;
				break;
			case 2:
				cout<<"\n Previous Product Code :"<<shelf_store[i].code<<endl;
				cout<<"\n\n Product Code : ";
				cin>>shelf_store[i].code;
				break;
			case 3:
				cout<<"\n Previous Price :"<<shelf_store[i].price<<endl;
				cout<<"\n\n Price : ";
				cin>>shelf_store[i].price;
				break;
			case 4:
				cout<<"\n Previous Discount :"<<shelf_store[i].discount<<endl;
				cout<<"\n\n Discount in % : ";
				cin>>shelf_store[i].discount;
				break;
			case 5:
				cout<<"\n Previous Shelf no :"<<shelf_store[i].shelf_no<<endl;
				cout<<"\n\n Shelf Number: ";
				cin>>shelf_store[i].shelf_no;
				break;
			case 6:
				cout<<"\n\n Name : ";
				cin>>shelf_store[i].name;
				cout<<"\n\n Product Code : ";
				cin>>shelf_store[i].code;
				cout<<"\n\n Price : ";
				cin>>shelf_store[i].price;
				cout<<"\n\n Discount in % : ";
				cin>>shelf_store[i].discount;
				cout<<"\n\n Shelf Number: ";
				cin>>shelf_store[i].shelf_no;
				break;
			default:
				cout<<"\n\n Invalid Value...Please Try Again...";
				break;
			}
			cout<<"\n\n ";
			cout<<"\n\n Name : ";
			cout<<shelf_store[i].name;
			cout<<"\n\n Product Code : ";
			cout<<shelf_store[i].code;
			cout<<"\n\n Price : ";
			cout<<shelf_store[i].price;
			cout<<"\n\n Discount in % : ";
			cout<<shelf_store[i].discount;
			cout<<"\n\n Shelf Number :";
			cout<<shelf_store[i].shelf_no;
			cout<<endl;
		}
	}
	for(int i=0;i<ch;i++)
	{	
	if(code == shelf[i].code)
		{
			cout<<"\n Which Data Do You Want Update\n";
			cout<<"\n 1.Name\n";
			cout<<"\n 2.Product Code\n";
			cout<<"\n 3.Product price\n";
			cout<<"\n 4.Product Discount\n";
			cout<<"\n 5. Shelf No\n";
			cout<<"\n 6. Update All\n";
			cout<<"\n Enter Your Choice : ";
			cin>>choice;
			switch(choice)
			{
			case 1:
				cout<<"\n Previous Name :"<<shelf[i].name<<endl;
				cout<<"\n\n Name : ";
				cin>>shelf[i].name;
				break;
			case 2:
				cout<<"\n Previous Product Code :"<<shelf[i].code<<endl;
				cout<<"\n\n Product Code : ";
				cin>>shelf[i].code;
				break;
			case 3:
				cout<<"\n Previous Price :"<<shelf[i].price<<endl;
				cout<<"\n\n Price : ";
				cin>>shelf[i].price;
				break;
			case 4:
				cout<<"\n Previous Discount :"<<shelf[i].discount<<endl;
				cout<<"\n\n Discount in % : ";
				cin>>shelf[i].discount;
				break;
			case 5:
				cout<<"\n Previous Shelf no :"<<shelf[i].shelf_no<<endl;
				cout<<"\n\n Shelf Number: ";
				cin>>shelf[i].shelf_no;
				break;
			case 6:
				cout<<"\n\n Name : ";
				cin>>shelf[i].name;
				cout<<"\n\n Product Code : ";
				cin>>shelf[i].code;
				cout<<"\n\n Price : ";
				cin>>shelf[i].price;
				cout<<"\n\n Discount in % : ";
				cin>>shelf[i].discount;
				cout<<"\n\n Shelf Number: ";
				cin>>shelf[i].shelf_no;
				break;
			default:
				cout<<"\n\n Invalid Value...Please Try Again...";
				break;
			}
			cout<<"\n\n Updated Product";
			
			cout<<"\n\n Name : ";
			cout<<shelf[i].name;
			cout<<"\n\n Product Code : ";
			cout<<shelf[i].code;
			cout<<"\n\n Price : ";
			cout<<shelf[i].price;
			cout<<"\n\n Discount in % : ";
			cout<<shelf[i].discount;
			cout<<"\n\n Shelf Number: ";
			cout<<shelf[i].shelf_no;
			cout<<endl;
		}
	}
}
void search(Items shelf_store[])
{
	system("cls");
	int code;
	cout<<"\n\n\t\t\tSearch Record";
	cout<<"\n\n Product Code : ";
	cin>>code;
	for(int i=0;i<total;i++)
	{
		if(code == shelf_store[i].code)
		{
			cout<<"\n\n Name : ";
			cout<<shelf_store[i].name;
			cout<<"\n\n Product Code : ";
			cout<<shelf_store[i].code;
			cout<<"\n\n Price : ";
			cout<<shelf_store[i].price;
			cout<<"\n\n Discount in % : ";
			cout<<shelf_store[i].discount;
			cout<<"\n\n Shelf Number :";
			cout<<shelf_store[i].shelf_no;
			cout<<endl;
		}
		if (code == shelf[i].code)
		{
			cout<<"\n\n Name : ";
			cout<<shelf[i].name;
			cout<<"\n\n Product Code : ";
			cout<<shelf[i].code;
			cout<<"\n\n Price : ";
			cout<<shelf[i].price;
			cout<<"\n\n Discount in % : ";
			cout<<shelf[i].discount;
			cout<<"\n\n Shelf Number :";
			cout<<shelf[i].shelf_no;
			cout<<endl;
		}
	}
	
}
void del()
{
	system("cls");
	double del;
	int code;
	cout<<"\n\n\t\t\tDelete product";
	cout<<"\n\n Product Code : ";
	cin>>code;
	for(int i=0;i<total--;i++)
	{
		if(code == shelf_store[i].code)
		{
			shelf_store[i].name="0";
			shelf_store[i].code=0;
			shelf_store[i].price=0;
			shelf_store[i].discount=0;
			shelf_store[i].shelf_no="0";
			cout<<"\n\n Product Deleted Successfully....";
		}
		if(code == shelf[i].code)
		{
			shelf[i].name="0";
			shelf[i].code=0;
			shelf[i].price=0;
			shelf[i].discount=0;
			shelf[i].shelf_no="0";
			cout<<"\n\n Product Deleted Successfully....";
		}
	}
}
void show()
{
	cout<<"\n\n**********************************SHELF PRODUCTS***********************************\n";
	cout<<"\nPr No.\t\tPrice \t\tDiscount \tShelf No \tPr Name\n";

	for(int i=0;i<total;i++)
	{
	cout<<"\n"<<shelf_store[i].code;
	cout<<"\t\t"<<shelf_store[i].price;
	cout<<"\t\t"<<shelf_store[i].discount;
	cout<<"\t\t"<<shelf_store[i].shelf_no;
	cout<<"\t\t"<<shelf_store[i].name;
	cout<<endl;
	break;
	}
	cout<<"\n\n**********************************ADDED PRODUCTS***********************************\n";
	cout<<"\nPr No.\t\tPrice \t\tDiscount \tShelf No \tPr Name\n";
	for(int i=0;i<ch;i++)
	{
	cout<<"\n"<<shelf[i].code;
	cout<<"\t\t"<<shelf[i].price;
	cout<<"\t\t"<<shelf[i].discount;
	cout<<"\t\t"<<shelf[i].shelf_no;
	cout<<"\t\t"<<shelf[i].name;
	cout<<endl;
	break;
	}
	
}
void invoice()
{
	int code;
	int quantity;
	float price;
	float discount;
	float totalp;
	char choice;
	cout<<"\n\t============================";
	cout<<"\n\t       PLACE YOUR ORDER       ";
	cout<<"\n\t=============================\n";
	
	cout<<"\n\n Product Code : ";
	cin>>code;
	cout<<"\n\n Product Quantity : ";
	cin>>quantity;
	for(int i=0;i<total;i++)
	{
		if(code == shelf_store[i].code)
		{
			{
			price = shelf_store[i].price*quantity;
			totalp = price -(price/100*shelf_store[i].discount);
			}	
		}
	}
	cout<<"\n\n Total Amount = "<<totalp<<" Birr";
}

void admin()
{
	system("cls");
	p:
	
	int choice;
	cout<<"\n\n\t\t\tAdmin Panel";
	cout<<"\n\n 1. Add Product";
	cout<<"\n 2. Search Product";
	cout<<"\n 3. Update Product";
	cout<<"\n 4. Delete Product";
	cout<<"\n 5. Show Product";
	cout<<"\n 6. Go Back";
	cout<<"\n\n Enter Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			add(shelf);
			break;
		case 2:
			search(shelf_store);
			break;
		case 3:
			update();
			break;
		case 4:
			del();
			break;
		case 5:
			show();
			break;
		case 6:
			menu();
			break;
		default:
			cout<<"\n\n Invalid Value...Please Try Again...";
	}
	goto p;
}

void customer()
{
	system("cls");
	p:
	int choice;
	cout<<"\n\n\t\t\tCustomer panel";
	cout<<"\n\n 1.Sale Product";
	cout<<"\n 2.Go Back";
	cout<<"\n\n Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\n\n\n\t\t\t\t INVOINCE GENERATE\n";
			show();
			invoice();
			break;
		case 2:
			menu();
			break;
		default:
			cout<<"\n\n Invalid Value...Please Try Again...";
	}
	goto p;
}

void menu()
{
	system("cls");
	int choice;
	string user,pass;
	char ch;
	cout<<"\n\n\t SUPERMARKET MANAGEMENT SYSTEM \n";
	cout<<"\n\n\t\tcontrol panel";
	cout<<"\n\n 1. Admin";
	cout<<"\n 2. Customer";
	cout<<"\n 3. Exit";
	cout<<"\n\n Enter Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			system("cls");
			cout<<"\n\n\t\t\tLogin System";
			cout<<"\n\n User : ";
			cin>>user;
			cout<<"\n\n Password : ";
			for(int i=0;i<=4;i++)
			{
				ch = getch();
				pass += ch;
				cout<<"*";
			}
				if(user == "admin" && pass == "admin")
			{
				cout<<"\n\n ACCESS GRANTED...\n";
				cout<<"\n\n Press any key to continue.......\n";
				getch();
				admin();
			}
			else
			{
				cout<<"\n\n Invalid E-mail and Password.....";
			}
			break;
		case 2:
			customer();
			break;
		case 3:
			exit(0);
			break;
		default:
			cout<<"\n\n Invalid Value.... Please Try Again...";
			break;
	}
}

int main()
{
	menu();

	return 0;
}

