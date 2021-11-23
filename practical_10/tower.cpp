#include <iostream>
using namespace std;

void towers(int, int, int, int);

int main()
{
    int num;

    cout<<"Enter the number of disks : ";
    cin>>num;
    cout<<"The sequence of moves involved in the Tower of Hanoi are :n";
    towers(num, 1, 3, 2);
    return 0;
}
void towers(int num, int frompeg, int topeg, int notusedpeg)
{
    if (num == 1)
    {
        cout<<"n Move disk 1 from peg "<<frompeg<<" to peg "<<topeg;
        return;
    }
    towers(num - 1, frompeg, notusedpeg, topeg);
    cout<<"n Move disk "<<num<<" from peg "<<frompeg<<" to peg "<<topeg;
    towers(num - 1, notusedpeg, topeg, frompeg);
}