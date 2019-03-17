#include <iostream>

using namespace std;
int pin = 2536;
int entry = 2;
int eng;
int ki;
int lng;

int chooselng(int ki, int eng)
{
    cout<<"PLEASE CHOOSE A LANGUAGE\n";
 	cout<<"*****************************************************************\n";
  	cout<<"1. KISWAHILI\n";
  	cout<<"2. ENGLISH\n";
  	cout<<"*****************************************************************\n";

}

int checkpswd (int q,int pin)
{
    while(entry--)
	{
		cout<<"re-enter pssd";
		cin>>q;
	}
	if(q==pin)
 	{
        chooselng(ki, eng);
        cin>>lng;
	}

	if(q!=pin)
	{
    cout<<"limit is up ";

	}

}

int english(int depo,int with,int quit,int chckb)
{
    cout<<"************WELCOME TO ATM service*******************\n";
    cout<<"1.Check Balance\n";
    cout<<"2.Withdraw cash\n";
    cout<<"3.Deposit\n";
    cout<<"4.Quit\n";
}


int kiswahili(int weka,int Toa,int Toka,int x)
{
    cout<<"************KARIBU KWENYE ATM service*******************\n";
    cout<<"1.Angalia salio\n";
    cout<<"2.Toa pesa\n";
    cout<<"3.Weka\n";
    cout<<"4.Toka\n";
}


int main()
{
 int pin=2536;
 int q;
 int ki;
 int eng;
 int depoamount;
 int depo;
 int with;
 int quit;
 int chckb;
 int lng;
 int confirm;
 int balance=20000;
 int withdraw;
 int weka;
 int Toa;
 int x;
 int Toka;



 cout<<"enter your pin\n";
 cin>>q;
       if(q==pin)
	{
        chooselng(ki, eng);
         cin>>lng;
  	}

	 if(q!=pin)
	{
 		cout<<"you have enterd the wrong pin\n";
 		checkpswd(q,pin);
    }



	if (lng==2)
	{

     english( depo,with,quit,chckb);
     cin>>chckb;

     switch(chckb)
     {
    case 1:
	cout<<"Enter pin to check balance";
	cin>>q;
    if(q==pin)
	{
    cout<<"Amount available = :"<<balance;

	}

	else if(q!=pin)
	{
 	checkpswd(q,pin);
	}
	break;


    case 2:
	cout<<"Enter amount to withdraw\n";
	cin>>withdraw;
    if(withdraw>balance)
	{
     cout<<"Cannot comfirm transaction amount"<<withdraw<<" it exceeds Balance";

	}

	else if(withdraw<=balance)
	{
 	cout<<"please confirm transaction of Ksh"<< withdraw<<"\npress 1 to confirm and 2 to cancel\n";
 	cin>>confirm;
	}
	 if(confirm==1)
	{
	cout<<"confirmed withdrawal of Ksh"<<withdraw;
	}
     else if(confirm==2)
    {
    english( depo,with,quit,chckb);

    }
   break;


    case 3:
     cout<<"Enter amout to deposit\n";
     cin>>depoamount;
     cout<<"confirmed deposit of Ksh"<<depoamount;
     cout<<"\nAvailable balance"<<depoamount+balance;
   break;


    case 4:
     {
     system_error();
     break;
     }
     }

}

    else if(lng==1)
     {

    kiswahili(weka, Toa, Toka, x );
     cin>>x;

     switch(x)
     {
    case 1:
	cout<<"Eka pin yako kuangalia salio\n";
	cin>>q;
    if(q==pin)
	{
    cout<<"Salio ni = :"<<balance;

	}

	else if(q!=pin)
	{
 	checkpswd(q,pin);
	}
	break;


    case 2:
	cout<<"Eka kiasi unachotaka kutoa\n";
	cin>>withdraw;
    if(withdraw>balance)
	{
     cout<<"Haiwezekani kutoa kiasi Ksh"<<withdraw<<" kimezidi salio";
	}

	else if(withdraw<=balance)
	{
 	cout<<"Sahihisha kutoa pesa "<< withdraw<<"\nBonyeza 1 kukubali na 2 kukutaa\n";
 	cin>>confirm;
	}
	 if(confirm==1)
	{
	cout<<"Imesawazishwa "<<withdraw;
	}
     else if(confirm==2)
    {
      kiswahili(weka,Toa,Toka,x );
    }
   break;


    case 3:
     cout<<"Enter amout to deposit\n";
     cin>>depoamount;
     cout<<"Imesawazishwa kuweka kiasi :"<<depoamount;
     cout<<"\nSalio ni :"<<depoamount+balance;
   break;

    case 4:
     {
     system_error();
     break;
     }
      }
     }

    return 0;
  }


