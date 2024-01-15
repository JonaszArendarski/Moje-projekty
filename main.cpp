#include <iostream>

using namespace std;

int main()
{
    string tekst;
    int klucz,n;
    cout<< "podaj tekst";
    cin>>tekst;
    cout<< "podaj klucz :  ";
    cin>>klucz;
    klucz=klucz%26;
    n=tekst.size();
    for(int i=0;i<n;i++)
    {
        if(tekst[i]>122-klucz)
        {
            cout<<tekst[i]<<"  .  ";
            tekst[i]=(char)((int)tekst[i]-26);
            cout <<tekst[i]<<endl;
        }
        else
        {
            tekst[i]=(char)((int) tekst[i] +klucz);
        }
    }
    cout<<endl;
    return 0;
}
