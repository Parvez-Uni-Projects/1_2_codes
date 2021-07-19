public class Developer {

    private int totalProjects;
    private int totalMonths;
 
    Developer (int totalProjects , int totalMonths){
        this.totalProjects = totalProjects;
        this.totalMonths = totalMonths;
    }


    public int gettotalProjects()
    {
        return totalProjects;
    }
    public void settotalProjects(){
        this.totalProjects =totalProjects;
    }
    public int gettotalMonths(){
        return totalMonths;
    }
    public void settotalMonths(){
        this.totalMonths = totalMonths;
    }

    
}
