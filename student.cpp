#include<bits/stdc++.h>
using namespace std;


struct Student {


   string name;
   int balance;
   bool isMale;
     int getAge()
   {
       return age;
   }
   void setAge(int data)
   {
       age = data;
   }
   private:
   int age;
 


};
// void printStudent(Student stu)
// {
//           cout<<"Student's name: " <<stu.name<<endl;
//           cout<<"Student's age: "<<stu.age<<endl;
//           cout<<"Student's is Male: "<<stu.isMale<<endl; 
// }

int main()
{
  Student vaibhav;
  Student ayush;



   vaibhav.name = "Vaibhav";
   vaibhav.isMale = true;
   vaibhav.setAge(19);

   cout<<vaibhav.getAge();
//    ayush.name = "Ayush";
//    ayush.age = 22;
//    ayush.isMale = true;

   
    //  printStudent(ayush);
    // cout<<ayush.getAge()<<endl;
    // cout<<vaibhav.getAge();

return 0;
}