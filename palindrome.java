import java.util.*;
 public class Palindrome
{
    public static void main(String args[])
    {
        int num,temp,sum;
        Scanner in=new Scanner(System.in);
         
       
        System.out.print("Enter any integer number: ");
        num= in.nextInt();
         
       
        temp=num;
        sum =0;
        while(temp>0)
        {
            sum = (sum*10) + (temp%10);
            temp/=10;
        }
         
      if(num==sum)
            System.out.println(num + " is a Palindrome Number.");
        else
            System.out.println(num + " is not a Palindrome Number.");
    }
}
