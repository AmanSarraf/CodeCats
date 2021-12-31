#include<fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int login_stat=0;
void loginon()
{
    login_stat=1;
}
void loginoff(){
    login_stat=0;
}

class customer
{
    public:
char name[30],email[100],address[100],username[30],password[20],number[10];


};

class product
{

int sno;
char pname[100];
float price,gst,discount;
public:
void display()
{
    
}


};



void signup()
{
    ofstream fout;
    customer c1;
    fout.open("customer.txt");
    if(!fout)
    {
        cout<<"file not found";
        exit(1);
    }

    cout<<"************REGISTER HERE*************\n";
    cout<<"\tPlease Enter Your Username";
    cin.ignore();   //fflush(stdin);
    fout<<gets(c1.username);
    cout<<"\tEnter your password";
    fout<<gets(c1.password);
    cout<<"\tEnter your Full Name";
    fout<<gets(c1.name);
    cout<<"\tEnter your Address";
    fout<<gets(c1.address);
    cout<<"\tEnter your Contact Number";
    fout<<gets(c1.number);
    cout<<"\tEnter your Email";
    fout<<gets(c1.email);
    cout<<"REGISTRATION SUCCESSFUL";
    signin();

    fout.close();


}

void signin()
{
    ifstream fin;
    char username[30],password[30];
    fin.open("customer.txt",ios::in);
    customer c1;
    cout<<"username=";
    cin.ignore();
    gets(username);
    cout<<"Password=";
     cin.ignore();
    gets(password);

    //while(----------)
    {

      if(strcmp(username,c1.username)==0 && strcmp(password,c1.password)==0)
      {
        cout<<"Login Successful";
        //login_stat=1;
        loginon();

      }
      else
      {
          cout<<"Invalid credentials";
      }
        
        fin.close();

    }

   

}
void welcome()
{
     cout<<"             welcome"<<endl;
    cout<<"\n\nenter your choice\n\n\n";
    cout<<"1.Display Item\n\n2.SignUp\n\n3.SignIn\n\n4.ContactUs\n\n5.Exit";
}



 


int main()
{  
    int choice;
    welcome();
   
    cin>>choice;
    
    switch(choice)
    {
        case 1://display
        case 2://signup
        case 3://signin
        case 4://contact us
        case 5://exit
    }

   
    
}