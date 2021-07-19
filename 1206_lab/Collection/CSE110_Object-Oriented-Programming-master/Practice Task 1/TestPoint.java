public class TestPoint {
    public static void main(String[] args) {
        Point p1 = new Point();
        System.out.println(p1);
        System.out.println(p1.getQuadrantNumber());

        Point p2 = new Point(100, 100);
        System.out.println(p2);
        System.out.println(p2.getQuadrantNumber());

        Point p3 = new Point(-100, 100);
        System.out.println(p3);
        System.out.println(p3.getQuadrantNumber());

        Point p4 = new Point(100, -100);
        System.out.println(p4);
        System.out.println(p4.getQuadrantNumber());

    }

}
