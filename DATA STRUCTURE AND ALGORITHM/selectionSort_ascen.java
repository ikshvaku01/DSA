import java.util.*;
public class selectionSort_ascen
{
   static void main()
   {
       Scanner sc=new Scanner(System.in);
       int n[]=new int[10]; 
       int c=0;
       for(int i=0;i<10;i++)
       {
           System.out.println("enter no.");
           n[i]=sc.nextInt();
       }
       for(int i=0;i<10-1;i++)
       {
           int min=i;
           
           for(int j=i+1;j<10;j++)
           {
               if(n[j]<n[min])
               min=j;
           }
           int temp=n[i];
           n[i]=n[min];
           n[min]=temp;
       }
       System.out.println("no.'s in ascending order are");
       for(int i=0;i<10;i++)
       {
           System.out.println(n[i]+" ");
       }
   }
}
