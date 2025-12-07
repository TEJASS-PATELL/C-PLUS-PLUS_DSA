#include<iostream>
#include<algorithm>
using namespace std;
class A{
public:
string name;
int age;
char gender;
float programminggrade;

A(string Name, int Age, char Gender, float Programminggrade){
    name = Name;
    age = Age;
    gender = Gender;
    programminggrade = Programminggrade;
}
};
bool comparebygrade(const A& s1, const A& s2){            //? It is for sorting and finding maximum grade element.
    return s1.programminggrade < s2.programminggrade;
}

bool comparebyName(const A& s1, const A& s2){              //? It is for sorting.
    return s1.name < s2.name;
}

int main(){
A student[4] = {
    {"Tejas",20,'M',8.1},
    {"Prince",20,'M',8.8},
    {"Female",18,'F',9.0},
    {"Femalee",18,'F',9.8}
};
for(int i = 0;i<4;i++){
    if(student[i].name == "Prince"){
        cout<<"Prince found at index at : "<<i<<endl;
        student[i].programminggrade = 9.9;
        break;
    }
}
     for(int i=0;i<4;i++){
        cout<<"Grade of student : "<<student[i].programminggrade<<endl;
}
sort(student , student+4 , comparebygrade);
    for(int i=0;i<4;i++){
        cout<<"Sorted array of student according to programminggrade "<<(student[i].programminggrade)<<" : "<<student[i].name<<endl;
}
sort(student , student+4 , comparebyName);
    for(int i=0;i<4;i++){
        cout<<"Sorted array of student according to name : "<<student[i].name<<endl;
}
A* maxgradestudent = max_element(student , student+4 , comparebygrade); //! Return pointer to the max element.
cout<<"MAXIMUM GRADE STUDENT IS : "<<maxgradestudent->programminggrade<<" "<<maxgradestudent->name<<endl;
A* mingradestudent = min_element(student , student+4 , comparebygrade); //! Return pointer to the max element.
cout<<"MINIMUM GRADE STUDENT IS : "<<mingradestudent->programminggrade<<" "<<mingradestudent->name<<endl;
}