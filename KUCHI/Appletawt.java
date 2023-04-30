// applet
// write an applet to recieve a value of a parameter msg from the html file and display it on the web page

import java.applet.*;
import java.awt.*;

public class Appletawt extend Applet
{
	String msg;
	public void init()
	{
		msg ="this is a msg ";
	}
	public void start()
	{
		msg= msg+" ";
