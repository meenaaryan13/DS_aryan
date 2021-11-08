class one 
{
    void show()
    {
        System.out.println(" call 1");
    }
}
class two extends one
{
     void show()
     {
         System.out.println("call 2");
     }   
}

public class three {

   public static void main(String[] args) {
       
    //    one a1=new one();
    //    a1.show();

       two a2=new two();
       a2.show();

   }
}
