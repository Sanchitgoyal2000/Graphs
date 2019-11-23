class Traversal
{
    static void bfs(int s, ArrayList<ArrayList<Integer>> l, boolean vis[])
    {
      // add your code here
      Queue <Integer>q=new LinkedList<>();  //here bfs is only for connected graph
      q.add(s);
      vis[s]=true;
      while(!q.isEmpty())
          {
              int temp=q.poll();

             System.out.print(temp+" ");
              for(int j=0;j<l.get(temp).size();j++)
              {
                 if(vis[l.get(temp).get(j)]==false)
                 {
                     q.add(l.get(temp).get(j));
                     vis[l.get(temp).get(j)]=true;
                 }
              }
          }

    }
}
-----------------------------------------------------
//for disconnected graph
import java.util.*;
import java.lang.*;
import java.io.*;

class Driverclass
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t =sc.nextInt();
        while(t-- > 0)
        {
            ArrayList<ArrayList<Integer>> list = new ArrayList<>();
            int nov = sc.nextInt();
            int edg = sc.nextInt();

            for(int i = 0; i < nov; i++)
                list.add(i, new ArrayList<Integer>());

            for(int i = 1; i <= edg; i++)
            {
                int u = sc.nextInt();
                int v = sc.nextInt();
                list.get(u).add(v);
            }
            boolean vis[] = new boolean[nov];
            for(int i = 0; i < nov; i++)
                vis[i] = false;
            new Traversal().bfs(0, list, vis, nov);
            System.out.println();
        }
    }
}

class Traversal
{
    static void bfs(int s, ArrayList<ArrayList<Integer>> l, boolean vis[], int nov)
    {
       // add your code here
       Queue <Integer>q=new LinkedList<>();
       q.add(s);
       vis[s]=true;
       for(int i=0;i<=l.size();i++)
       {
           while(!q.isEmpty())
           {
               System.out.print(q.peek()+" ");

               int temp=q.poll();

              for(int j=0;j<l.get(temp).size();j++)
              {
                 if(vis[l.get(temp).get(j)]==false)
                 {
                     q.add(l.get(temp).get(j));
                     vis[l.get(temp).get(j)]=true;
                 }
              }
           }
            if(i!=l.size()&&vis[i]==false)
               q.add(i);
       }
    }
}
