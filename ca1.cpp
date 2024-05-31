#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{
    cout<<endl;
    cout<<setw(80);
    cout<<"******* NUMBER GUESSING GAME *******\n";
    srand(time(0));
    int secret_number,guessing_number,i,n=1,ch;
    secret_number=(rand() % 100)+1;
    cout<<"1. easy\n2. medium\n3. hard\n\n";
    while(n==1)
    {
     cout<<"enter choice : ";
     cin>>ch;
     switch(ch)
     {
        case 1:
            cout<<"\nah!! it's easy level so you have 10 chances...\n\n";
            for(i=0;i<10;i++)
            {
            cout<<"enter guessing number: ";
            cin>>guessing_number;
            cout<<endl;
            if(guessing_number>secret_number)
            {
                cout<<"guessing number is greater than secret number!! guess smaller number!!\n\n";
                
            }
            else if(guessing_number<secret_number)
            {
                cout<<"guessing number is smaller than secret number!! guess greater number!!\n\n";
            
            }
            else if(guessing_number==secret_number)
            {
                cout<<"great!! you guessed correctly!!\n\n";
                break;
            }
           }
            if(guessing_number!=secret_number) 
            {
                cout<<"sorry !! you failed to get it!!\n\n";
            }
            break;
         case 2:
            cout<<"\nah!! it's medium level so you have 7 chances...\n\n";
            for(i=0;i<7;i++)
            {
            cout<<"enter guessing number: ";
            cin>>guessing_number;
            cout<<endl;
            if(guessing_number>secret_number)
            {
                cout<<"guessing number is greater than secret number!! guess smaller number!!\n\n";
                
            }
            else if(guessing_number<secret_number)
            {
                cout<<"guessing number is smaller than secret number!! guess greater number!!\n\n";
        
            }
            else if(guessing_number==secret_number)
            {
                cout<<"great!! you guessed correctly!!\n\n";
        
                break;
            }
           }
            if(guessing_number!=secret_number) 
            {
                cout<<"sorry !! you failed to get it!!\n\n";
                
            }
            break;
        case 3:
            cout<<"\noh!! it's hard level so you have only 5 chances...\n\n";
            for(i=0;i<5;i++)
            {
            cout<<"enter guessing number: ";
            cin>>guessing_number;
            cout<<endl;
            if(guessing_number>secret_number)
            {
                cout<<"guessing number is greater than secret number!! guess smaller number!!\n\n";
                
            }
            else if(guessing_number<secret_number)
            {
                cout<<"guessing number is smaller than secret number!! guess greater number!!\n\n";
    
            }
            else if(guessing_number==secret_number)
            {
                cout<<"great!! you guessed correctly!!\n\n";
                
                break;
            }
            }
            if(guessing_number!=secret_number) 
            {
                cout<<"sorry !! you failed to get it!!\n\n";
        
            }
            break;
        default:
              cout<<"sorry!! invalid input...";
              break;
        
        } 
    
    cout<<endl;
    cout<<"do u want to play again ?? if yes press 1: ";
    cin>>n;
    }
    
    return 0;
}