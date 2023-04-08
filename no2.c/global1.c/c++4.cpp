#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << " enter num :";
    cin >> num;
    if (num %15==0)
    {
        cout << "divisible is:"<< num;
    }
    else
    {
        cout <<"not divisible is :"<<num;
            }
}