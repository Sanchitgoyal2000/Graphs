class Traversal
{
    static void dfs(int src, ArrayList<ArrayList<Integer>> list, boolean vis[])
    {
           if(vis[src]==false)
           {
               print(src,list,vis);
           }
    }
    public static void print(int sv,ArrayList<ArrayList<Integer>> list,boolean vis[])
    {
        System.out.print(sv+" ");
        vis[sv]=true;
        for(int i=0;i<list.get(sv).size();i++)
        {
            if(vis[list.get(sv).get(i)]==false)
            {
                print(list.get(sv).get(i),list,vis);
            }
        }
    }
}
