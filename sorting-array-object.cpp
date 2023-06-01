#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};
int main(){
    Student a[3];
    for(int i=0; i<3; i++){
        getline(cin, a[i].name);
        cin>>a[i].marks>>a[i].roll;
        cin.ignore();
    }
    
    //selection sort
    for(int i=0; i<2; i++){
        for(int j=i+1; j<3;j++){
            if(a[i].marks<a[j].marks){
                swap(a[i], a[j]);
            }
        }
    }
//display
    for(int i=0; i<3; i++){
        cout<<a[i].name<<" "<<a[i].marks<<" "<<a[i].roll<<endl;
    }
    

    return 0;
}