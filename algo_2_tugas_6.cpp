#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
using namespace::std;

int makanan(int a)
{
    long int b;
    if(a==1) b=29000;
    else if(a==2) b=31000;
    else if(a==3) b=29000;
    else if(a==4) b=29000;
    else if(a==5) b=35000;
    else if(a==6) b=29000;
    else if(a==7) b=29000;
    else if(a==8) b=29000;
    return b;
}
double semua(int c,int d)
{
    long double itungan;
    itungan=c*d;
    return itungan;
}
void daftar()
{
    cout<<"================ daftar menu fishstreat ===================\n";
cout<<"1. Fish n Chips \n";
cout<<"2. Mariana Sauce \n";
cout<<"3. Chicken Creammy Fettucine \n";
cout<<"4. Mac 3 Cheese \n";
cout<<"5. Seafood Platter \n";
cout<<"6. Grilled Shrimps \n";
cout<<"7. Crispy Calamary \n";
cout<<"8. Grilled Calamary \n";
cout<<"===========================================================\n\n";
}
void promo(int k,int l)
{
    int m,n;
    m=0.2*k;
    n=l-m;
    cout<<"potongan promo = "<<m;cout<<endl;
    cout<<"harga setelah potongann = "<<n;cout<<endl;
}


main(){
    int e,f,g;
    int nm[10];
    int h=0;
daftar();
cout<<"berapa jenis makanan yang ingin dipesan : ";cin>>e;

for(f=1; f<=e; f++)
{
    cout<<"nomor makanan yang dipesan : ";cin>>nm[f];
    cout<<"harga makanan : "<<makanan(nm[f]);cout<<endl;
    cout<<"jumlah makanan : ";cin>>g;
    cout<<semua(g,makanan(nm[f]));cout<<endl;
    h=h+semua(g,makanan(nm[f]));
}
cout<<"total harga yang harus dibayar = "<<h;cout<<endl;
promo(h,h);
}
