#include <iostream>;
using namespace std;

int main()
{
    cout << "insert number ";
    int a;
    cin >> a;
    int counter = 1;
    int i= 1;
    while(counter <=a)
    {
    
       if(i % 2 == 0)
       {
        cout << i << endl;
        counter ++;
       }
       
       i ++ ; 
    } 
    

 system ("pause");
}