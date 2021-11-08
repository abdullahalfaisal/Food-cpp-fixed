#include <iostream>
using namespace std;
int main()
{
    double Naga_Burger = 115.00;
    double Chicken_Burger = 80.00;
    double Cheese_Pizza = 600.00;
    double Chicken_BBQ_Pizza = 800.00 ;
    double Chicken_Sandwich = 75.00;
    double Sub_Sandwich = 125.00;
    double Cold_Coffee = 75.00;
    double Special_Locchi = 85.00;
    double Chicken_Chaap = 105.00;
    double Soft_Porota = 12.00;
    double Mad_Drums = 255.00;
    double BBQ_Chicken_Wings = 155.00;
    double Extra_Cheese = 25.00;
    double Egg = 20.00;
    double Subtotal;
    int    select;
    int   quantity;
    int   flavour;
    char  letter;

    double totalAmountOfAll;

    cout<<"\t\t\n\n----------Welcome To Mad Chicken---------\n\n";
    string name;
    cout<<" Please Enter Your name: ";
    getline(cin,name);


    cout<<"\n\nHello "<<name<<", What would you like to have? ";
    beginning:
    double totalAmount[100];
    cout<<"\n\n\n------------MENU------------\n\n";

    string menu[] = {"\0"," Burger"," Pizza"," Chaap & others"," sandwich"," Naga"," Drinks"," Addons"};
    for(int i = 1; i<=7;i++){

        cout<<i<<")"<<menu[i]<<endl;
    }

    cout<<"\nPlease Select Your Food: ";
    cin>>select; //food selection

if (select==1) //if select 1) burger //Naga Burger //Chicken Burger
{
    string burgerFlavour [] = {"\n\0","Naga Burger","Chicken Burger"};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<burgerFlavour[i]<<endl;
}

    cout<<"\nEnter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Naga Burger: "<<Naga_Burger<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of Chicken Burger is: "<<Chicken_Burger<<" TK "<<endl;

    cout<<"\nSelect the Quantity: ";
    cin>>quantity;


    if (flavour== 1 )

    Subtotal = quantity*Naga_Burger;
    totalAmount[0] = Subtotal;

    if (flavour== 2)

    Subtotal = quantity*Chicken_Burger;
    totalAmount[0] = Subtotal;

    //stotal [0]= Subtotal[0]


    cout<<"\nYour Amount is: "<<Subtotal<<" TK ";
}

 else if (select==2) //if select 2) pizza //Cheese Pizza // Chicken BBQ Pizza
{
    string pizzaFlavour [] = {"\0","Cheese Pizza","Chicken BBQ Pizza"};
    for(int i = 1; i<=2; i++){
    cout<<i<<") "<<pizzaFlavour[i]<<endl;
}
    cout<<"\nEnter Your Flavour: ";
    cin>>flavour;

    if (flavour == 1)

        cout<<"\nPrice of Cheese Pizza: "<<Cheese_Pizza<<" Tk "<<endl;

     if (flavour == 2)

        cout<<"\nPrice of Chicken BBQ Pizza is: "<<Chicken_BBQ_Pizza<<" TK "<<endl;

    cout<<"\nSelect the Quantity: ";
    cin>>quantity;

    if (flavour== 1 )

    Subtotal = quantity*Cheese_Pizza;
    totalAmount[1] = Subtotal;


    if (flavour== 2)

    Subtotal = quantity*Chicken_BBQ_Pizza;
     totalAmount[1] = Subtotal;


    cout<<"\nYour Amount is: "<<Subtotal<<" TK ";
}
else if (select==3) //if select chaap & others //Chicken_Chaap // Soft_Porota
{
    string chaapFlavour [] = {"\0","Chicken Chaap","Soft Porota "};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<chaapFlavour[i]<<endl;
}

    cout<<"\nEnter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Chicken Chaap: "<<Chicken_Chaap<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of Soft Porota is: "<<Soft_Porota<<" TK "<<endl;

    cout<<"Select the Quantity: ";
    cin>>quantity;

    if (flavour== 1 )

    Subtotal = quantity*Chicken_Chaap;
    totalAmount[2] = Subtotal;



    if (flavour== 2)

    Subtotal = quantity*Soft_Porota;
    totalAmount[2] = Subtotal;


    cout<<"\nYour Amount is: "<<Subtotal<<" TK ";

}


