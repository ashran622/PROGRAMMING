#include <iostream>
using namespace std;
int main ()
{
    char cat;
    string menu="yes";
    float a;
    float b,c,d;
   string repeatA="yes";
   string repeatB="yes"; while(menu=="yes"||menu=="Yes"||menu=="YES")
    {
        cout <<"Converter" << endl;
        cout << "a-Grams to kilograms, b-kilograms to grams" << "/n/n" << "Answer :" ;
        cin >> cat;
      
        if (cat=='a'){
        
        while (repeatA=="yes"||repeatA=="YES") {
              
               cout <<"Enter the value in grams"<< endl;
                cin>>a;
              b=a/1000;
                cout <<"The converted value is :" << b <<endl;
                cout << "Do you want to repeat ? (yes/no)" ;
                cin >>repeatA;
                cout <<"/n/n";
            } //end of loop
            
            //end of if
            cout << "Do you want to return to menu ? (yes/no)";
            cin>>menu;
        
        
        }
        if(cat=='b') {
            
            
            while (repeatB=="yes"||repeatB=="YES") {
             
            
            
               cout <<"Enter the value in kilograms" << endl;
                cin>>c;
                d=c*1000;
                cout <<"The converted value is :" << d <<endl;
                cout << "Do you want to repeat ? (yes/no)" ;
                cin >>repeatB;
                cout <<"/n/n";
            } //end of repeatB
            //end of if
            cout << "Do you want to return to menu ? (yes/no)";
            cin>>menu;
            }
  
    
   
     
    } //end of whileloop
    return 0;
   
}
