   #include <iostream>   
    using namespace std;  
    // dynamic memory allocation  
    class Demo  
    {  
        private:
        int a; // stack 
        int b;  // stack at compile time
        int *p; // getting memory from the heap at run time 
        
        public:  
        Demo(); // parameterless constructor 
        
        Demo(Demo &d);  // copy constructor
    
        void setdata(int x,int y,int z); // function to assign values to data members 
       
        void showdata();  // function to print values of data members 
        
    };
    // return type class name :: function name alomg with the parameters 
     Demo :: Demo() //constructor is called 
     {  
            p=new int;  // got memory from heap at run time
     } 
    Demo :: Demo(Demo &d) // copy constructor 
    {  
        a = d.a; // value of a for new object = value of a of existing object d 
        b = d.b;  
        p = new int;  // allocate memory from heap
        *p = *(d.p);  
    } 
        void Demo :: setdata(int x,int y,int z)  
        {  
            a=x;  
            b=y;  
            *p=z;  
        }  
        void Demo :: showdata()  
        {  
            cout << "value of a is : " <<a<< endl;  
            cout << "value of b is : " <<b<< endl;
            cout << "value of *p is : " <<*p<< endl; 
            cout << "Address of a "<<endl<<"which is allocated at compile time is : " <<&a<< endl;  
            cout << "Address of b "<<endl<<"which is allocated at compile time is : " <<&b<< endl;
            cout << "Address of p "<<endl<<"which is allocated at compile time is : " <<&p<< endl; 
            cout << "Address stored at p, "<<endl<<"which is the value assigned to p at run time using new is : " <<p<< endl;  
        }    
    int main()  
    {  
      Demo d1;  // created object d1, memory allocation for p is done
      cout<< "Enter the three values that you want to assign to object :";
      int n1,n2,n3;
      cin>>n1>>n2>>n3; 
      d1.setdata(n1,n2,n3);  
      Demo d2(d1); // create another object that is a copy of existing object i.e. d1
      d1.showdata(); 
      d2.showdata();  
      return 0;  
    }  
