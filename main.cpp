//
// Created by jurba on 28.10.2026.
//


#include <iostream>
#include <string>
#include<math.h>
using namespace std;

int main() {
    // zad 1
    // int a,b;
    // cin>>a;
    // cin>>b;
    // if (a==b) {
    //     cout<<"a=b"<<endl;
    // } else if (a>b) {
    //     cout<<"a>b"<<endl;
    // } else {
    //     cout<<"a>b"<<endl;
    // }
    // return 0;

    //zad 2
    // int a,b;
    // cin>>a;
    // cin>>b;
    // if (a==b) {
    //     cout<<"a=b"<<endl;
    // } else  {
    //      if (a>b) cout<<"a>b"<<endl;
    //      else cout<<"a>b"<<endl;
    // }
    // return 0;

    // zad 3
    // float r;
    // cin>>r;
    // if (0.7<=r && r<=1.0) {
    //     cout << " Bardzo silna korelacja dodatnia"<<endl;
    // } else if (r>=0.5 && r<0.7) {
    //     cout << "silna korelacja dodatnia"<<endl;
    // } else if (r >=0.3 && r<0.5) {
    //     cout << "umiarkowana korelacja dodatnia"<<endl;
    // } else if (r>=0.2 && r<0.5) {
    //     cout << " slaba korelacja dodatnai"<<endl;
    // } else if (r>=0 && r<0.2) {
    //     cout << "brak korelacji"<<endl;
    // } else {
    //     cout << "Nieprawidlowe dane wejsciowe. Wpisz liczbe od 0.0 do 1.0"<<endl;
    // }
    // return 0;

    //zad 4
    // float a,b;
    // char ch;
    //
    // cout << "Podaj pierwsza liczbe: ";
    // cin >>a;
    // cout << "Podaj operacje (+, -, *, /): ";
    // cin >> ch;
    // cout << "Podaj drugą liczbe: ";
    // cin >> b;
    //
    // if (ch == '+') {
    //     cout << a+b << endl;
    // } else if (ch == '-') {
    //     cout << a-b << endl;
    // } else if (ch == '*') {
    //     cout << a*b << endl;
    // } else if (ch == '/') {
    //     cout <<a/b<< endl;
    // } else {
    //     cout << "nieprawidlowa operacja"<<endl;
    // }
    //
    // return 0;

    // //zad 5
    // for (int i = 0; ; i++) {
    //     cout << i << endl;
    // }
    // return 0;


    // zad6
    // float a,b;
    // char ch;
    // while (true) {
    //     cout << "Podaj pierwsza liczbe (aby wyjśc wpisz 'e'): ";
    //     cin >>a;
    //     cout << "Podaj operacje (+, -, *, /): ";
    //     cin >> ch;
    //     cout << "Podaj drugą liczbe: ";
    //     cin >> b;
    //
    //     if (ch == '+') {
    //         cout << a+b << endl;
    //     } else if (ch == '-') {
    //         cout << a-b << endl;
    //     } else if (ch == '*') {
    //         cout << a*b << endl;
    //     } else if (ch == '/') {
    //         cout <<a/b<< endl;
    //     } else if (ch == 'e') {
    //         break;
    //     } else {
    //         cout << "nieprawidlowa operacja"<<endl;
    //     }
    // }
    //
    // return 0;
    //zad 7
    // int i = 0;
    // while (true) {
    //     if (i==200) {
    //         break;
    //     }
    //     if (i % 2 == 0) {
    //         continue;
    //     }
    //     cout << i << endl;
    //     i++;
    // }
    // return 0;

    //zad 8
    // int n;
    // cin >> n;
    // for (int i = 2; i<=sqrt(n);i++) {
    //     if (n%i ==0) {
    //         cout << i << endl;
    //         break;
    //     }
    // }
    // return 0;
    //
    // //zad 9
    // int temp;
    // cin >>temp;
    // if (temp <0) {
    //     cout<< "mróz"<<endl;
    // } else if (temp <10 && temp >=0) {
    //     cout<< "zimno"<<endl;
    // } else if (temp <20 && temp >=10) {
    //     cout<< "umiarkowanie"<<endl;
    // } else if (temp <30&& temp >=20) {
    //     cout<< "ciepło"<<endl;
    // } else  {
    //     cout<< "gorąco"<<endl;
    // }
    // return 0;
    // // zad 10
    // int a,b,c;
    // cin >> a >> b >> c;
    // if (a>=b && a>=c) {
    //     cout<<"a jest najwieksze"<<endl;
    // }
    // if (b>=a && b>=c) {
    //     cout<<"b jest najwieksze"<<endl;
    // }
    // if (c>=b && c>=a) {
    //     cout<<"c jest najwieksze"<<endl;
    // }
    // return 0;
    //zad 11
    // int y;
    // cout<<"Podaj rok: ";
    // cin>>y;
    // if ((y%4==0 && y%100!=0) || (y%400==0)) {
    //     cout << "rok przestepny"<<endl;
    // }else {
    //     cout << "rok nie jest przestepny"<<endl;
    // }
    // return 0;

    //zad 12
    // int w;
    // cout<<"1 - start"<<endl;
    // cout<<"2 - ustawienia"<<endl;
    // cout<<"3 - pomoc"<<endl;
    // cout<<"4 - koiec"<<endl;
    //
    // cin >>w;
    // switch (w) {
    //     case 1:
    //         cout <<"uruchamianie"<<endl;
    //         break;
    //     case 2:
    //         cout <<"otwarto ustawinia"<<endl;
    //         break;
    //     case 3:
    //         cout <<"otwarto strone pomocy"<<endl;
    //         break;
    //     case 4:
    //         cout<<"wyłączanie"<<endl;
    //         break;
    //     default:
    //         cout<<"zły wybór"<<endl;
    //         break;
    // }
    // return 0;

    //zad 13
    // int ocena;
    // cin >>ocena;
    // switch(ocena) {
    //     case 1:
    //         cout<<"Niedostateczna"<<endl;
    //         break;
    //     case 2:
    //         cout<<"dopuszczalna"<<endl;
    //         break;
    //     case 3:
    //         cout<<"dostateczna"<<endl;
    //         break;
    //     case 4:
    //         cout<<"dobra"<<endl;
    //         break;
    //     case 5:
    //         cout<<"bardzo dobra"<<endl;
    //         break;
    //     default:
    //         cout<<"wprowadzono zlą ocene"<<endl;
    //         break;
    // }
    // return 0;

    // zad 14
    // int sum=0;
    // for (int i = 0; i<=100, i++) {
    //     if (i%3==0) {
    //         continue;
    //     }
    //     sum = sum + i;
    // }
    // cout << sum << endl;

    //zad 15
    // for (int i =1;;i++) {
    //     if (i%7==0 && i>50) {
    //         cout << i << endl;
    //         break;
    //     }
    // }
    // return 0;

    //zad 16
    // for (int i = 1; i <= 10; i++) {
    //     for (int j=1;j<=10;j++) {
    //         cout << i*j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    //zad 17
    // int n;
    // cin>>n;
    // int power =0;
    // while (true) {
    //     if (n < pow(10,power)) {
    //         cout << "liczba posiada "<<power<<" cyfr"<<endl;
    //         break;
    //     }
    //     power++;
    // }
    // return 0;

    //zad 18




}