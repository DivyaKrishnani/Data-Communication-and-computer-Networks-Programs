import java.io.*;
import java.net.*;

class Get_by_name{
	public static void main(String[] args){
	try{
		InetAddress ia = InetAddress.getByName("cse-OptiPlex-9020");
		String ip = ia.getHostAddress();
		System.out.println(ip);	
	}
	catch(IOException e){
		System.out.println("port not available");
	}
	}
	

}
