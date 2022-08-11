public class solution {
    static int poweredString(int a,int b, String s)
    {
        int max=0;
        String submax=new String();
        for(int i=s.length();i>0;i--)
        {
            int k=0;
            for(int j=i;j<s.length();j++)
            {
                String sub =s.substring(k,j);
                k+=1;
                int temp=product(sub);
                if(temp<max)
                max=temp;
            }
        }
    }
    return max;
}
static int product(String sub, int ab, int bc)
{
    int a=0,b=0;
    for(int 0;i<sub.length();i++)
    {
        if(sub.charAt(i)=='0') b++;
        if(sub.charAt(i)=='1') a++;
        
    }
    int p=(a*ab)-(b*bc);
    return p;
}