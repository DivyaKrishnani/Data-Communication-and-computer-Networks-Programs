import java.io.*;
import java.net.*;

class Portlist{
	public static void main(String[] args){
		int i;
		for(i=86;i<1000;i++){
		try{
			DatagramSocket ds = new DatagramSocket(i);
			ds.setReuseAddress(false);
			System.out.println("Port " + i + " Available");
		
		}
		catch(IOException e){
		System.out.println("Port " + i +" not available");
		}
		
		}
	
	}
}
