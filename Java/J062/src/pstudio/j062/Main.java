package pstudio.j062;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Main Pstudio = new Main();
        Pstudio.run();
    }

    public void run(){
        int menu, quit = 0;
        Scanner s= new Scanner(System.in);
        BookCRUD manager = new BookCRUD(s);
        while(true) {
            System.out.print("Menu> 1 Add 2 Edit 3 List 4 Delete 0 Exit ");
            menu = s.nextInt();
            switch(menu){
                case 1:
                    manager.addBook();
                    break;
                case 2:
                    manager.editBook();
                    break;
                case 3:
                    manager.listBook();
                    break;
                case 4:
                    manager.deleteBook();
                    break;
                default:
                    quit = 1;
            }
            if (quit == 1) break;
        }

        s.close();
    }
}
