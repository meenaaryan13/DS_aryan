public class overloading {

        void dog(int a, String b) 
        {
            System.out.println(" The dog1 method ");
        }
    
        void dog(String a, int b)
        {
            System.out.println(" THe dog2 method");
        }
    
        public static void main(String[] args)
         {
    
            overloading A = new overloading();
            A.dog("abc",12);
    
        }
    
    

    
}
