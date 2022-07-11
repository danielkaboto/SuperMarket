#include<iostream>
#include<fstream>
using namespace std;


class shopping
{
    private:
        int pcode;
        float price;
        float dis;
        string pname;
        
        public:
            void menu();
            void administrator();
            void buyer();
            void add();
            void edit();
            void rem ();
            void list();
            void receipt();

};

void shopping :: menu()
{
    m:
    int choice;
    string email;
    string password;

    cout <<"\t\t\t_________________________________________________________\n";
    cout <<" \t\t\t                                                        \n";
    cout <<" \t\t\t            superMarket MAin menu                       \n";
    cout <<" \t\t\t                                                        \n";
    cout <<"\t\t\t_________________________________________________________\n";
    cout <<" \t\t\t                                                        \n";
    cout <<" \t\t\t   1) Administrato    \n";
    cout << "\t\t\t    2) Buyer           \n";
    cout <<"\t\t\t     3) exit             \n";
    cout <<"\n\t\t\t  Please select ! ";

    cin>> choice;

    switch (choise)
    {
        case 1:
            cout <<"\t\t  Please Login  \n";
            cout <<"\t\t Enter Email  \n";
            cin >> email;
            cout <<" \t\t ENter Password  \n";
            cin >> password;

            if(email = "danielkabotospdk@gmail.com" && password== "Danielkn1908")
            {
                administrator();
            }
            else
            {
                cout <<"INvalid email or password ";
            }
            break;
        
        case 2:
        {
            buyer();

        }
        
        case 3:
        {
            exit(0);
        }

        default :
        {
            cout <<"Please select from the given options";
        }

    } 
goto m;

}

void shoppping :: administrator()
{
    m:
    int choice;
    cout <<"        Administrator menu";
    cout <<"\n |     1) Add the product |";
    cout <<"\n |     2) Modify the product |    ";
    cout <<"\n |     3) Delete the product |    ";
    cout <<"\n |     4) Back to main menu  |    ";

    cout <<"        Please enter your choice";
    cin >>choice;

    switch(choice)
    {
        case 1:
            add();
            break;
        case 2: 
            edit();
            break;
        case 3:
            rem();
            break; 
        case 4:
            menu();
            break;
        default :
            cout <<"Invalid choice ";
    }
    goto m;
}

void shopping :: buyer()
{
    m:
    int choice;

    cout <<"         Buyer "<<endl;
    cout <<"       1) Buy the product  "<<endl;
    cout <<"       2) Go back        " <<endl;

    cout <<"         Enter your choice "<<endl;
    cin >>choice;

    switch(choice)
    {
        case 1:
            receipt()
            break;
        case 2:
            menu();

        default:
             cout <<"INvalid choice "<<endl;
    }
    goto m;
}

void shopping :: add()
{
    fstream data;
    int c;
    int token =0;
    float p;
    float d;
    string n;   

    cout <<"        add new product  "<<endl;
    cout <<"        product code of the product" <<endl;
    cin >> pcode;
    cout <<"          NAme of the product " <<endl;
    cin >> pname;
    cout <<" Price of the product";
    cin >>price;
    cout <<"Discount on product";
    cin >> dis;
}

int main()
{

    
}