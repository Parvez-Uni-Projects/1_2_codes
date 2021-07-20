public class Developer {

    //*creating two private variables
    private int totalProjects; 
    private int totalMonths;

    
        //*creating the parameterized constructor
        Developer (int totalProjects , int totalMonths){
            this.totalProjects = totalProjects;
            this.totalMonths = totalMonths;
        }
        

            //*declaring the getter and setter methods as the variables are private
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
