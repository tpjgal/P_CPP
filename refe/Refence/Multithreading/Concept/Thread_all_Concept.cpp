#include<iostream>
#include<mutex>
#include<thread>
#include<chrono>
#include<future>
using namespace std;

void func()                            // mutex. 
{     mutex mtx;
      mtx.lock();
      cout<<"Mutex locked...."<<endl;
      mtx.unlock();
}

void func2(int &count, mutex &mtx)       // funciton pointer. 
{
    for (int i=0 ; i <3; i++)
    {
        mtx.lock();
        cout<<"Function with Argument.... "<<endl;
        ++count;
        mtx.unlock();
    }
}

void fun3()
{
    for(int i=3;i>0;i--)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));   // Chrono.
        cout<<i<<endl;
    }
}


class Myclass{
    
    public: 
         void operator()(){
             
             cout<<"function object without argument  called"<<endl;
         }
};
class Otherclass{
    public:
        void operator() (int n)
        {
            cout<<"function object with argument called" <<endl;
        }
};

int fun6(int n)
{
    return n*n;
}


                                          // Call Once
std::once_flag	flag;
std::mutex		mu;

void func7()
{
    std::call_once(flag, []() { std::lock_guard<std::mutex> locker(mu);   // call once
	std::cout << "I am called once ..." << std::endl; });

	std::lock_guard<std::mutex>	locker(mu);                        // call each 
	std::cout << "I am called each time ..." << std::endl;
}
int main()
{
    
    std::thread th(func);                     // function call.
    cout<<"Simple thread and Joinable concept:"<<endl;
     cout<<"Thread id :" << std::this_thread::get_id()<<endl;
    if(th.joinable())                        // joinable()
    {
      th.join();                               // join()
    }
    
    
    mutex mtx;                               // Mutex. 
    int count =0;
    std:: thread th1(func2,ref(count), ref(mtx));   // funciton passing argumnet as mutex.
    cout<<"Thread created function with parameter and mutex concept:"<<endl;
     cout<<"Thread id :" << std::this_thread::get_id()<<endl;
    if(th1.joinable())
    {
       th1.join();
    }
    cout << "No. count :"<<count << endl;
    
    
    std::thread th3(fun3);
    cout<<"Thread created for chrono"<<endl;
     cout<<"Thread id :" << std::this_thread::get_id()<<endl;
    th3.join();
    
    auto fun4=[](int n){                        // callable - lambda expression with argument. 
         for( int i = 0 ;i<n;i++)
         {
             cout<<i<<endl;
         }
    };
     auto fun5=[](){                        // callable - lambda expression without argumnet. 
         for( int i = 0 ;i<3;i++)
         {
             cout<<i<<endl;
         }
    };
    std::thread th4(fun4,3);
    cout<<"lambda expression"<<endl;
     cout<<"Thread id :" << std::this_thread::get_id()<<endl;
    std::thread th5(fun5);
    cout<<"Thread created for callable concept:"<<endl;
    th4.join();
    th5.join();
    
    Myclass obj;
    std::thread th6(ref(obj));                          // callable - function object without argumnet.
    th6.join();
    Otherclass obj1;
    std::thread th7(Otherclass(), 3);         // without object - directly call the function // callable - function object with argumnet.
    th7.join();
     
     
    future<int> f1 = async(launch::async, fun6, 5);                      // async 
    cout<<"future concept: "<<f1.get()<<endl;
    
    cout<<"Hardware Concurrency concept:"<<endl;
    cout<<thread::hardware_concurrency()<<endl;       // Hardware Concurrency.
    
    
    
    cout<<"Thread id :" << this_thread::get_id()<<endl;    // get this thread id.
   
   
   cout<<"Call once concept:"<<endl;
   std::thread th8 (func7);               // Call once 
   std::thread th9 (func7);
   
   th8.join();
   th9.join();
   
   
    return 0;
}