#include <iostream>

using namespace std;

int main() {
cout<<"\nRandy T. Vega";
cout<<"\nBS CPE 2-1D";
string nickname;
cout<<"\nenter your nickname:";
cin>>nickname;
string tryagain="y"; /* asks the user to input his nickname */
while (tryagain=="y") {
/*inside this while loop is a simple program that runs again and again until the user says no*/
float coke=15.00;
float sprite=15.00;
float tropicana=18.00;
float fruitsoda=10.00;
float numofitems=0;
string item;
int whattobuy;
float total;
float payment=0;
float change;
cout<<"\nWhat do you want to buy?:";
cout<<"\n1. coke = Php15.00 \n2. sprite = Php15.00 \n3. tropicana = Php18.00 \n4. fruit soda= Php10.00\nenter:";
cin>>whattobuy;

if (whattobuy <=0) {
tryagain="n";
}
else {
while (numofitems<=0) {
cout<<"\nhow many items:";
cin>>numofitems;
if (numofitems<=0) {
cout<<"\n please enter a valid number of items!";
 }
}
if (whattobuy==1) {
total=numofitems*coke;
item="coke";
}
else if(whattobuy==2) {
total=numofitems*sprite;
item="sprite";
}
else if (whattobuy==3) {
total=numofitems*tropicana;
item="tropicana";
}
else if(whattobuy==4) {
total=numofitems*fruitsoda;
item="fruitsoda";
}
while (payment<total) { /* prompts the user to pay again for entering an invalid payment */
cout<<"\ntotal payment is Php"<<total;
cout<<"\nenter your payment:PhP";
cin>>payment;
if (payment<total) {
cout<<"\nplease enter valid payment!";
} /* if payment<total */
} /*end of the whileloop payment*/
change=payment-total; /* computes the change */

cout<<"\n"<<nickname<<", thank you for buying.";
cout<<"\n \tsummarized of transaction";
cout<<"\nitem:"<<item;
cout<<"\nnumber of items:"<<numofitems;
cout<<"\ntotal payment:PhP"<<total;
cout<<"\namount paid:PhP"<<payment;
cout<<"\nchange:PhP" <<change;
cout<<"\n";
cout<<"\n\t thank you for buying!";

cout<<"\nDo you want to buy again? y/n \n"; /* asks the user if he wants to buy again */
cin>>tryagain; /* the answer is put in this variable if its yes then it will loop back if not , the program ends */

} /* end of the whileloop program */
}
cout<<"thank you!";
}
