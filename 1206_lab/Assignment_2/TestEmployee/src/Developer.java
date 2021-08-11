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
            public int getTotalProjects() {
               return totalProjects;
            }
            public void setTotalProjects(int totalProjects) {
                this.totalProjects = totalProjects;
            }

            public int getTotalMonths() {
                return totalMonths;
            }
            public void setTotalMonths(int totalMonths) {
                this.totalMonths = totalMonths;
            }
             
}
