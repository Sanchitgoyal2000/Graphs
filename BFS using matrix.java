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
	   int src=0;
	   boolean vis[]=new boolean[n];
	   print(src,edges,vis);
	}
	public static void print(int src,int edges[][],boolean vis[])
	{
	    Queue<Integer>q=new LinkedList<>();
	    q.add(src);
	    vis[src]=true;
	    while(!q.isEmpty())
	    {
	        int temp=q.poll();
	        System.out.println(temp);
	        for(int i=0;i<edges.length;i++)
	        {
	            if(edges[temp][i]==1&&vis[i]==false)
	            {
	                q.add(i);
	                vis[i]=true;
	            }
	        }
	    }
	}
}