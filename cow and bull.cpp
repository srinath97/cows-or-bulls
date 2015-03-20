//OM VINAYAKAYA NAMAHA
#include<iostream>
#include<conio.h>
#include<ctime>
#include<windows.h>
using namespace std;
int main()
{
    cout<<"\t\t\t COWS AND BULLS"<<endl<<endl;
    cout<<"COWS - letter repeated in different place"<<endl;
    cout<<"BULLS - letter repeated in same place"<<endl<<"GUESS THE WORD IN 15 CHANCES"<<endl<<endl;
    char a[19][5]={{"duck"},{"dear"},{"deal"},{"fear"},{"lier"},{"rest"},{"best"},{"stir"},{"rent"},{"late"},{"tale"},{"tied"},{"tear"},{"time"},{"tyre"},{"left"},{"find"},{"dogs"},{"cats"}};
    int i,j,k=0,z;
    unsigned int s;
    time_t t;
    s=time(&t);
    srand(s);
    z=rand()%19;
    for(i=1;i<=10;i++)
    {
         char b[5]; 
         cout<<"Enter a guessing 4 letter word with no letter repeated ";
         cin.getline(b,5);
         for(j=0;j<4&&a[z][j]==b[j];j++)
         {}
         if(a[z][j]==b[j])
         {
              cout<<endl<<endl<<"\t\t\t\CORRECT GUESS!!!!!!!";
              i=12;
         }
         else
         {
             k=0;
             for(j=0;b[j];j++)
             {
                 if(a[z][j]==b[j])
                 {
                       k++;
                        b[j]=1;
                 }
             }
             cout<<"\t BULLS : "<<k<<endl;
             int l;
             k=0;
             for(j=0;b[j];j++)
             {
                 if(b[j]!=1)
                 {
                      for( l=0;a[z][l];l++)
                      {
                           if(a[z][l]==b[j])
                           {
                                k++;
                                b[j]=1;
                           }
                      }
                 }
             }
             cout<<"\t COWS : "<<k<<endl;
             cout<<"YOU HAVE "<<10-i<<" chances left !!!!!!"<<endl<<endl;
         }
    } 
    if(i==11)
    {
            cout<<"The answer is ";
            for( k=0;k<4;k++)
                cout<<a[z][k];
    }
    getch();
    return 0;
}     