else if (select==4) //if select Sandwich //Chicken_Sandwich // Sub_Sandwich
{
    string sandwichFlavour [] = {"\0","Chicken Sandwich","Sub Sandwich "};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<sandwichFlavour[i]<<endl;
}

    cout<<"\nEnter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Chicken Sandwich: "<<Chicken_Sandwich<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of Sub Sandwich is: "<<Sub_Sandwich<<" TK "<<endl;

    cout<<"\nSelect the Quantity: ";
    cin>>quantity;

      if (flavour== 1 )

    Subtotal = quantity*Chicken_Sandwich;
    totalAmount[3] = Subtotal;



    if (flavour== 2)

    Subtotal = quantity*Sub_Sandwich;
    totalAmount[3] = Subtotal;


    cout<<"\nYour Amount is: "<<Subtotal<<" TK ";

}

else if (select==5) //if select naga //Mad_Drums // BBQ_Chicken_Wings
{
    string nagaFlavour [] = {"\0","Mad Drums","Sub Sandwich "};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<nagaFlavour[i]<<endl;
}

    cout<<"\nEnter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Mad Drums: "<<Mad_Drums<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of BBQ Chicken Wings is: "<<BBQ_Chicken_Wings<<" TK "<<endl;

    cout<<"\nSelect the Quantity: ";
    cin>>quantity;

          if (flavour== 1 )

    Subtotal = quantity*Mad_Drums;
    totalAmount[4] = Subtotal;


    if (flavour== 2)

    Subtotal = quantity*BBQ_Chicken_Wings;
   totalAmount[4] = Subtotal;


    cout<<"\nYour Amount is: "<<Subtotal<<" TK ";
}

else if (select==6) //if select Drinks //Cold_Coffee // Special_Locchi
{
    string drinksFlavour [] = {"\0","Cold Coffee ","Special Locchi "};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<drinksFlavour[i]<<endl;
}

    cout<<"\nEnter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Cold Coffee: "<<Cold_Coffee<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of Special Locchiis: "<<Special_Locchi<<" TK "<<endl;

    cout<<"\nSelect the Quantity: ";
    cin>>quantity;

    if (flavour== 1 )

    Subtotal = quantity*Cold_Coffee ;

    totalAmount[5] = Subtotal;

    if (flavour== 2)

    Subtotal = quantity*Special_Locchi;
    totalAmount[5] = Subtotal;


    cout<<"\nYour Amount is: "<<Subtotal<<" TK ";
}

 else if (select==7) //if select Addons //Extra_Cheese // Egg
{
    string addonsFlavour [] = {"\0","Extra Cheese ","Egg "};
    for (int i = 1; i<=2; i++)
{
        cout<<i<<") "<<addonsFlavour[i]<<endl;
}

    cout<<"\nEnter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Extra Cheese: "<<Extra_Cheese<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of Egg: "<<Egg<<" TK "<<endl;

    cout<<"\nSelect the Quantity: ";
    cin>>quantity;

    if (flavour== 1 )

    Subtotal = quantity*Extra_Cheese;
    totalAmount[6] = Subtotal;


    if (flavour== 2)

    Subtotal = quantity*Egg;
   totalAmount[6] = Subtotal;


    cout<<"\n\nYour Amount is: "<<Subtotal<<" TK ";
}


   cout<<"\n\nDo you want to order anything else "<<name<<"?";
    cout<<"\n\nIf yes, then type 'Y' otherwise type 'N': ";
    cin>>letter;
    if (letter=='Y' || letter=='y')
    {
        goto beginning;
    }

    else if (letter == 'N' || letter == 'n')
        totalAmountOfAll = totalAmount[0]+totalAmount[1]+totalAmount[2]+totalAmount[3]+totalAmount[4]+totalAmount[5]+totalAmount[6];
     cout<<"\n\nYour Total Amount is: "<<totalAmountOfAll<<endl;

        cout<<"\n\nThank You "<<name<<" for ordering! :) ";
        cout<<"\n\nEnjoy Your Food :)\n\n\n ";



    return 0;

}


