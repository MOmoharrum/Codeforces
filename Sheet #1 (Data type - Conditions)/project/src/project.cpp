/******************************************************************************
Today, departments often include the following: clothing, cosmetics,
do it yourself, furniture, gardening, hardware, home appliances, houseware,
paint, sporting goods, toiletries, and toys.
*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <cstring> // the same as <string.h>

using namespace std;

void MainMenu(){
    cout<<"1.Add Goods\n2.Search\n3.Sell\n4.Sold out Goods Details"<<endl;
}

void printAddGoods(){

    cout<<"\n\n\n\n\n\n\n\n\n"; // new page
    cout<<"\t\t\t\t\t\t\t\t Add Goods\n"; // almost middle

    cout<< "/////////////////////////////////////"<<endl;
    cout<< "First press 1 to enter | Press 0 to exit"<<endl;
    cout<< "Input format:\t Store Goods Quantity"<<endl;
    cout<< "/////////////////////////////////////"<<endl;
}

int isNum(char s){
    // to make sure it is an integer
    if(isdigit(s) != 0){
        return 1;
    }
    else
        return 0;
}

int isString(string s){

    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            return 0;
        }
    }
    return 1;
}

int isValidInput(string store,string goods, char quantity){
    if(isString(store) && isString(goods) && isNum(quantity))
        return 1; // true
    else
        return 0; // false
}

struct Goods{

    string production_date;
    string goods_name;
    char quantity;
    char id;

}goods[10];

struct Department{

    string depart_name;
    Goods goods[10];

};



////////////////////////////////////////////////////////////////////////////////

int main()
{
    int n,choice;
    char choice_yn,quantity;

    struct Department departments = {"dairy", goods[1] = {"1/1/2000","Milk",'4','1'} };

    FILE *database;
    database = fopen("database.aast", "wb");

    la: MainMenu();
    cin>>n;

    // If chose Add Goods
    if(n == 1){
        while(true){
            printAddGoods();
            cin>>choice;
            // if chose to enter products
            if(choice == 1){

                lb:
                // if file couldn't be opened11
                if(database == NULL)
                    printf( "File could not be opened\n" );
                else{
                    // write to the file
                    fwrite(&departments, sizeof(struct Department), 1, database);
                    fclose(database);

                }
                // Enter what you want
                //cin>> store>>goods>>quantity>>id;


                /*
                // If the input is invalid
                if(isValidInput(Goods.depart_name[Goods.id],Goods.goods_name.,quantity) == 0){
                    if(isString(store) == 0)
                        cout<<"Invalid Entry... Please enter a *String* in Store" << endl;
                    if(isString(goods) == 0)
                        cout<<"Invalid Entry... Please enter a *String* in Goods" << endl;
                    if(isNum(quantity) == 0)
                        cout<<"Invalid Entry... Please enter a *Number* in Quantity" << endl;
                    cout<<"Please try again..."<< endl;

                    // printAddGoods() again
                    //continue;

                    // Take 3 inputs again
                    goto lb;
                }
                */

                // If the input is valid
                //else
                    cout<<"Successfully added " << goods << " to your store inventory"<< endl;
                    cout<<"Would you like to add another product?(y/n)"<<endl;
                    cin>>choice_yn;
                    if(choice_yn == 'y' || choice_yn == 'Y')
                        goto lb; // take 3 inputs again
                    else if(choice_yn == 'n' || choice_yn == 'N')
                        goto la; // go to main menu

            }
            else if(choice == 0)
                goto la; // go to main menu

        }

    }

    else if(n == 2){
        if ( ( database = fopen( "database.aast", "rb" ) ) == NULL ) {
            printf( "File could not be opened.\n" ); }

        else{

            fseek( database, ( 1 - 0 ) * sizeof( struct Department ), SEEK_SET );
            fread( &departments, sizeof( struct Department ), 1, database );
            //printf("%-10s%-13s%s\n", departments.depart_name);
            printf("%-10s\n", departments.depart_name);
        }

    }

    fclose (database);
}
