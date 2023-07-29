#include<iostream>
using namespace std;
// struct values
//     {
//         float radius;
//         float length;
//         float width;
//     };
// int main(){    
//     struct values m;
//     cout<<"enter the radius:";
//     cin>>m.radius;
//     cin>>m.length;
//     cin>>m.width;
//     float area_of_circle=3.14*m.radius*m.radius;
//     float area_of_rect=m.length*m.width;
//     cout<<"the area of circle is "<<area_of_circle<<endl;
//     cout<<"the area of rectangle is "<<area_of_rect<<endl;
// }                   

// typedef struct values
// {
//     float radius;
//     float length;
// }s;
// s cylinder;
// int main(){
//     cin>>cylinder.radius;
//     cin>>cylinder.length;
//     float vol_of_cyl=3.14*cylinder.radius*cylinder.radius*cylinder.length;
//     cout<<vol_of_cyl<<endl;
// }

// #define Factor 1.5

// typedef struct employee
// {
//     int id;  
//     string name;

//     struct  salary{
//         int base;
//         int bonus;
//         int hra;
//     }s;   
// }k;

// int main(){
//     k by;
//     int a,b,c,d,e;
//     a=by.s.base;
//     b=by.s.bonus;
//     c=by.s.hra;
//     cin>>by.id;
//     cin>>by.name;
//     cin>>a;
//     cin>>b;
//     cin>>c;

//     if (a<=20000){
//         b=a*Factor*b*c;
//     }
//     cout<<b;


// Array use in structures ...


// struct student {
//     int rollno;
//     int marks;
// }s={4,20};

// int main(){
//     struct student s1={2,40};
//     struct student s3[3];
//     for (int i=0;i<3;i++){
//         cout<<"Roll no: ";
//         cin>>s3[i].rollno;
//         cout<<"Enter Marks :";
//         cin>>s3[i].marks;
//     }
//     for (int i=0;i<3;i++){
//         cout<<s3[i].rollno;
//         if (s3[i].marks<10){
//             s3[i].marks*=2;
//             cout<<" "<<s3[i].marks<<endl;
//         }
//         else{
//         cout<<" "<<s3[i].marks<<endl;
//         }
//     }
//     cout<<s.rollno;
//     cout<<" "<<s.marks;
// }

// Nested structures ....

// struct dayofbirth{
//     int day;
//     int month;
//     int year;
// };
// struct student{
//     int id;
//     char name[10];
//     struct dayofbirth d;
// };
// int main(){
//     struct student s;
//     cin>>s.id;
//     cin>>s.name;
//     cin>>s.d.day;
//     cin>>s.d.month;
//     cin>>s.d.year;
//     cout<<s.id;
//     cout<<s.name;
//     cout<<s.d.day;
//     cout<<s.d.month;
//     cout<<s.d.year;
// }


// pointer in structures

// struct data{
//     int rollno;
//     int marks;
// };
// struct data s={1,20};
// int main(){
//     struct data *ptr=&s;
//     cout<<ptr->rollno;
//     cout<<" "<<ptr->marks<<endl;
// }