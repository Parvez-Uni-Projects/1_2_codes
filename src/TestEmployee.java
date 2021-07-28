
public class TestEmployee 
{
    public static void main(String[] args) throws Exception {
        int totalProjects= 5; 
        int totalMonths=18;
        Developer dev1 =new Developer(totalProjects,totalMonths);
        HROfficer obj2 =new HROfficer(dev1);
    }
}