import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Main {


 public static void main(String[] args) throws Exception{
        Scanner in = new Scanner(System.in);
        int n;
        n = in.nextInt();
        String str;
        str=in.next();
        int maxSaved=0;
        for(int i=3;i<n;i++)
        {
            int flag=1,j;
            int temp=i;
            for(j=i/2;j>=0;j--)
            {     
                if(!((str.charAt(j))==((str.charAt(temp)))))
                {      
                    flag=-1;
                    break;
                }
                temp=temp-1;
            }     
            if(flag == 1)
            maxSaved=Math.max(maxSaved,(i+1)/2);
        }
        if(maxSaved!=0)
        System.out.println((n-(2*maxSaved))+1+maxSaved);
        else System.out.println(n);
   }
}