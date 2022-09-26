import java.util.Scanner;
public class Alternate{

 public static void main(String[] args) {
  Scanner cs=new Scanner(System.in);
  String str1;
  System.out.println("Enter your String:");
  str1=cs.nextLine();
  char[] str=str1.toCharArray();
  int j=0;
  
  for(int i=0;i<str.length;i++)
     {
         if(j%2==1){
         
   if(str[i]>64 && str[i]<91 )
    str[i]=(char)((int)str[i]+32);
         }
         else{
             if(str[i]>96 && str[i]<123 )
              str[i]=(char)((int)str[i]-32);
         }
         if(str[i]==' ')
         {
           continue;
         }
         j++;
     }
  System.out.print("After Converting String is : ");
  for(int i=0;i<str.length;i++)
  System.out.print(str[i]);
  cs.close();
 }
}