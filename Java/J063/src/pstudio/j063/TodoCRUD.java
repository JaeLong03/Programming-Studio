package pstudio.j063;

import java.util.ArrayList;
import java.util.Scanner;

public class TodoCRUD {
    ArrayList<Todo> list;
    Scanner s;

    public TodoCRUD(Scanner s) {
        list = new ArrayList<Todo>();
        this.s = s;
    }

    void addTodo() {
        String what, content, duedate, category;
        Scanner s = new Scanner(System.in);
        System.out.print("Title > ");
        what = s.next();
        s.nextLine();
        System.out.print("Content > ");
        content = s.nextLine();
        System.out.print("Due date > ");
        duedate = s.nextLine();
        System.out.print("Category > ");
        category = s.next();
        s.nextLine();
        Todo new_todo = new Todo(what, content, duedate, category);
        list.add(new_todo);
    }

    void editTodo() {
        listTodo();
        System.out.print("Enter the number of the word to edit: ");
        int index = s.nextInt() - 1;
        s.nextLine();

        if (index >= 0 && index < list.size()) {
            Todo w = list.get(index);

            System.out.print("New Title > ");
            String what = s.next();
            s.nextLine();

            System.out.print("New content > ");
            String content = s.nextLine();

            System.out.print("New Due Date > ");
            String duedate = s.nextLine();

            System.out.print("New Category > ");
            String category = s.next();
            s.nextLine();

            w.setWhat(what);
            w.setContent(content);
            w.setDuedate(duedate);
            w.setCategory(category);

            System.out.println("Todo updated successfully.");
        } else {
            System.out.println("Invalid index.");
        }
    }

    void listTodo() {
        for (int i = 0; i < list.size(); i++)
            System.out.printf("%d - %s\n", i + 1, list.get(i).toString());
    }

    void deleteTodo() {
        listTodo();
        System.out.print("Enter the number of the todo to delete: ");
        int index = s.nextInt() - 1;

        if (index >= 0 && index < list.size()) {
            list.remove(index);
            System.out.println("Todo deleted successfully.");
        } else {
            System.out.println("Invalid index.");
        }
    }
}
