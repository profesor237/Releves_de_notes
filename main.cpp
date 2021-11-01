#include <iostream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    string matiere[100],decision[100],mention[100];
    float moyenne,nm,somme,note[100],mgp[100],coef[100];
    int i,n,sc,age;
    string nom,sexe,prenom,niveau,filiere,faculte;

    cout<< "\n\n\n";
    cout<<"\n| ----------------------------------------|";
    cout<<"\n| ****************************************|";
    cout<<"\n| *       RELEVE DE NOTE NGOA-EKELE      *|";
    cout<<"\n| ****************************************|";
    cout<<"\n|-----------------------------------------|";

    cout<<"\n\n entrez votre nom : ";
    cin>>nom;
    cout<<"\n\n entrez votre prénom : ";
    cin>>prenom;
    cout<<"\n entrer votre sexe: ";
    cin>>sexe;
    cout<<"\n\n Quelle faculte faites vous? : ";
    cin>>faculte;
    cout<<"\n Quelle est votre filiere?: ";
    cin>>filiere;
    cout<<"\n Le niveau:  ";
    cin>>niveau;
    system("cls");
    cout<<"\n\n ==> Binvenue dans le systeme de gestion des notes\n\n\n";
    cout<<"         --Entrez le nombre d'unite d'enseignement: ";
    cin>>n;
    cout<<"\n\n         --passons a lenregistrement des UEs\n\n";
    somme=0;
    sc=0;

     for (i=1;i<=n;i++)
   {
        cout<<" -Entrez la matière numero " <<i <<" : ";
        cin>>matiere[i];

   }
    cout<<" \n\n         --passons a l'enregistrement des credits de ces UEs ";

    for (i=1;i<=n;i++)
   {
       cout<<" \n-Entrez le credit de  "<< matiere[i]<<"  :  " ;
       cin>>coef[i];
       sc=sc+coef[i];
   }
   cout<<"\n Total des crédits: "<<sc<<"\n";
   system("pause");
   cout<<"\n\n passons a l'enregistrement des notes";

    for (i=1;i<=n;i++)
   {
        cout<<" \n-Entrez la note de  "<< matiere[i]<<"  : ";
        cin>>note[i];
        if(note[i]<35)
        {
           mgp[i]=0;
           decision[i]="ECHEC";
           mention[i]="E";
        }
        if(note[i]>=35 && note[i]<40)
        {
           mgp[i]=1;
           decision[i]="CANT";
           mention[i]="D";
        }
        if(note[i]>=40 && note[i]<45)
        {
           mgp[i]=1.3;
           decision[i]="CANT";
           mention[i]="D+";
        }
        if(note[i]>=45 && note[i]<50)
        {
           mgp[i]=1.7;
           decision[i]="CANT";
           mention[i]="C-";
        }
        if(note[i]>=50 && note[i]<55)
        {
           mgp[i]=2;
           decision[i]="CA";
           mention[i]="C";
        }
        if(note[i]>=55 && note[i]<60)
        {
           mgp[i]=2.3;
           decision[i]="CA";
           mention[i]="C+";
        }
        if(note[i]>=60 && note[i]<65)
        {
           mgp[i]=2.7;
           decision[i]="CA";
           mention[i]="B-";
        }
        if(note[i]>=65 && note[i]<70)
        {
           mgp[i]=3;
           decision[i]="CA";
           mention[i]="B";
        }
        if(note[i]>=70 && note[i]<75)
        {
           mgp[i]=3.3;
           decision[i]="CA";
           mention[i]="B+";
        }
        if(note[i]>=75 && note[i]<80)
        {
           mgp[i]=3.7;
           decision[i]="CA";
           mention[i]="A-";
        }
        if(note[i]>80)
        {
           mgp[i]=4;
           decision[i]="CA";
           mention[i]="A";
        }
   }
   for(i=1;i<=n;i++)
   {
       nm=mgp[i]*coef[i];
       somme=somme+nm;
   }

    moyenne = somme/sc;

    system("cls");
    cout<<"\n\n";
    cout<<"\n------------------------------------------------------------------------------";
    cout<<setw(20)<<"\n| NOMS: "<< nom << "                    | FACULTE: "<< faculte;
    cout<<setw(20)<<"\n| PRENON: "<< prenom << "                  | FILIERE: "<<filiere;
    cout<<setw(20)<<"\n| SEXE: "<< sexe << "                    | NIVEAU: "<<niveau;
    cout<<setw(20)<<"\n ------------------------------------------------------------------------------";

    cout<<"\n ________________________________________________________________________";
    cout<<"\n|  UEs           | NOTE/100   |    MGP/4  |   CREDIT  | DECION  | MENTION|";
    cout<<"\n|________________|____________|___________|___________|_________|________|\n\n";
    for(i=1;i<=n;i++)
    {
        cout<<setw(17)<<matiere[i]<<"|";
        cout<<setw(12)<<note[i]<<"|";
        cout<<setw(11)<<mgp[i]<<"|";
        cout<<setw(11)<<coef[i]<<"|";
        cout<<setw(9)<<decision[i]<<"|";
        cout<<setw(8)<<note[i]<<"|";
        cout<<"\n";
    }
    cout<<"\n\n             MOYENNE GENERALE PONDEREE: "<<moyenne;

    return 0;
}
