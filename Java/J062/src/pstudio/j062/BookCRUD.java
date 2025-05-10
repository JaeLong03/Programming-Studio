package pstudio.j062;

import java.util.ArrayList;
import java.util.Scanner;

public class BookCRUD {
    ArrayList<Book> list;
    Scanner s;

    public BookCRUD(Scanner s) {
        list = new ArrayList<Book>();
        this.s = s;
    }

    void addBook() {
        String book, author, category;
        int price, published;
        Scanner s = new Scanner(System.in);
        System.out.print("Book name > ");
        book = s.next();
        s.nextLine();
        System.out.print("Author > ");
        author = s.nextLine();
        System.out.print("Category > ");
        category = s.next();
        s.nextLine();
        System.out.print("Price > ");
        price = s.nextInt();
        System.out.print("Published Year > ");
        published = s.nextInt();
        Book new_book = new Book(book, author, category, price, published);
        list.add(new_book);
    }

    void editBook() {
        listBook();
        System.out.print("Enter the number of the word to edit: ");
        int index = s.nextInt() - 1;
        s.nextLine();

        if (index >= 0 && index < list.size()) {
            Book w = list.get(index);

            System.out.print("New Book > ");
            String book = s.next();
            s.nextLine();

            System.out.print("New Author > ");
            String author = s.nextLine();

            System.out.print("New Category > ");
            String category = s.next();
            s.nextLine();

            System.out.print("New Price> ");
            int price = s.nextInt();

            System.out.print("New Published Year> ");
            int published = s.nextInt();

            w.setBook(book);
            w.setAuthor(author);
            w.setCategory(category);
            w.setPrice(price);
            w.setPublished(published);

            System.out.println("Word updated successfully.");
        } else {
            System.out.println("Invalid index.");
        }
    }

    void listBook() {
        for (int i = 0; i < list.size(); i++)
            System.out.printf("%d - %s\n", i + 1, list.get(i).toString());
    }

    void deleteBook() {
        listBook();
        System.out.print("Enter the number of the word to delete: ");
        int index = s.nextInt() - 1;

        if (index >= 0 && index < list.size()) {
            list.remove(index);
            System.out.println("Word deleted successfully.");
        } else {
            System.out.println("Invalid index.");
        }
    }
}
