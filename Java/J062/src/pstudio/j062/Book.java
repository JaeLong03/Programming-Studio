package pstudio.j062;

public class Book {

    private String book;
    private String author;
    private String category;
    private int price;
    private int published;

    Book(){}

    public Book(String book, String author, String category, int price, int published) {
        this.book = book;
        this.author = author;
        this.category = category;
        this.price = price;
        this.published = published;
    }

    public String getBook() {
        return book;
    }

    public void setBook(String book) {
        this.book = book;
    }

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public String getCategory() {
        return category;
    }

    public void setCategory(String category) {
        this.category = category;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getPublished() {
        return published;
    }

    public void setPublished(int published) {
        this.published = published;
    }

    @Override
    public String toString() {
        String str = String.format(
                "%-20s %-15s %-12s %8d %s",
                book, author, category, price, published
        );
        return str;
    }
    public String toFileString() {
        return this.book + "|" + this.author + "|" + this.category + this.price + "|" + this.published;
    }
}