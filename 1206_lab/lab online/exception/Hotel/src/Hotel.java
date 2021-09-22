public class Hotel {
    public static void main(String[] args) throws Exception {
        Booking bookObj = new Booking();

        bookObj.checkID("1234", "passport");
        bookObj.giveDiscount(10,30);

    }
}
