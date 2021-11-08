

 class exam
    {
        void dog(int a, String b) 
        {
            System.out.println(" The dog1 method ");
        }
    
        void dog(int a, int b)
        {
            System.out.println(" THe dog2 method");
        }
    
        public static void main(String[] args)
         {
    
            exam A = new exam();
            A.dog(12, "abc");
    
        }
    
    }
