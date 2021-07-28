public class Developer {
    private int totalProjects; 
    private int totalMonths;

        Developer (int totalProjects , int totalMonths){
            this.totalProjects = totalProjects;
            this.totalMonths = totalMonths;
        }
         
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
