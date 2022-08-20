// Some string methods: 
// COMPARE IGNORING UPPER/LOWERCASE: str1.equalsIgnoreCase(str2);
// LENGTH OF STRING: string_name.length();
// SPECIFIC CHARACTER AT AN INDEX: char res = str_name.charAt(index_num);
// CHECK ARRAY IS EMPTY OR NOT: boolean res = name.isEmpty();
// CHANGE ARRAY TO UPPERCASE: String arr2 = arr1.toUpperCase();
// CHANGE ARRAY TO LOWERCASE: String arr2 = arr1.toLowerCase();
// REMOVES SPACES IN THE ARRAY: String arr2 = arr1.trim();
// REPLACE A SPECIFIC CHARACTER: arr.replace('o','a');
// These are just some of the methods, all of them can be recommended if you type arr_name. while writing code.




package tutorial1;

public class StringMethods {
	public static void main(String[] args) {
		
		String name = "Pranav";
		boolean ans = name.equalsIgnoreCase("pranav"); //"IgnoreCase" ignores treats lowercase and uppercase as same
		boolean res = name.equals("pranav");
		System.out.println(ans);
		System.out.print(res);
	}
}
