#include <iostream>
using namespace std;
int main()
{
    int num, price = 0, totalPrice = 0;
    char continueChoice = 'Y';
    int code = 0;
    cout<<"Menue is:\n";
    cout << "burger1=code1 10$ \t burger2=code2 17$ \n";
    cout << "burger3=code3 7$ \t burger4=code4 15$ \n";
    cout << "burger5=code5 22$ \t burger6=code6 19$ \n\n";
    while ((continueChoice == 'Y') || (continueChoice == 'y'))
    {
        cout << "enter food code:(just enter code number!!)\n";
        cin >> code;
        if ((code<1)||(code>1000))
        {
           cout<<"eror 404!! ,enter valid code!";
           break;
        }   
        switch (code)
        {
        case 1:
        {
            cout << "food is burger1 \n";
            cout << "how many burgers you want?";
            cin >> num;
            if (num<0)
              {
                 cout<<"eror 404!! ,enter correct number!";
                 break;
              }
            price = num * 10;
            cout << "price of this food is " << price;
            break;
        }
        case 2:
        {
            cout << "food is burger2 \n";
            cout << "how many burgers you want?";
            cin >> num;
            if (num<0)
              {
                 cout<<"eror 404!! ,enter correct number!";
                 break;
              }
            price = num * 17;
            cout << "price of this food is " << price;
            break;
        }
        case 3:
        {
            cout << "food is burger3 \n";
            cout << "how many burgers you want?";
            cin >> num;
            if (num<0)
               {
                  cout<<"eror 404!! ,enter correct number!";
                  break;
               }
            price = num * 7;
            cout << "price of this food is " << price;
            break;
        }
        case 4:
        {
            cout << "food is burger4 \n";
            cout << "how many burgers you want?";
            cin >> num;
            if (num<0)
              {
                 cout<<"eror 404!! ,enter correct number!";
                 break;
              }
            price = num * 15;
            cout << "price of this food is " << price;
            break;
        }
        case 5:
        {
            cout << "food is burger5 \n";
            cout << "how many burgers you want?";
            cin >> num;
            if (num<0)
              {
                 cout<<"eror 404!! ,enter correct number!";
                 break;
              }
            price = num * 22;
            cout << "price of this food is " << price;
            break;
        }
        case 6:
        {
            cout << "food is burger6 \n";
            cout << "how many burgers you want?";
            cin >> num;
            if (num<0)
              {
                 cout<<"eror 404!! ,enter correct number!";
                 break;
              }
            price = num * 19;
            cout << "price of this food is " << price;
            break;
        }
        default:
        {
            cout << "eror 404!! ,enter valid code!";
            break;
        }
        }
        totalPrice += price;
        cout << "\nDo you want to continue? (Y/N): ";
        cin >> continueChoice;
    }
    if (totalPrice>0)
        cout <<"\nfinal price is: " <<totalPrice<<"$";
    else
        cout <<"\nyou dont buy any food!";    
        
    return 0;
}
