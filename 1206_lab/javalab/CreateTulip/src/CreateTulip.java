public class CreateTulip {
    private static Tulip create;

    public static void main(String[] args) throws Exception {

        Tulip redTulip = new Tulip ("Red",5);
        Tulip whiteTulip = new Tulip ("White",7);

        //System.out.println("Hello, World!");

        System.out.println("Color : " + redTulip.getColor());
        System.out.println("Height : " + redTulip.getHeight());

        System.out.println("Color : " + whiteTulip.getColor());
        System.out.println("Height : " + whiteTulip.getHeight());

        Tulip pinkTulip = new Tulip ();

        pinkTulip=redTulip.create(whiteTulip);

        System.out.println("Color : " + pinkTulip.getColor());
        System.out.println("Height : " + pinkTulip.getHeight());

        Random rand = new Random();
        pinkTulip =rand.create(redTulip,whiteTulip);

        System.out.println("Color : " + pinkTulip.getColor());
        System.out.println("Height : " + pinkTulip.getHeight());

        // double var = 2.3 ;
        // int a=(int) var;

        System.out.println(rand.add(3, 3));

        Tulip greenTulip = new Tulip();
        create = greenTulip.create(redTulip,whiteTulip);

        System.out.println("Color : " + greenTulip.getColor());
        System.out.println("Height : " + greenTulip.getHeight());

        


    }
}
