#include<iostream>
#include<string>
using namespace std;

int main(){
    string a[100];
    int i=0, run, m=6, extra=0;
    static int total_run = 0;
    static int total_wick = 0;
    cout<<"ENTER 1.TO 0 RUN"<<endl;
    cout<<"ENTER 2.TO 1 RUN"<<endl;
    cout<<"ENTER 3.TO 2 RUN"<<endl;
    cout<<"ENTER 4.TO 3 RUN"<<endl;
    cout<<"ENTER 5.TO 4 RUN"<<endl;
    cout<<"ENTER 6.TO 6 RUN"<<endl;
    cout<<"ENTER 7.TO Wicket"<<endl;
    cout<<"ENTER 8.TO Wide ball"<<endl;
    cout<<"ENTER 9.TO No ball"<<endl;

    do{
        cout<<"\nEnter the ball "<<(i+1)<<" score :"<<"  ";
        cin>>run;
        switch (run)
        {
        case 1:
            a[i]="0";
            i++; 
            total_run += 0;
            break;
        case 2:
            a[i]="1";
            i++; 
            total_run += 1;
            break;
        case 3:
            a[i]="2";
            i++; 
            total_run += 2;
            break;
        case 4:
            a[i]="3"; 
            i++; 
            total_run += 3;
            break;
        case 5:
            a[i]="4";
            i++; 
            total_run += 4;
            break;
        case 6:
            a[i]="6";
            i++; 
            total_run += 6;
            break;
        case 7:
            a[i]="w";
            i++; 
            total_wick++;
            break;
        case 8:
            a[i]="Wd";
            i++; 
            m++;
            total_run += 1;
            extra++;
            break;
        case 9:
            a[i]="Nb";
            i++; 
            m++;
            total_run += 1;
            extra++;
            break;
        default:
            cout<<"Enter Proper data :";
            break;
        }
        cout<<"OVER :";
        for (int j=0; j<i; j++)
        {
            cout<<a[j]<<" ";
        } 
        cout<<endl;
    } while (i<m);

    cout<<endl;
    cout<<"<------SCORED BOARD------->"<<endl;
    cout<<"Total Score :"<<total_run<<"/"<<total_wick<<endl; 
    cout<<"Extra Run :"<<extra<<endl;
    cout<<"<------------------------->"<<endl;
}
