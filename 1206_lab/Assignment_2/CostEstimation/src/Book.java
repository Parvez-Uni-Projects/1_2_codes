public class Book {

    private int numberOfPages;
    private int costPerPage;

    Book(int numberOfPages , int costPerPage){
        this.numberOfPages =numberOfPages;
        this.costPerPage =costPerPage;
    }

    public int getNumberOfPages() {
        return numberOfPages;
    }
    public void setNumberOfPages(int numberOfPages) {
        this.numberOfPages = numberOfPages;
    }
    
    public int getCostPerPage() {
        return costPerPage;
    }
    public void setCostPerPage(int costPerPage) {
        this.costPerPage = costPerPage;
    }
    
}
