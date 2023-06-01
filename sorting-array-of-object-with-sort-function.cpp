#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(Student a, Student b){
    if(a.marks<b.marks) return true;
    else return false;
}
int main(){
    Student a[3];
    for(int i=0; i<3; i++){
        getline(cin, a[i].name);
        cin>>a[i].marks>>a[i].roll;
        cin.ignore();
    }

//sort using sort function
sort(a, a+3,cmp);
    
//display
    for(int i=0; i<3; i++){
        cout<<a[i].name<<" "<<a[i].marks<<" "<<a[i].roll<<endl;
    }
    

    return 0;
}