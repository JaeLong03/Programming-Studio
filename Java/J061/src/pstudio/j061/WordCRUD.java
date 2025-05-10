package pstudio.j061;

import java.util.ArrayList;
import java.util.Scanner;

public class WordCRUD {
    ArrayList<Word> list;
    Scanner s;

    public WordCRUD(Scanner s) {
        list = new ArrayList<Word>();
        this.s = s;
    }

    void addWord() {
        String english, korean;
        int level;
        Scanner s = new Scanner(System.in);
        System.out.print("English > ");
        english = s.next();
        s.nextLine();
        System.out.print("Korean > ");
        korean = s.nextLine();
        System.out.print("Level (1~3) > ");
        level = s.nextInt();
        Word new_word = new Word(english, korean, level);
        list.add(new_word);
    }

    void editWord() {
        listWord();
        System.out.print("Enter the number of the word to edit: ");
        int index = s.nextInt() - 1;
        s.nextLine();

        if (index >= 0 && index < list.size()) {
            Word w = list.get(index);

            System.out.print("New English > ");
            String english = s.next();
            s.nextLine();

            System.out.print("New Korean > ");
            String korean = s.nextLine();

            System.out.print("New Level (1~3) > ");
            int level = s.nextInt();

            w.setWord(english);
            w.setMeaning(korean);
            w.setLevel(level);

            System.out.println("Word updated successfully.");
        } else {
            System.out.println("Invalid index.");
        }
    }

    void listWord() {
        for (int i = 0; i < list.size(); i++)
            System.out.printf("%d - %s\n", i + 1, list.get(i).toString());
    }

    void deleteWord() {
        listWord();
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
