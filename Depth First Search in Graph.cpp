import java.util.*;
public class Main
{
	public static void main(String[] args)
	{
	   int n,e;
	   Scanner ob=new Scanner(System.in);
	   n=ob.nextInt();
	   e=ob.nextInt();
	   int edges[][]=new int[n][n];
	   for(int i=0;i<e;i++)
	   {
	       int fv=ob.nextInt();
	       int sv=ob.nextInt();
	       edges[fv][sv]=1;
	       edges[sv][fv]=1;
	   }
	   print(edges);
	}

	public static void print(int edges[][])
	{
	    boolean visited[]=new boolean[edges.length];
	    for(int i=0;i<edges.length;i++)
	    {
	        if(!visited[i])
	        {
	            printHelper(edges,i,visited);
	        }
	    }
	}

	public static void printHelper(int edges[][],int sv,boolean visited[])
	{
	    int n=edges.length;
	    System.out.println(sv);
	    visited[sv]=true;
	    for(int i=0;i<n;i++)
	    {
	        if(edges[sv][i]==1&&visited[i]==false)
	        {
	            printHelper(edges,i,visited);
	        }
	    }
	}
}
