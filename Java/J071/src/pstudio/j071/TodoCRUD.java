package pstudio.j071;

import java.util.*;


public class TodoCRUD implements iCRUD {
    private ArrayList<TodoItem> list;
    Scanner sc = new Scanner(System.in);

    public TodoCRUD(Scanner sc) {
        this.list = new ArrayList<>();
        this.sc = sc;
    }

    public Object createItem(){
        return null;
    }


    @Override
    public int addItem() {
        String title, desc;

        System.out.print("Add a Todo item\nEnter the title: ");
        title = sc.nextLine().trim();

        if (isDuplicated(title)) {
            System.out.println("Title can't be duplicated.");
            return 1;
        }

        System.out.print("Enter the detail: ");
        desc = sc.nextLine().trim();

        TodoItem t = new TodoItem(title, desc);
        this.list.add(t);
        System.out.println("Item added.");
        return 0;
    }

    @Override
    public int updateItem() {
        String in, desc;
        int find = 0;
        System.out.println("Edit a Todo Item");
        System.out.print("Enter the title of the item to edit: ");
        in = sc.next();
        sc.nextLine();

        for(int i = 0; i <list.size(); i++) {
            if (list.get(i).getTitle().equals(in)) {
                find = 1;
                System.out.println(list.get(i).toString());
                System.out.print("Enter the detail: ");
                desc = sc.nextLine();
                list.get(i).setDetail(desc);
                System.out.println("item updated.");
                break;
            }
        }
        if(find == 0) System.out.println("Not found.");

        return 0;
    }

    @Override
    public int deleteItem() {
        String in;
        int find = 0;
        System.out.println("Delete a Todo Item");
        System.out.print("Enter the title of the item to remove: ");
        in = sc.next();
        sc.nextLine();

        for(int i = 0; i <list.size(); i++) {
            if (list.get(i).getTitle().equals(in)) {
                find = 1;
                System.out.println(list.get(i).toString());
                list.remove(i);
                System.out.println("item deleted.");
                break;
            }
        }
        if(find == 0) System.out.println("Not found.");
        return 0;
    }

    @Override
    public int printItem() {
        String in;
        int find = 0;
        System.out.println("Print a Todo Item");
        System.out.print("Enter the title of the item to print: ");
        in = sc.next();
        sc.nextLine();

        for(int i = 0; i <list.size(); i++) {
            if (list.get(i).getTitle().equals(in)) {
                find = 1;
                System.out.println(list.get(i).toString());
                break;
            }
        }
        if(find == 0) System.out.println("Not found.");
        return 0;
    }

    boolean isDuplicated(String title) {
        for (TodoItem item : this.list) {
            if (title.equals(item.getTitle())) {
                return true;
            }
        }
        return false;
    }

    public int printAll() {
        System.out.println("Total " + this.list.size() + " items");
        for (TodoItem item : this.list) {
            System.out.println(item.toString());
        }
        return 0;
    }

    public void sortByName() {
        Collections.sort(this.list, new TodoItemNameComparator());
    }

    public void sortByDate() {
        Collections.sort(this.list, new TodoItemDateComparator());
    }

    public void reverseList() {
        Collections.reverse(this.list);
    }
}

class TodoItemNameComparator implements Comparator<TodoItem> {
    @Override
    public int compare(TodoItem o1, TodoItem o2) {
        return o1.getTitle().compareTo(o2.getTitle());
    }
}

class TodoItemDateComparator implements Comparator<TodoItem> {
    @Override
    public int compare(TodoItem o1, TodoItem o2) {
        return o1.getRegDate().compareTo(o2.getRegDate());
    }
}
