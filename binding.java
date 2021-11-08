
class Test 
{
   void dog(int a, int b) 
   {
      System.out.println(" The dog1 method ");
   }

   void dog(int a,String b) 
   {
      System.out.println(" THe dog2 method");
   }

   public static void main(String[] args) {

      Test A = new Test();
      A.dog(12, "abc");

   }

}