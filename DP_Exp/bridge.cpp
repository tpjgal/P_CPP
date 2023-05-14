
OperationManageImp
{
   public:
  virtual void start()=0;

}

SystemOperationImp : OperationManageImp
{
  public: 
  void start()
  {
  }
}

ApplicatinOperationImp : OperationManageImp
{
 public:
	void start()
	{
	}
}
OperationManager
{
  OperationManageImp *opm;
  virtual void start() = 0;
}

SystemOperation : OperationManager
{
     SystemOperation()
	 {
	     opm = new SystemOperationImp();
		
	 }
	 void start()
	 {
	  opm->start();
	 }
}

ApplicationOperation : OperationManager
{
   ApplicationOperation()
   {
      opm = new ApplicatinOperationImp();
   }
   
   void startWhate
   {
      opm->start(); 
   }
}

main()
{
    OperationManageImp * opmimp;
	opmimp = new SystemOperation();
	opmimp->start();
	
	opmimp = new ApplicationOperation();
    opmimp->start();
}



/*
Question:

[1] Check all the objects are destoryed or not
[2] 

*/