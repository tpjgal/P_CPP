#include <iostream>

using namespace std;

class Singleton
{
 private:
       static Singleton *instance;
	   int data;
 private:
        Singleton() {}
		
  public:
      static Singleton *Instance()
	  {
	  
	      if(instance == NULL)
		  {
		     instance = new Singleton();
		  }
		  
		  return instance;
		}
		
		void SetData(int value)
		{
		   data = value;
		}
		 
		int GetData()
		{
			return data;
		}
		
};

Singleton *Singleton::instance = NULL;

int main()
{
    Singleton::Instance()->SetData(10);
	cout<< "Data = " <<Singleton::Instance()->GetData() <<"\n";
	
	return 0;
	
}
		 
			 
			 