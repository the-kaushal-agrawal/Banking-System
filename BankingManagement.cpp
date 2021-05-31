#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;
class Account
{
private:
    string firstna;
    string lastna;
    string fathname;
    long  long int adhar;
    string mobile;
    string email;
    int initialbal;
    char wantATM;
    char wantCheque;
  long   int accountno;

public:
Account(){

}
    Account(string a, string b, string c, long long int d, string e, string f, int g, char h, char i, long int k)
    {
        firstna = a;
        lastna = b;
        fathname = c;
        adhar = d;
        mobile = e;
        email = f;
        initialbal = g;
        wantATM = h;
        wantCheque = i;
        accountno = k;
    }
    friend ofstream &operator<<(ofstream &out, Account &openacc);
    friend ifstream &operator>>(ifstream &intt, Account &showacc);
    friend ostream &operator<<(ostream &mop, Account &popo);
   
};
ofstream &operator<<(ofstream &piujr, Account &openacc)
{
    piujr << openacc.accountno << endl;
    piujr << openacc.initialbal << endl;
    piujr << openacc.firstna << endl;
    piujr << openacc.lastna << endl;
    piujr << openacc.mobile << endl;
    piujr << openacc.email << endl;
    return piujr;
}
ifstream &operator>>(ifstream &intt, Account &shacc)
{
    intt>>shacc.accountno;
    intt>>shacc.initialbal;
    intt>>shacc.firstna;
    intt>>shacc.lastna;
    intt>>shacc.mobile;
    intt>>shacc.email;
    return intt;
}

