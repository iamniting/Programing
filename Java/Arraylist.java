import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Arraylist
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        ArrayList <Integer> list= new ArrayList <Integer>();
        Iterator itr;
        
        int n = sc.nextInt();
        
        for(int i=0; i<n; i++)
        {
            int a = sc.nextInt();
            list.add(a);
        }
        
        
        for( itr = list.iterator(); itr.hasNext(); )
        {
            int a = (Integer)itr.next();
            if(a > 0)
            System.out.println(a);
        }
        
        
        list.clear();
        itr = list.iterator();
        if(itr.hasNext())
            System.out.println("Not Empty");
    }
}
