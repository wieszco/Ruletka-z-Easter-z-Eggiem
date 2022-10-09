#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

main()
{
srand(time(NULL));
int zl, n, r, w, a;
n=0;
a=0;
r=0;
float tablica1[9];
float tablica2[9];
cout<< "-----Ruletka-----"<< endl;

for(zl=100; zl>0; zl=zl-n)
{
    w=0;
    cout << "Pozostalo ci "<<zl<<" pieniedzy na koncie, obstaw swoja stawke:"<<endl;
    cout<<"10zl"<<endl;
    cout<<"20zl"<<endl;
    cout<<"50zl"<<endl;
    cout<<"100zl"<<endl;
    cin>>n;
    if(n!=10 && n!=20 && n!= 50 && n!=100)
    {
cout <<"Obstawiles nie wlasciwa liczbe pieniedzy"<<endl;
cout <<"Naucz sie pisac"<<endl;
break;
    }
    cout<<" Obstaw swoje 10 liczb (od 69 do 420):"<<endl;
    cout<<"_______________________________________"<<endl<<endl<<endl;
    for(int i=0; i<10; i+=1)
    {
        cin>>tablica1[i];
    }
    for (int i=0; i<10; i+=1)
    {
       tablica2[i] = rand()%351 +70;
    }
    for (int i=0; i<10; i+=1)
    {

     if (i == 9)
     {
      i=0;
      a++;
     }
     if (a==10)
     {
      i=10;
     }
     if(tablica1[i]==tablica2[a])
     {
      w++;
     }
    }
    cout<<"Wygrales: "<<w<<" razy, a przegrales "<<10-w<<" razy"<<endl;
    cout<<"Twoje liczby:"<<endl;
    for(int i=0; i<10; i++)
    cout<< tablica1[i]<<endl;

    cout<<"Wylosowane liczby:"<<endl;
    for(int i=0; i<10; i++)
    cout<< tablica2[i]<<endl;
      if(w!=0)
    zl=zl+w*n;
    r++;
     }

  cout<<"Zagrales "<<r<<" razy"<<endl;
       if(tablica1[0]==278 && tablica1[1]==278)
     {
      cout<<"Kontowersyjna liczba"<<endl;
     }
    }


