package pstudio.j063;

public class Todo {

    private String what;
    private String content;
    private String duedate;
    private String category;

    Todo(){}

    public Todo(String what, String content, String duedate, String category) {
        this.what = what;
        this.content = content;
        this.duedate = duedate;
        this.category = category;
    }

    public String getWhat() {
        return what;
    }

    public void setWhat(String what) {
        this.what = what;
    }

    public String getContent() {
        return content;
    }

    public void setContent(String content) {
        this.content = content;
    }

    public String getDuedate() {
        return duedate;
    }

    public void setDuedate(String duedate) {
        this.duedate = duedate;
    }

    public String getCategory() {
        return category;
    }

    public void setCategory(String category) {
        this.category = category;
    }

    @Override
    public String toString() {
        String str = String.format(
                "%-10s %-15s %-15s %-15s",
                what, content, duedate, category
        );
        return str;
    }
    public String toFileString() {
        return this.what + "|" + this.content + "|" + this.duedate + "|" + this.category;
    }
}