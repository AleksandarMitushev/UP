#include <iostream>;
using namespace std;

int main()
{
 cout << "Insert a number from 2 to 9" << endl;
 int n;
 cout << "n=";
 cin >> n;
 if (n>=2 && n<=9 )
 {
   for(int i= 1; i <=n; i++)
   { 

     for(int a =1; a<= i; a++)
     {
      cout << a;  
     }
     for(int  b=1; b<= 3*n - 2*i; b++)
     {
         if(i==n)
         {
             cout << "-";
         }
         else 
         { 
             cout << " ";
         }
     }

    for(int c=i; c>=1; c--)  
    {
        cout << c;
    }
    
    cout << endl;
  }
    for(int d=1; d<=n-1; d++)
    {
       for(int e=1; e<=n-d ; e++)
       {
        cout << e;
       }
     
        for(int f= 1; f<=3*n - 2 * (n - d); f++ )
        {
           cout << " ";

        }
        

        for(int g=n-d; g>=1; g--)
        {
            cout << g;   
        }
        cout << endl;
       

       
    }




 }
 else  
 {
   cout << "not valid number ";
 }
 cout << endl;
 system("pause");
}