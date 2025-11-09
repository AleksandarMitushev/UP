#include <iostream>;
using namespace std;

int main()
{
    cout<< "insert number ";
    int a;
    cin >> a;
    int counter = 1; 
    for( int i=1; counter <= a; i++  )
    {
        if(i % 2 != 0 )
        { 
            cout << i << endl; 
            counter++; 

        }
         
    } 
    system("pause");
}