import java.util.*;
import java.util.ArrayList;
import java.util.Vector;

public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt(),i,a1,a2;
		ArrayList<Vector<Integer>> s=new ArrayList<Vector<Integer>>();
		Vector<Integer> t;
		ArrayList<Integer> ind  = new ArrayList<Integer>();
		for(i=0;i<n;i++){
		    a1=sc.nextInt();
		    a2=sc.nextInt();
		    if(ind.indexOf(a1)==-1){
		        ind.add(a1);
		        t=new Vector<Integer>();
		        t.add(a1);
		        t.add(a2);
		        s.add(t);
		    }
		    if(ind.indexOf(a2)==-1){
		        ind.add(a2);
		        t=new Vector<Integer>();
		        t.add(a1);
		        t.add(a2);
		        s.add(t);
		    }
		    t=s.get(ind.indexOf(a1));
		    for(int j: s.get(ind.indexOf(a2))){
		        if(t.indexOf(j)==-1){
		            t.add(j);
		        }
		    }
		    for(int j: t){
		        s.set(ind.indexOf(j),t);
		    }
		}
		a1=sc.nextInt();
		a2=s.get(ind.indexOf(a1)).size();
		System.out.print(a2);

	}
}
