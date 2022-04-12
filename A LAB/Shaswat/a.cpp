1.	Overload the operator ‘-‘(unary operator) via member function and friend function. 
CODE:
#include<iostream>
usingnamespacestd;

classA
{
private:
    int n;
public:
    voidgetdata(intx){
        n = x;
    }
    voidshowdata(void){
        cout<<"value of number with unary operator '-' is: "<< n;
    }
    voidoperator-(void)
    {
        n =-n;
    }
};
intmain()
{
    A obj1;
    obj1.getdata(10);
    -obj1;
    obj1.showdata();
    cout<<endl;
    return0;
}

OUTPUT:
 
2.	Overload the operator ++ as both prefix and postfix via the use of member function.
CODE:
#include<iostream>
usingnamespacestd;
classA {
private:
    inti;
public:
    A(inti=0){
        this->i=i;
    }
    Aoperator++(){  //PREFIX
        A a;
        a.i=++i;
        return a;
    }
    Aoperator++(int){  //POSTFIX
        A b;
        b.i=i++;
        return b;
    }
 
    voiddisplay(){
        cout<<"i = "<<i<<endl;
    }
};
intmain()
{   //PREFIX
    Aobj1(10) , obj3(10);
    cout<<"IN CASE OF PREFIX\n"<<"Before increment: ";
    obj1.display();
    A obj2 =++obj1;
    cout<<"After pre increment: ";
    obj2.display();
    //POSTFIX
    cout<<"\nIN CASE OF POSTFIX\n"<<"Before increment: ";
    obj3.display();
    A obj4 = obj3++;
    cout<<"After post increment: ";
    obj4.display();
}


OUTPUT:
 
3.	Overload the / and % (binary operators) via the use of member function and friend function. 
CODE:
#include<iostream>
usingnamespacestd;
classA
{
private:
    int x;
public:
    A() {}
    A(inti){
        x =i;
    }
    voidoperator/(Aa){
        int m = x /a.x;
        cout<<"The result of the divison of two numbers is : "<< m<<endl;
    }
    voidoperator%(Aa){
        int n = x %a.x;
        cout<<"The result of the modulus of two numbers is : "<< n;
}
};
intmain()
{
    A a1(20);
    A a2(4);
    a1 / a2;
    a1 % a2;
    return0;
}
OUTPUT:
 
4.	Overload the special operators >> and << to perform the intended task. 
CODE:
#include<iostream>
usingnamespacestd;
 
classDistance {
   private:
      int feet;             
      int inches;               
   public:
      Distance() {
         feet =0;
         inches =0;
      }
      Distance(intf, inti) {
         feet = f;
         inches =i;
      }
      friendostream&operator<<( ostream&output, constDistance&D ) { 
         output <<"F : "<<D.feet<<" I : "<<D.inches;
         return output;            
      }

      friendistream&operator>>( istream  &input, Distance&D ) { 
         input >>D.feet>>D.inches;
         return input;            
      }
};

intmain() {
   Distance D1(11, 10), D2(5, 11), D3;

   cout<<"Enter the distance in feet and inches : "<<endl;
   cin>> D3;
   cout<<"First Distance : "<< D1 <<endl;
   cout<<"Second Distance :"<< D2 <<endl;
   cout<<"Third Distance :"<< D3 <<endl;

   return0;
}
 
5. Overload the new and delete operators to perform the intended task
CODE:
#include<iostream>
usingnamespacestd;
classstudent
{
    string name;
    int age;
public:
    student()
    {
        cout<<"Constructor is called\n" ;
    }
    student(stringname, intage)
    {
        this->name= name;
        this->age= age;
    }
    voiddisplay()
    {
        cout<<"Name:"<< name <<endl;
        cout<<"Age:"<< age <<endl;
    }
    void*operator new(size_tsize)
    {
        cout<<"Overloading new operator with size: "<< size <<endl;
        void* p = ::operator new(size);
     
        return p;
    }
 
    voidoperatordelete(void*p)
    {
        cout<<"Overloading delete operator "<<endl;
        free(p);
    }
};
 
intmain()
{
    student * p =newstudent("vidushi",18);
    cout<<sizeof(student)<<endl;
    p->display();
    delete p;
}
OUTPUT:
