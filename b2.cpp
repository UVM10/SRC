#include<iostream>
using namespace std;
#include <string.h>
class Lop
{
    public:
        class SinhVien
        {
        private:
        char ten[999];
        int mssv;
        public:
        void nhap();
        void hien();
    };
    void themsv();
    void indanhsachsv();
    private:
    int siso=0;
    SinhVien DSlop[999];
} ;
void Lop::SinhVien::nhap()
{
    cout << "Ma:" ; cin >> mssv;
    cin.ignore();
    cout << "Ten:"; cin.getline(ten,999);
}
void Lop::SinhVien::hien()
{
cout << "Ma:"<< mssv << endl ;

cout << "Ten:" << ten << endl;
}
void Lop::themsv()
{
    DSlop[siso].nhap();
    siso++;
}
void Lop::indanhsachsv()
{
    for (int i=0;i<siso;i++)
    {
        DSlop[i].hien();
    }    
}
int main() {
    Lop ettn;
    ettn.themsv();  
    return 0;
}
