


AbstractClass
{
   public:
       void TemplateMethod()
	   {
	     PrimitiveOperation();   
	   }
	virtual void PrimitiveOperation() =0;
	
}

ConcreteClass : AbstractClass
{
     public:
		void PrimitiveOperation()
		{
		
		}
}


main()
{
		AbstractClass * obj = new ConcreteClass();
		obj->TemplateMethod();
}