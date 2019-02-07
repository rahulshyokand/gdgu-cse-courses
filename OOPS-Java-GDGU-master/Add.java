import javax.swing.JOptionPane;

class Add{

public static void main(String arg[])
{
String number1;
String number2;
int num1;
int num2;
int sum;

//taking input from user as a string
number1=JOptionPane.showInputDialog("Enter 1st number: ");
number2=JOptionPane.showInputDialog("Enter 2nd number: ");
//converting number1 & number2 in Int value from string
num1=Integer.parseInt(number1);
num2=Integer.parseInt(number2);
//Adding 2 numbers and saving in sum variable
sum=num1+num2;
// Show result in dailog box
JOptionPane.showMessageDialog(null,"Sum is "+sum+".",
                  "Results",JOptionPane.PLAIN_MESSAGE);
//exit

System.exit(0);

}
}
