package baekjoon;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Num_1929 {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String str[]=br.readLine().split(" ");
		int a=Integer.parseInt(str[0]);
		int b=Integer.parseInt(str[1]);
		boolean solo[]=new boolean[b+1];
		
		for(int i=2;i<=b;i++) {
			if(solo[i] == false) {
				if(a <= i)
					System.out.println(i);
				
				for(int j=1;(j*i)<=b;j++) {
					//if(solo[i*j]) continue;
					solo[i*j]=true;	//배수를 -1로 처리
				}
			}
		}
		
	}
}
