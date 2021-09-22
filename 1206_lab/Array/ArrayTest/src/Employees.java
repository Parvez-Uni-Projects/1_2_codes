public class Employees {

    private int eid;
    private int age;
    private String name;
    private String designation;

    public Employees(){

    }
    public Employees (int eid, String name,String designation, int age){
        this.eid = eid;
        this.age = age;
        this.name = name;
        this.designation = designation;
    }

    public void setAge(int age) {
        this.age = age;
    }
    public int getAge() {
        return age;
    }

    public void setDesignation(String designation) {
        this.designation = designation;
    }
    public String getDesignation() {
        return designation;
    }

    public void setEid(int eid) {
        this.eid = eid;
    }
    public int getEid() {
        return eid;
    }
    
    public void setName(String name) {
        this.name = name;
    }
    public String getName() {
        return name;
    }
}
