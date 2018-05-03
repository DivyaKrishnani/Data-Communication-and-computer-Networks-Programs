import java.io.*;
import java.net.*;

class Get_ip_add{
	public static void main(String[] args){
	try{
		InetAddress ia = InetAddress.getLocalHost();
		String ip = ia.getHostAddress();
		System.out.println("IP Address of the machine: " + ip);	
	}
	catch(IOException e){
		System.out.println("port not available");
	}
	}
	

}
