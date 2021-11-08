class all
{
    void show()
    {
        System.out.println(" Method  overraiding1 ");
    }
}


public class overraiding2 {
    void show()
    {
        System.out.println(" Method overraiding2");
    }

     public static void main(String[] args) 
    { 
         all o1 = new all();
         o1.show();
         
         overraiding2 o2=new overraiding2();
         o2.show();
    }
    
}
