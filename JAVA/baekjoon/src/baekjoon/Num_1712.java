package baekjoon;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Num_1712 {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		String fir[]=br.readLine().split(" ");
		int fir2[] = new int[3];
		for(int i=0;i<fir.length;i++)
			fir2[i]=Integer.parseInt(fir[i]);
		
		int c=0;
		int cnt=0;
		
		if(fir2[1] >= fir2[2])
			System.out.println("-1");
		else
			System.out.println(fir2[0]/(fir2[2]-fir2[1])+1);
	}
}