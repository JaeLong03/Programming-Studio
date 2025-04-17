import java.util.Scanner; 

public class MyString{ 
    private String str; 

    public static int whichFirst(String s1, String s2){ 
        if(s1.compareToIgnoreCase(s2) < 0){ 
            return 1; 
        }
        else if(s1.compareToIgnoreCase(s2) > 0){ 
            return 2; 
        }
        return 0; 
    }

    public static String removeSpaces(String str){ 
        str = str.replaceAll("\\s",""); 
        return str; 
    }
}