ostream &operator<<(ostream &mop, Account &popo)
{
    mop << "Account Number: -  " << popo.accountno << endl;
    mop << "Balance in Account : -  " << popo.initialbal << endl;
    mop << "First Name : -  " << popo.firstna << endl;
    mop << "Last Name : -  " << popo.lastna << endl;
    mop << "Mobile  Number: -  " << popo.mobile << endl;
    mop << "Email Id : -  " << popo.email << endl;
    return mop;
}
int main()
{
  Account cand;
   
    string ordname;
    int choice;
    ofstream accout("accfile.txt", ios::app);
        ifstream accin("accfile.txt");
        int count1 = 0;
         map<long long int, int> ao;
 string firstna;
            string lastna;
            string fathname;
            long long int adhar;
            string mobile;
            string email;
            int initialbal;
            char wantATM;
            char wantCheque;
            long int accountno;
            long int rando = 98765432;
               long int acc2;
            int amou2;
              map<long long int, int>::iterator itr;
                  int acc4;
                     long int acc3;
                     long int acc5;
                     long int acc6;
                     long int acc7;
char anss;
            long int amou3;
 
    cout << setw(70) << "STATE BANK OF INDIA" << endl;
    cout << setw(70) << "---------------------" << endl;
    cout << " " << endl;
    cout << ".............Welcome To SBI Bank .........." << endl;
    cout << " " << endl;
    cout << "-:Enter Your Full Name:-" << endl;

    getline(cin, ordname);
   
 
cout<<" "<<endl;
    cout << "Welcome " << ordname << " to SBI Bank .. "<< endl;
    // cout<<setw(48)<<"----------------"<<endl;
   cout << " " << endl;
    
        cout<<" "<<endl;
        label:
        cout << "Enter A choice from below options" << endl;
        cout << " " << endl;

        cout << " 1. Open An Account " << endl;
        cout << " 2. Deposit Amount " << endl;
        cout << " 3. Withdraw Amount " << endl;
        cout << " 4. Balance Enquiry " << endl;
        cout << " 5. Request for a Cheque Book " << endl;
        cout << " 6. Request for an ATM Card " << endl;
        cout << " 7. Block ATM Card " << endl;
        cout << " 8. Show All Accounts" << endl;
      
        cin >> choice;
        
            
        switch (choice)
        { 
        case 1: //completed
           {
            cout << " " << endl;
            cout << "Thanks! For Choosing Account in SBI Bank" << endl;
            cout << " " << endl;
            cout << "STEP 1 :  Personal Detials" << endl;
            cout << " " << endl;
            cout << "Enter your First Name:- " << endl;
            cin >> firstna;
            cout << "Enter your Last Name:- " << endl;
            cin >> lastna;
            cout << "Enter your Fathers First Name:- " << endl;
            cin>>fathname;

         //getline(cin, fathname);
        //  cin.ignore();
            cout << "Enter Your Aadhar Card Number:- " << endl;
            cin >> adhar;
            cout << "Enter Your Mobile Number:- " << endl;
            cin >> mobile;
            for (int z = 2; z < 8; z++)
            {
                mobile[z] = 'X';
            }
            cout << "Enter Your Email id :- " << endl;
            cin >> email;
            cout << "STEP 2 :  BANK Detials" << endl;
            cout << " " << endl;
            cout << "Enter Initial Amount you want to be deposit :- " << endl;
            cout << " " << endl;
            cout << "Min Amount to be deposit is Rs. 1000" << endl;
            cin >> initialbal;
            if(initialbal<1000){
                cout<<" "<<endl;

                cout<<"Please deposit aleast 1000 Rs"<<endl;
                cout<<" "<<endl;
                cout<<"Enter Again Amount you want to be depsit"<<endl;
             cin>>initialbal;

            }
            cout << "You Want ATM Card deliver at your home , Reply with 'Y' for Yes and 'N' for No" << endl;
            cin >> wantATM;
            cout << "You Want Cheque Book deliver at your home , Reply with 'Y' for Yes and 'N' for No" << endl;
            cin >> wantCheque;
            
            accountno = rando;
            rando = rando + 1841;
ao.insert(pair<long long int,int> (accountno, initialbal));
            cout << " " << endl;
            cout << "Congratulations ! Your Account is Created " << endl;
            cout << "-------------------------------------------" << endl;
            cout << "Your Account Number is:- " << accountno << endl;
            cout << "Your Name: - " << firstna << " " << lastna << endl;
            cout << "Mobile Number:-  " << mobile << endl;
            cout << "Account Balance:- " << initialbal << endl;
            cout<<"Current Date:- "<<__DATE__<<endl;
            cout<<"Current Time:- "<<__TIME__<<endl;
            cout << " " << endl;
            cout << "-------------------------------------------" << endl;
            count1++;
        Account   cand (firstna, lastna, fathname, adhar, mobile, email, initialbal, wantATM, wantCheque, accountno);
            accout << cand;
            cout<<" "<<endl;

            cout<<"Do You want to continue or exit the portal"<<endl;
            cout<<"Reply with 'Y' for Continue  and 'N' for exit portal"<<endl;
cin>>anss;
if(anss == 'Y'){
    goto label;
}
else if(anss= 'N'){
    goto end;
}
            break;
           }
        case 2:
         

            cout << "Deposit Amount....." << endl;
            cout << " " << endl;
            cout << "Enter Your Account No" << endl;
            cin >> acc2;
            cout << "Enter Amount you want to add" << endl;
            cin >> amou2;
            cout << "You have sucessfully Deposited " << amou2 << "Rs..." << endl;

          
            itr = ao.find(acc2);
            itr->second = itr->second + amou2;
            cout<<" "<<endl;
            cout << "Your Current Balance is Rs  " << itr->second << endl;
            cout << " " << endl;
            cout << "Thanks For Visiting SBI" << endl;
          
             cout<<"Current Date:- "<<__DATE__<<endl;
            cout<<"Current Time:- "<<__TIME__<<endl;
            cout<<" "<<endl;
            cout<<"Do You want to continue or exit the portal"<<endl;
           cout<<"Reply with 'Y' for Continue  and 'N' for exit portal"<<endl;
cin>>anss;
if(anss == 'Y'){
    goto label;
}
else if(anss= 'N'){
    goto end;
}
            break;
        case 3:
         

            cout << "Withdraw Amount....." << endl;
            cout << " " << endl;
            cout << "Enter Your Account No:- " << endl;
            cin >> acc3;
            cout << "Enter Amount you want to withdraw : -" << endl;
            cin >> amou3;

           
            itr = ao.find(acc3);
            itr->second = itr->second - amou3;
            if (itr->second < 0)
            {
                cout << "Please Enter Valid Amount" << endl;
                cin>>amou3;
                itr = ao.find(acc3);
            itr->second = itr->second - amou3;
            }
            else if (itr->second < 1000)
            {
                cout << "The minimum amount must be Rs 1000" << endl;
                cout<<"Enter Again Amount.."<<endl;
                 cin>>amou3;
                itr = ao.find(acc3);
            itr->second = itr->second - amou3;
            }
            cout << "You have sucessfully Withdrawl " << amou3 << "Rs..." << endl;
            cout << "Your Current Balance is :- Rs " << itr->second << endl;
            cout << " " << endl;
            cout << "Thanks For Visiting SBI" << endl;
           
           cout<<"Current Date:- "<<__DATE__<<endl;
            cout<<"Current Time:- "<<__TIME__<<endl;
            cout<<" "<<endl;
            cout<<"Do You want to continue or exit the portal"<<endl;
            cout<<"Reply with 'Y' for Continue  and 'N' for exit portal"<<endl;
cin>>anss;
if(anss == 'Y'){
    goto label;
}
else if(anss= 'N'){
    goto end;
}
            break;
        case 4:
        

            cout << "Balance Enquiry " << endl;
            cout << "Enter Your Account Number: - " << endl;
            cin >> acc4;
           
            itr = ao.find(acc4);
            cout << " Your Balance is:- " << itr->second << endl;
            cout << " " << endl;
            cout << "Thanks For Visiting SBI" << endl;
            
           cout<<"Current Date:- "<<__DATE__<<endl;
            cout<<"Current Time:- "<<__TIME__<<endl;
            cout<<" "<<endl;
            cout<<"Do You want to continue or exit the portal"<<endl;
          cout<<"Reply with 'Y' for Continue  and 'N' for exit portal"<<endl;
cin>>anss;
if(anss == 'Y'){
    goto label;
}
else if(anss= 'N'){
    goto end;
}
            break;

        case 5:
            //int acc5;

            cout << "Request For Cheque Book" << endl;
            cout << " " << endl;
            cout << "Enter Your Account Number: - " << endl;
            cin >> acc5;
            cout << "OKAY! Your Request is under Process" << endl;
            cout << " " << endl;
            cout << "Thanks for Visiting SBI" << endl;
            
           cout<<"Current Date:- "<<__DATE__<<endl;
            cout<<"Current Time:- "<<__TIME__<<endl;
            cout<<" "<<endl;
            cout<<"Do You want to continue or exit the portal"<<endl;
             cout<<"Reply with 'Y' for Continue  and 'N' for exit portal"<<endl;
cin>>anss;
if(anss == 'Y'){
    goto label;
}
else if(anss= 'N'){
    goto end;
}
            break;
        case 6:
            //int acc6;

            cout << "Request For ATM Card" << endl;
            cout << " " << endl;
            cout << "Enter Your Account Number: - " << endl;
            cin >> acc6;
            cout << "OKAY! Your Request is under Process" << endl;
            cout << " " << endl;
            cout << "Thanks for Visiting SBI" << endl;
         
           cout<<"Current Date:- "<<__DATE__<<endl;
            cout<<"Current Time:- "<<__TIME__<<endl;
            cout<<" "<<endl;
            cout<<"Do You want to continue or exit the portal"<<endl;
           cout<<"Reply with 'Y' for Continue  and 'N' for exit portal"<<endl;
cin>>anss;
if(anss == 'Y'){
    goto label;
}
else if(anss= 'N'){
    goto end;
}
            break;
        case 7:
          //  int acc7;

            cout << "Request For Block  ATM Card" << endl;
            cout << " " << endl;
            cout << "Enter Your Account Number: - " << endl;
            cin >> acc7;
            cout << "OKAY! Your Request is under Process" << endl;
            cout << " " << endl;
            cout << "Thanks for Visiting SBI" << endl;
           
           cout<<"Current Date:- "<<__DATE__<<endl;
            cout<<"Current Time:- "<<__TIME__<<endl;
            cout<<" "<<endl;
            cout<<"Do You want to continue or exit the portal"<<endl;
             cout<<"Reply with 'Y' for Continue  and 'N' for exit portal"<<endl;
cin>>anss;
if(anss == 'Y'){
    goto label;
}
else if(anss= 'N'){
    goto end;
}
            break;
        case 8:{
             
        
            cout << " All Accounts registered on this portal are : " << endl;
             cout<<" "<<endl;

             cout<<"Current Date:- "<<__DATE__<<endl;
            cout<<"Current Time:- "<<__TIME__<<endl;
            cout<<" "<<endl;

            for (int b5 = 1; b5 <= count1; b5++)
            {
                cout << "Account No.-  " << b5 << endl;
                accin >> cand;
                cout << cand << endl;
            }
cout<<" "<<endl;
          
            cout<<"Do You want to continue or exit the portal"<<endl;
           cout<<"Reply with 'Y' for Continue  and 'N' for exit portal"<<endl;
cin>>anss;
if(anss == 'Y'){
    goto label;
}
else if(anss= 'N'){
    goto end;
}
            break;
            }
       
        default:
            cout << "Please Choose appropriate choice " << endl;
            cout<<"Choose Again..."<<endl;
            cout<<" "<<endl;

            goto label;
            break;
        }
        
        end:
        cout<<" "<<endl;
 cout<<"Current Date:- "<<__DATE__<<endl;
            cout<<"Current Time:- "<<__TIME__<<endl;
            cout<<" "<<endl;

            cout << ".....Thanks For Visiting SBI Bank..... " << endl;
            cout << " " << endl;
            cout << "Exit in 3 seconds .............." << endl;
             
   
    return 0;
}