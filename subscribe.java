import java.util.scanner;

class subscribe{
     public static void main(String args[]){
    // System.out.println("hello world");
     String s ="shahina";
      char ch[]=s.toCharArray();

      for(int i=0; i<=ch.length; i=i++){
       
        if(i%2!=0){
          char c=toUpperCase(ch[i]);
         
         System.out.println(c);
        }
        else{
            System.out.println(ch[i]);
        }

      }
   
     }
}