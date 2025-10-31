#include <iostream>
using namespace std;
int main(){
   int dizi[5],ciftsayilar=0,teksayilar=0,pozitifsayilar=0,negatifsayilar=0;
    for(int i=0;i<5;i++){
        cout<<i+1<<". sayiyi giriniz: ";
        cin>>dizi[i];
    }
        for(int i=0;i<5;i++){
            if(dizi[i]<0 && dizi[i]%2!=0){
                cout<<i+1<<". sayi tek negatif sayidir. ("<<dizi[i]<<")"<<endl;
                negatifsayilar++;
                teksayilar++;   
            }
            else if(dizi[i]<0 && dizi[i]%2==0){
                cout<<i+1<<". sayi cift negatif sayidir. ("<<dizi[i]<<")"<<endl;
                negatifsayilar++;
                ciftsayilar++;
            }
            else if(dizi[i]>0 && dizi[i]%2!=0){
                cout<<i+1<<". sayi tek pozitif sayidir. ("<<dizi[i]<<")"<<endl;
                pozitifsayilar++;
                teksayilar++;
            }
            else if(dizi[i]>0 && dizi[i]%2==0){
                cout<<i+1<<". sayi cift pozitif sayidir. ("<<dizi[i]<<")"<<endl;
                pozitifsayilar++;
                ciftsayilar++;
            }

        }

            cout<<"negatif sayi adedi: "<<negatifsayilar<<endl;
            cout<<"pozitif sayi adedi: "<<pozitifsayilar<<endl;
            system("pause");
           
}